#include <iostream>
using namespace std;

class Array {
public:
    int arr[100];
    int size;


    Array() {
        size = 0;
    }

    void insertionSort() {
        for (int i = 1; i < size; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void printArray() {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }

    void insertElement(int element, int position) {
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        if (size >= 100) {
            cout << "Array is full!" << endl;
            return;
        }

        for (int i = size; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        size++;

        insertionSort();
    }

    void deleteElement(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void inputElements() {
        cout << "Enter the number of initial elements: ";
        cin >> size;

        if (size > 100) {
            cout << "Too many elements! Using first 100." << endl;
            size = 100;
        }

        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        insertionSort();
    }

    void displayInitialArray() {
        cout << "Initial sorted array: ";
        printArray();
    }
};

int main() {
    Array obj;

    obj.inputElements();
    obj.displayInitialArray();

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
                obj.insertElement(element, position);
                break;
            case 2:
                cout << "Enter the position to delete: ";
                cin >> position;
                obj.deleteElement(position);
                break;
            case 3:
                cout << "Current array: ";
                obj.printArray();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

