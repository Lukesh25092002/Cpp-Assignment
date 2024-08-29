# include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    const string name = "Momo";

    Animal() {}

    void run() {
        cout << name;
    }
};

int main(){
    Animal ani;
    ani.run();
    
    return 0;
}