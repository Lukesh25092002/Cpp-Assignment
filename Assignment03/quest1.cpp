# include <iostream>
using namespace std;

class Cylinder{
private:
    double radius;
    double height;

public:
    static const double PI;

public:
    Cylinder():Cylinder(1,1) {}
    Cylinder(double radius,double height):radius(radius),height(height) {}

    void setRadius(double radius) {this->radius=radius;}
    double getRadius() {return radius;}

    void setHeight(double height) {this->height=height;}
    double getHeight() {return height;}

    double calculateVolume() {
        double volume = Cylinder::PI * radius*radius*height;
        return volume;
    }
};

const double Cylinder::PI = 3.14;

int main(){
    Cylinder cylinder1;

    double height;
    cout << "Enter the height: ";
    cin >> height;
    cylinder1.setHeight(height);
    

    double radius;
    cout << "Enter the radius: ";
    cin >> radius;
    cylinder1.setRadius(radius);

    cout << endl;
    cout << "Printing data of cylinder ..." << endl;
    cout << "Height: " << cylinder1.getHeight() << endl;
    cout << "Radius: " << cylinder1.getRadius() << endl;
    cout << "PI constant: " << Cylinder::PI << endl;
    cout << "The volume of the cylinder is " << cylinder1.calculateVolume() << " cubic units";
    
    return 0;
}