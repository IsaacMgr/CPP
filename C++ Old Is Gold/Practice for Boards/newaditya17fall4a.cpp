#include<iostream>
using namespace std ;

class Time {
    protected:
    int hour1, minute1, second1;
    public:

        Time(){
            hour1 = 0; minute1 = 0; second1 = 0 ;
        }
        void getTime() {
            cout<<"Enter hr min and sec: ";
            cin>>hour1>>minute1>>second1 ;
        }
        int gethour1(){return hour1;}
        int getminute1(){return minute1;}
        int getsecond1(){return second1;}
};

class childTime: public Time {
    int hour2, minute2, second2;
    public:

        childTime(){
            hour2 = 0; minute2 = 0; second2 = 0 ;
        }
        childTime(int h, int m, int s) {
            hour2 = h;
            minute2 = m ;
            second2 = s ;
            getTime();
        }
        void addtime(){
            hour2 = hour2 + hour1 ;
            minute2 += minute1 ;
            second2 += second1 ;
            minute2 += second2 / 60 ;
            second2 %= 60 ;
            hour2 += minute2 / 60 ;
            minute2 %= 60 ;
        }
        void disp(){
            cout<<"Time is: "<<hour2<<" "<<minute2<<" "<<second2 ;
        }
    friend class friendChild ;

};

class friendChild {
    int hour3, minute3, second3 ;
    public:
        friendChild(int h, int m, int s) {
            hour3 = h ;
            minute3 = m ;
            second3 = s ;

        }
        void difference(Time  & t){

            hour3 -= t.gethour1() ;
            minute3 -= t.getminute1() ;
            second3 -= t.getsecond1() ;
            disp();
        }
        void disp(){
            cout<<"Time is: "<<hour3<<" "<<minute3<<" "<<second3 ;
        }
};

int main(){
    childTime T(1, 40, 50) ;
    T.addtime();
    T.disp();
    Time T1 ;
    T1.getTime() ;
    friendChild C1(5, 30, 30) ;
    C1.difference(T1) ;
    return 0 ;
}