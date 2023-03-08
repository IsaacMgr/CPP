/*WAP to swap two values and three values using overloaded template function*/
// #include <iostream>
// using namespace std;
// template <typename T>
// void swap(T &a, T &b)
// {
//     T temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"\nBefore swapping the values are:\na="<<a<<"b="<<b<<endl;
// }
// int main()
// {
//     int x=10,y=20;
//     swap(x,y);
//     cout<<"\nAfter swapping the values are:\na="<<a<<"b"<<b<<endl;
//     return 0;

    
// }
#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
// The swap function takes two references a and b of any type T and swaps their values using a temporary variable. The function can be used to swap values of any type. In the main function, we use the swap function to swap two integers x and y.




