#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void insertElement(int arr[], int &n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    insertionSort(arr, n);
}

void deleteElement(int arr[], int &n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int arr[100];
    int n;

    cout << "Enter the number of initial elements: ";
    cin >> n;

    if (n > 100) {
        cout << "Too many elements! Using first 100." << endl;
        n = 100;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Initial sorted array: ";
    printArray(arr, n);

    while (true) {
        cout << "\nMenu:\n1. Insert Element\n2. Delete Element\n3. Display Array\n4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                int element;
                cin >> element;
                cout << "Enter the position: ";
                int position;
                cin >> position;
                insertElement(arr, n, element, position);
                break;
            case 2:
                cout << "Enter the position to delete: ";
                cin >> position;
                deleteElement(arr, n, position);
                break;
            case 3:
                cout << "Current array: ";
                printArray(arr, n);
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

