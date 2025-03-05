#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100]; 
    int top;      
    int maxSize;  

public:
    Stack(int size) {
        maxSize = size;
        top = -1; 
    }

    void push(int element) {
        if (top == maxSize - 1) {
            cout << "Stack Overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element; 
        cout << "Pushed " << element << " onto the stack." << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        cout << "Popped " << arr[top--] << " from the stack." << endl; 
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Top element is: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) { 
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the maximum size of the stack: ";
    cin >> size;

    Stack stack(size); 

    while (true) {
        cout << "\nMenu:\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        int choice, element;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to push: ";
                cin >> element;
                stack.push(element);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.peek();
                break;

            case 4:
                stack.display();
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
