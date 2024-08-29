# include <bits/stdc++.h>
using namespace std;

enum Menu {
    EXIT = 0,
    ADD,
    PRINT,
    SEARCH,
    SORT
};

int search(Student*[],int,int);
void sort(Student*[],int);

class Student {
public:
    string name;
    char gender;
    const int rollNumber;
    int *marks;

private:
    int subjectCount=3;
    static int lastRollNumber;

    int generateRollNumber() {
        lastRollNumber++;
        return lastRollNumber;
    }

public:
    Student():rollNumber(generateRollNumber()) {
        marks = new int[subjectCount];
    }

    ~Student() {
        delete[] marks;
    }

    void acceptStudent() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter gender: ";
        cin >> gender;
       
        for(int i=0 ; i<subjectCount ; i++){
            cout << "Enter marks in " << i+1 << " subject: ";
            cin >> marks[i];
        }
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Gender" << gender << endl;
        cout << "Percentage: " << caluclatePercentage() << endl;
    }

    double caluclatePercentage() {
        int totalMarks = 0;
        for(int i=0 ; i<subjectCount ; i++){
            totalMarks += marks[i];
        }

        return (double) totalMarks/subjectCount;
    }
};

int Student::lastRollNumber = 0;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    Student *arr[n];
    for(int i=0 ; i<n ; i++) {
        arr[i] = new Student();
        arr[i]->acceptStudent();
        return 0;
    }

    for(int i=0 ; i<n ; i++){
        arr[i]->displayDetails();
    }

    int choice;
    do {
        cout << "Enter you chocie: ";
        cin >> choice;

    } while(choice!=0);
    
    return 0;
}

int search(Student* arr[],int size,int rollNumber) {
    for(int i=0 ; i<size ; i++){
        if(arr[i]->rollNumber==rollNumber)
            return i;
    }

    return -1;
}

void sort(Student* arr[],int size) {
    // 
}