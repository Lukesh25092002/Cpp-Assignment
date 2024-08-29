# include <bits/stdc++.h>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

void initDate(struct Date* ptr) {
    ptr->day = 28;
    ptr->month = 8;
    ptr->year = 2024;
}

void printDateOnConsole(struct Date* ptr) {
    cout << ptr->day << "/" << ptr->month << "/" << ptr->year << endl;
}

void acceptDateFromConsole(struct Date* ptr) {
    cout << "Enter day: ";
    cin >> ptr->day;

    cout << "Enter month: ";
    cin >> ptr->month;

    cout << "Enter year: ";
    cin >> ptr->year;
}

int main(){
    struct Date date1;
    initDate(&date1);
    printDateOnConsole(&date1);

    Date date2;
    acceptDateFromConsole(&date2);
    printDateOnConsole(&date2);
    
    return 0;
}