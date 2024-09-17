#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int arr[SIZE] = {1, 20, 5, 78, 30};
    int key, i, index = -1;

    cout << "Enter element to delete: ";
    cin >> key;

    /*
     * Iterate through the array elements using a loop.
     * If any element matches the key, store the index.
     */
    for (i = 0; i < SIZE; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        // Shift all the elements from index+1 by one position to the left
        for (i = index; i < SIZE - 1; i++)
            arr[i] = arr[i + 1];

        cout << "New Array: ";
        for (i = 0; i < SIZE - 1; i++)
            cout << arr[i] << " ";
    } else {
        cout << "Element Not Found" << endl;
    }

    return 0;
}
