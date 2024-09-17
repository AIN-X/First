#include <iostream>
using namespace std;

int main() {
    // Original array
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements in the array
    int indexToDelete = 2; // Index of the element to delete (e.g., 30 at index 2)

    // Shift elements to the left to fill the gap
    for (int i = indexToDelete; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Optional: Decrease the size of the array by one (this step is conceptual, as C++ arrays have fixed sizes)
    n--;

    // Print the remaining elements
    cout << "Array elements after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
