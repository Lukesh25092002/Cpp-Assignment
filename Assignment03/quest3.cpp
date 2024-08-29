# include <iostream>
using namespace std;

class Stack{
private:
    int *arr;
    int size;
    int top;

public:
    Stack():Stack(5) {}

    Stack(int size):size(size) {
        top = -1;
        arr = new int[size];
    }

    ~Stack() {
        delete []arr;
    }

    void push(int val) {
        if(top==size)    return;
        
        top++;
        arr[top] = val;
    }

    void pop() {
        if(top==-1)    return;

        top--;
    }

    int peek() {
        if(top==-1)    return -1;

        return arr[top];
    }

    bool isFull() {
        if(top==5)
            return true;
        else
            return false;
    }

    bool isEmpty() {
        if(top==-1)
            return true;
        else
            return false;
    }

    bool print() {
        for(int i=0 ; i<=top ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

void printMenu() {
    cout << "The following is the menu for performing operations onto stack...." << endl;
    cout << "1. push" << endl;
    cout << "2. pop" << endl;
    cout << "3. peek" << endl;
    cout << "Is stack empty?" << endl;
    cout << "Is stak full?" << endl;
    cout << "Print Stack" << endl;
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size of stack: ";
    cin >> n;

    Stack st(n);

    printMenu();

    while(true) {
        int opt;
        cout << "Enter your option: ";
        cin >> opt;

        if(opt==1){
            int data;
            cout << " Enter data to push: ";
            cin >> data;

            st.push(data);
        }
        else if(opt==2)
            st.pop();
        else if(opt==3)
            cout << st.peek();
        else if(opt==4) 
            cout << st.isEmpty() << endl;
        else if(opt==5) 
            cout << st.isFull() << endl;
        else if(opt==6)
            st.print();
        else
            break;
    }

    cout << "The loob terminated" << endl;

    // st.push(8);
    // st.push(6);
    // st.pop();
    // st.push(9);
    // st.push(3);

    // st.print();

    // cout << "Top element is " << st.peek() << endl;

    // if(st.isEmpty())
    //     cout << "The stack is empty";
    // else
    //     cout << "The stack in not empty";
    
    // return 0;
}