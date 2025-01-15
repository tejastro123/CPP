#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

class University {
private:
    string rollNo, name, subject, address;

public:
    University() : rollNo(""), name(""), subject(""), address("") {}

    void setRollNo(const string& rollNoInput) { rollNo = rollNoInput; }
    void setName(const string& nameInput) { name = nameInput; }
    void setSubject(const string& subjectInput) { subject = subjectInput; }
    void setAddress(const string& addressInput) { address = addressInput; }

    string getRollNo() const { return rollNo; }
    string getName() const { return name; }
    string getSubject() const { return subject; }
    string getAddress() const { return address; }
};

void addStudent(const University& student) {
    string rollNo, name, subject, address;

    cout << "\tEnter RollNo of Student: ";
    cin >> rollNo;
    cout << "\tEnter Name of Student: ";
    cin.ignore();
    getline(cin, name);
    cout << "\tEnter Subject of Student: ";
    getline(cin, subject);
    cout << "\tEnter Address of Student: ";
    getline(cin, address);

    ofstream out("university.txt", ios::app);
    if (!out) {
        cerr << "\tError: Unable to open file!" << endl;
        return;
    }

    out << rollNo << " : " << name << " : " << subject << " : " << address << endl;
    out.close();

    cout << "\tStudent Added Successfully!" << endl;
}

void searchStudent() {
    string rollNo;
    cout << "\tEnter RollNo of Student: ";
    cin >> rollNo;

    ifstream in("university.txt");
    if (!in) {
        cerr << "\tError: Unable to open file!" << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(in, line)) {
        if (line.find(rollNo) != string::npos) {
            cout << "\t" << line << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "\tStudent Not Found!" << endl;
    }

    in.close();
}

void updateStudent() {
    string rollNo;
    cout << "\tEnter RollNo of Student: ";
    cin >> rollNo;

    ifstream infile("university.txt");
    ofstream outfile("university_temp.txt");

    if (!infile || !outfile) {
        cerr << "\tError: Unable to open file!" << endl;
        return;
    }

    string line;
    bool found = false;

    while (getline(infile, line)) {
        if (line.find(rollNo) != string::npos) {
            string address;
            cout << "\tEnter New Address: ";
            cin.ignore();
            getline(cin, address);

            size_t lastColon = line.find_last_of(':');
            if (lastColon != string::npos) {
                line = line.substr(0, lastColon + 2) + address;
            }
            found = true;
        }
        outfile << line << endl;
    }

    if (!found) {
        cout << "\tStudent Not Found!" << endl;
    } else {
        cout << "\tData Updated Successfully!" << endl;
    }

    infile.close();
    outfile.close();

    remove("university.txt");
    rename("university_temp.txt", "university.txt");
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayMenu() {
    cout << "\tWelcome to University Management System" << endl;
    cout << "\t***************************************" << endl;
    cout << "\t1. Add Student" << endl;
    cout << "\t2. Search Student" << endl;
    cout << "\t3. Update Student Data" << endl;
    cout << "\t4. Exit" << endl;
    cout << "\tEnter Your Choice: ";
}

int main() {
    bool exit = false;

    while (!exit) {
        clearScreen();
        displayMenu();

        int choice;
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\tInvalid choice. Please try again." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            clearScreen();
            addStudent(University());
            break;
        case 2:
            clearScreen();
            searchStudent();
            break;
        case 3:
            clearScreen();
            updateStudent();
            break;
        case 4:
            clearScreen();
            exit = true;
            cout << "\tGoodbye!" << endl;
            break;
        }

        if (!exit) {
            cout << "\tPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}
