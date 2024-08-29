# include <bits/stdc++.h>
using namespace std;

class Tollbooth {
public:
    long long int carCount;
    double cash;

    Tollbooth() {
        carCount = 0;
        cash = 0;
    }

    void payingCar() {
        carCount++;
        cash += 0.5;
    }

    void nopayCar() {
        carCount++;
    }

    void printOnConsole() {
        cout << "Car count: " << carCount << endl;
        cout << "Total Cash: " << cash << endl;

        long long int payingCarCount = cash/0.5;
        long long int nonpayingCarCount = carCount - payingCarCount;

        cout << "Count of paying cars: " << payingCarCount << endl;
        cout << "Count of nonpaying cars: " << nonpayingCarCount << endl;
    }
};

int main(){
    Tollbooth tollbooth;
    tollbooth.payingCar();
    tollbooth.payingCar();
    tollbooth.nopayCar();
    tollbooth.nopayCar();
    tollbooth.payingCar();
    tollbooth.nopayCar();
    tollbooth.nopayCar();
    tollbooth.payingCar();
    tollbooth.payingCar();

    tollbooth.printOnConsole();
    
    return 0;
}