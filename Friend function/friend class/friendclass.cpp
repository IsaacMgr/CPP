//wap to use friend class

#include<iostream>
using namespace std;
class Practical;
class Theory;
class Total
    {
        int totalMarks;
            public:
                void total2(Practical,Theory);
    };
class Practical
    {
        int pmark;
            public:
                void setMark();
                void displayMark();
                friend class Total;
    };
class Theory
    {
        int tmark;
            public:
                void setMark();
                void displayMark();
                friend class Total;
    };
int main()
    {
        Total mark1;
        Practical pmark;
        Theory tmark;
        pmark.setMark();
        tmark.setMark();
        pmark.displayMark();
        tmark.displayMark();
        mark1.total2(pmark,tmark);
        return 0;
    }
void Practical::setMark()
    {
        cout<<endl<<"ENter practical mark : ";
        cin>>pmark;
    }
void Theory::setMark()
    {
        cout<<endl<<"ENter practical mark : ";
        cin>>tmark;
    }
void Practical::displayMark()
    {
        cout<<endl<<"Practical mark = "<<pmark;
    }
void Theory::displayMark()
    {
        cout<<endl<<"Practical mark = "<<tmark;
    }
void Total:: total2(Practical x, Theory y)
    {
       
        totalMarks= x.pmark+y.tmark;
        cout<<endl<<"The total marks is : "<<totalMarks;
    }