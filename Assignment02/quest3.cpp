# include <bits/stdc++.h>
using namespace std;

class Address {
public:
    string building,street,city;
    int pin;

    Address():Address("","","",0) {}

    Address(string building,string street,string city,int pin) {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void setBuilding(string building) {this->building = building;}
    string getBuilding() {return building;}

    void setStreet(string street) {this->street = street;}
    string getStreet() {return street;}

    void setCity(string city) {this->city=city;}
    string getCity() {return city;}

    void setPin(int pin) {this->pin=pin;}
    int getPin() {return pin;}

    void display() {
        cout << "Your address is..." << endl;
        cout << "Building : " << building << endl;
        cout << "Street : " << street << endl;
        cout << "City : " << city << endl;
        cout << "Pin : " << pin << endl;
        cout << endl;
    }
};

int main(){
    Address addr1("Mayur Nagri, Phase2, R bldg","Ram Nagar","Pune",411061);
    addr1.display();

    Address addr2;
    addr2.setBuilding("Mayur Nagri, Phase2, R bldg");
    addr2.setStreet("Ram Nagar");
    addr2.setCity("Pune");
    addr2.setPin(411061);

    addr2.display();

    cout << "Your address is..." << endl;
    cout << "Building : " << addr2.building << endl;
    cout << "Street : " << addr2.street << endl;
    cout << "City : " << addr2.city << endl;
    cout << "Pin : " << addr2.pin << endl;
    cout << endl;
    
    return 0;
}