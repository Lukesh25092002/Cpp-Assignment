# include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date():Date(1,1,1991) {}
    Date(int day,int month,int year):day(day),month(month),year(year) {}

    void setDay(int day) {this->day=day;}
    int getDay() {return day;}

    void setMonth(int month) {this->month=month;}
    int getMonth() {return month;}

    void setYear(int year) {this->year=year;}
    int getYear() {return year;}

    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

};

class Person {
private:
    string name;
    string address;
    Date birthdate;

public:
    Person() {}

    Person(string name,string address,Date birthdate) {
        this->name = name;
        this->address = address;
        this->birthdate = birthdate;
    }

    void setName(string name) {this->name=name;}
    string getName() {return name;}
    void setAddress(string address) {this->address=address;}
    string getAddress() {return this->address;}
    void setBirthdate(Date birthdate) {this->birthdate=birthdate;}
    Date getBirthdate() {return birthdate;}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        birthdate.display();
    }
};

int main(){
    Date* date = new Date(30,8,2024);

    Person person;
    person.setName("Lukesh Patil");
    person.setBirthdate(*date);
    person.setAddress("Mayur nagri, Phase 2,flat no. 202, pimple gurav, pune");

    person.display();
    
    delete date;
    date = NULL;
    
    return 0;
}