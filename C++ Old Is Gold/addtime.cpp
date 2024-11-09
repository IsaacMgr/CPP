// #include <iostream>
// using namespace std;
// class Time
// {
//     int hour,min,sec;
//     public:
//     void settime();
//     void displaytime();
//     void add(Time,Time);
// };
// void Time::settime()
// {
//     cout<<"hour:";
//     cin>>hour;
//     cout<<"Minute:";
//     cin>>min;
//     cout<<"Second:";
//     cin>>sec;
// }
// void Time::displaytime()
// {
//     cout<<"Hour:"<<hour;
//     cout<<"min:"<<min;
//     cout<<"sec:"<<sec;
// }
// void Time::add(Time t1,Time t2)
// {

//     sec=t1.sec+t2.sec;
//     min=sec/60;
//     sec=sec%60;
//     min+=t1.min+t2.min;
//     hour=min/60;
//     min=min%60;
//     hour+=t1.hour+t2.hour;
    
// }
// int main()
// {
//     Time t1,t2,t3;
//     cout<<"Enter the first time:"<<endl;
//     t1.settime();
//     cout<<"Enter the second time:"<<endl;
//     t2.settime();
//     cout<<"The first time is:"<<endl;
//     t1.displaytime();
//     cout<<"The second time is:"<<endl;
//     t2.displaytime();
//     t3.add(t1,t2);//= halna ko lagi tyo value return bhayera halnu parthyo
//     cout<<"The resultant added time is:";
//     t3.displaytime();
//     return 0;
// }

//time type

// #include <iostream>
// using namespace std;
// class Time
// {
//     int hour,min,sec;
//     public:
//     void settime();
//     void displaytime();
//     Time add(Time);
// };
// void Time::settime()
// {
//     cout<<"hour:";
//     cin>>hour;
//     cout<<"Minute:";
//     cin>>min;
//     cout<<"Second:";
//     cin>>sec;
// }
// void Time::displaytime()
// {
//     cout<<"Hour:"<<hour;
//     cout<<"min:"<<min;
//     cout<<"sec:"<<sec;
// }
// Time Time::add(Time t2)
// {
//     Time result;
//     result.sec=sec+t2.sec;
//     result.min=result.sec/60;
//     result.sec=result.sec%60;
//     result.min+=min+t2.min;
//     result.hour=result.min/60;
//     result.min=result.min%60;
//     result.hour+=hour+t2.hour;
//     return result;
    
// }
// int main()
// {
//     Time t1,t2,t3;
//     cout<<"Enter the first time:"<<endl;
//     t1.settime();
//     cout<<"Enter the second time:"<<endl;
//     t2.settime();
//     cout<<"The first time is:"<<endl;
//     t1.displaytime();
//     cout<<"The second time is:"<<endl;
//     t2.displaytime();
//     t3=t1.add(t2);//= halna ko lagi tyo value return bhayera halnu parthyo
//     cout<<"The resultant added time is:";
//     t3.displaytime();
//     return 0;
// }

//another method using global function as friend function using nonreturn type that is void

// #include <iostream>
// using namespace std;
// class Time;
// void add(Time,Time);
// class Time
// {
//     int hour,min,sec;
//     public:
//     void settime();
//     void displaytime();
//     friend void add(Time,Time);

// };
// void Time::settime()
// {
//     cout<<"hour:";
//     cin>>hour;
//     cout<<"Minute:";
//     cin>>min;
//     cout<<"Second:";
//     cin>>sec;
// }
// void Time::displaytime()
// {
//     cout<<"Hour:"<<hour;
//     cout<<"min:"<<min;
//     cout<<"sec:"<<sec;
// }
// void add(Time t1,Time t2)
// {
//     Time result;
//     result.sec=t1.sec+t2.sec;
//     result.min=result.sec/60;
//     result.sec=result.sec%60;
//     result.min+=t1.min+t2.min;
//     result.hour=result.min/60;
//     result.min=result.min%60;
//     result.hour+=t1.hour+t2.hour;
//     result.displaytime();//tyo aru program ma void function banauda tesai ma cout banayera display gare jastei yesma ni testei result.displaytime
// }
// int main()
// {
//     Time t1,t2;
//     cout<<"Enter the first time:"<<endl;
//     t1.settime();
//     cout<<"Enter the second time:"<<endl;
//     t2.settime();
//     cout<<"The first time is:"<<endl;
//     t1.displaytime();
//     cout<<"The second time is:"<<endl;
//     t2.displaytime();
//     add(t1,t2);//because already the void has returned the display
    
//     return 0;
// }

//another method using global function as friend function but with return type that is time
// #include <iostream>
// using namespace std;
// class Time;
// Time add(Time,Time);
// class Time
// {
//     int hour,min,sec;
//     public:
//     void settime();
//     void displaytime();
//     friend Time add(Time,Time);

// };
// void Time::settime()
// {
//     cout<<"hour:";
//     cin>>hour;
//     cout<<"Minute:";
//     cin>>min;
//     cout<<"Second:";
//     cin>>sec;
// }
// void Time::displaytime()
// {
//     cout<<"Hour:"<<hour;
//     cout<<"min:"<<min;
//     cout<<"sec:"<<sec;
// }
// Time add(Time t1,Time t2)
// {
//     Time result;
//     result.sec=t1.sec+t2.sec;
//     result.min=result.sec/60;
//     result.sec=result.sec%60;
//     result.min+=t1.min+t2.min;
//     result.hour=result.min/60;
//     result.min=result.min%60;
//     result.hour+=t1.hour+t2.hour;
//     return result;
// }
// int main()
// {
//     Time t1,t2,t3;
//     cout<<"Enter the first time:"<<endl;
//     t1.settime();
//     cout<<"Enter the second time:"<<endl;
//     t2.settime();
//     cout<<"The first time is:"<<endl;
//     t1.displaytime();
//     cout<<"The second time is:"<<endl;
//     t2.displaytime();
//     t3=add(t1,t2);//because already the void has returned the display
//     cout<<"The resultant added time is:";
//     t3.displaytime();
//     return 0;
// }

