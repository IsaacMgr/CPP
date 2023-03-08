#include <iostream>
using namespace std;
template<typename T>
void maximum(T a,T b,T c)
{
    if(a>b &&a>c)
    {
        cout<<"Maximum among the number is:"<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"Maximum among the number is:"<<b<<endl;
    }
    else
    {
        cout<<"Maximum among the number is:"<<c<<endl;
    }
}
int main()
{
    int a=10,b=20,c=30;
    // maximum(a,b,c);
    maximum<int>(a,b,c);

    return 0;
}