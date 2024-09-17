#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = 35;
     for (int i = n - 1; i > 3; i--) {
        arr[i] = arr[i - 1];
    }
    arr[3] = value;
    cout << "Array elements: ";
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
return 0;
}
