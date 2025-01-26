
// fibonacci series
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// binary search
int binarySearch(int arr[], int l, int r, int x) {
    if(r >= l){
        int mid = l + (r - l) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
