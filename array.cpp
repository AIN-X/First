#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int invalue = 60;
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Create a new array with a larger size
    int newArr[arrSize + 1];

    // Copy elements from original array to new array
    for (int i = 0; i < arrSize; i++) {
        newArr[i] = arr[i];
    }

    // Append the new value to the end of the new array
    newArr[arrSize] = invalue;

    // Print the full array list
    cout << "Array elements: ";
    for (int i = 0; i <= arrSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}