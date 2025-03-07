
class classStack {
private:
    int arr[100]; 
    int top;      
    int maxSize;  

public:
    void stacksize() {
        cout<<"Enter stack size: ";
        cin>>maxSize;
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

