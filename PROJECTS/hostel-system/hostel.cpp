#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

class Hostel {
private:
    string name;
    int rent;
    int bedsAvailable;

public:
    Hostel(const string& hostelName, int hostelRent, int totalBeds)
        : name(hostelName), rent(hostelRent), bedsAvailable(totalBeds) {}

    string getName() const {
        return name;
    }

    int getRent() const {
        return rent;
    }

    int getBedsAvailable() const {
        return bedsAvailable;
    }

    bool reserveBed() {
        if (bedsAvailable > 0) {
            bedsAvailable--;
            saveToFile();
            cout << "\tBed reserved successfully!" << endl;
            return true;
        } else {
            cout << "\tSorry, no beds available!" << endl;
            return false;
        }
    }

    void saveToFile() const {
        ofstream outFile("Hostel.txt");
        if (outFile) {
            outFile << name << " : " << rent << " : " << bedsAvailable << endl;
        } else {
            cerr << "Error: Unable to save hostel data!" << endl;
        }
    }
};

class Student {
private:
    string name;
    string rollNo;
    string address;

public:
    void setDetails(const string& studentName, const string& studentRollNo, const string& studentAddress) {
        name = studentName;
        rollNo = studentRollNo;
        address = studentAddress;
    }

    void saveToFile() const {
        ofstream outFile("Student.txt", ios::app);
        if (outFile) {
            outFile << name << " : " << rollNo << " : " << address << endl;
        } else {
            cerr << "Error: Unable to save student data!" << endl;
        }
    }
};

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void displayMenu() {
    cout << "\tWelcome to Hostel Accommodation System" << endl;
    cout << "\t**************************************" << endl;
    cout << "\t1. Reserve a Bed" << endl;
    cout << "\t2. Exit" << endl;
    cout << "\tEnter your choice: ";
}

int main() {
    Hostel hostel("3star", 5000, 2);
    hostel.saveToFile();

    bool exit = false;
    while (!exit) {
        clearScreen();
        displayMenu();

        int choice;
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 2) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\tInvalid input. Please try again." << endl;
            continue;
        }

        if (choice == 1) {
            clearScreen();

            string studentName, rollNo, address;
            cout << "\tEnter student name: ";
            cin.ignore(); // Clear buffer
            getline(cin, studentName);

            cout << "\tEnter roll number: ";
            getline(cin, rollNo);

            cout << "\tEnter address: ";
            getline(cin, address);

            Student student;
            student.setDetails(studentName, rollNo, address);

            if (hostel.getBedsAvailable() > 0) {
                if (hostel.reserveBed()) {
                    student.saveToFile();
                }
            } else {
                cout << "\tSorry, no beds are available!" << endl;
            }

            cout << "\tPress Enter to continue...";
            cin.get();
        } else if (choice == 2) {
            exit = true;
            cout << "\tThank you for using the system. Goodbye!" << endl;
        }
    }

    return 0;
}
