//sort array using template
#include <iostream>
#include <string.h>

using namespace std;

template<typename T>

void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int array[]={4,6,3,5,1};
    // int intSize = sizeof(array) / sizeof(array[0]);
    sortArray(array, 5);
    cout << "Sorted int array: ";
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}