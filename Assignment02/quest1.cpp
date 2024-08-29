# include <bits/stdc++.h>
using namespace std;

class Cuboid {
public:
    float length,width,height;

    Cuboid(float length,float width,float height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    Cuboid():Cuboid(0,0,0) {}

    Cuboid(float scale):Cuboid(scale,scale,scale) {}

    float calcVolume() {
        float vol = length*width*height;
        return vol;
    }
};

void displayMenu() {
    cout << "The following is menu..." << endl;
    cout << "1. Calculate volume with default volume" << endl;
    cout << "2. Calculate Volume with length,breadth and height with same value" << endl;
    cout << "3. Calculate Volume with different length,breadth and height values << endl";
    cout << "Anyother to quit the program...";
    cout << endl << endl;
}

int main(){
    // Cuboid obj(5,5,5);
    // cout << obj.calcVolume();

    while(true) {
        displayMenu();

        int opt;
        cout << "Please enter an option: ";
        cin >> opt;

        if(opt==1){
            Cuboid cuboid;
            cout << "The volume is " << cuboid.calcVolume() << endl;
        }
        else if(opt==2){
            float scale;
            cout << "Enter the scale: ";
            cin >> scale;

            Cuboid cuboid(scale);
            cout << "The volume is " << cuboid.calcVolume() << endl;
        }
        else if(opt==3){
            float l,b,h;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;

            Cuboid cuboid(l,b,h);
            cout << "The volume is " << cuboid.calcVolume() << endl;
        }
        else
            break;
        
        cout << endl;
    }

    cout << endl << endl;
    cout << "The program is terminated";
    
    return 0;
}