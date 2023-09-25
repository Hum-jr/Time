#include "iostream"
using namespace std;

class Time{
private:
    int minutes;
    int hours;
    int seconds;
public:
    Time():minutes(0),hours(0),seconds(0){

    }
    Time(int h,int m, int s):minutes(m),hours(h),seconds(s){

    }
    void display()const{
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }

    void addTime(Time,Time);

};

void Time::addTime(Time t1, Time t2) {
    seconds=t1.seconds+t2.seconds;
    minutes=t1.minutes+t2.minutes;
    hours=t1.hours+t2.hours;

    do {

        if (seconds >= 60) {
            minutes++;
            seconds -= 60;
        } else if (minutes >= 60) {
            hours++;
            minutes -= 60;
        }
    } while(seconds>=60 || minutes>=60);
}

int main(){
    const Time t1(2,40,30),t2(1,20,40);
    Time t3;
    t3.addTime(t1,t2);
    t3.display();
}

