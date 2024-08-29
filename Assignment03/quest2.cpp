# include <iostream>
using namespace std;

class Time{
public:
    int hour,minute,seconds;

    Time():Time(0,0,0) {}
    Time(int h,int m,int s):hour(h),minute(m),seconds(s) {}

    void setHour(int hour) {this->hour=hour;}
    int getHour() {return hour;}

    void setMinute(int minute) {this->minute=minute;}
    int getMinute() {return minute;}

    void setSeconds(int seconds) {this->seconds=seconds;}
    int getSeconds() {return seconds;}

    void printTime() {
        cout << hour << ":" << minute << ":" << seconds << endl;
    }
};

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    Time* arr = new Time[n];
    for(int i=0 ; i<n ; i++){
        cout << "Enter the details for " << i << " time" << endl;
        int h,m,s;

        cout << "Enter hour: ";
        cin >> h;
        arr[i].setHour(h);

        cout << "Enter minute: ";
        cin >> m;
        arr[i].setMinute(m);

        cout <<"Enter seconds: ";
        cin >> s;
        arr[i].setSeconds(s);

        cout << "The time is ";
        arr[i].printTime();
        cout << endl;
    }
    
    delete[] arr;
    arr = NULL;
    
    return 0;
}