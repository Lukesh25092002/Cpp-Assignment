# include <iostream>
using namespace std;

class Animal {
public:
    string name;

    Animal():Animal("") {}
    Animal(string name):name(name) {}
};

int main(){
    Animal obj();
    
    return 0;
}