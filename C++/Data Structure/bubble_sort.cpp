#include <iostream>
using namespace std;
int main() {
    int size, i, j, temp;
    cout << "Enter no. of elements in array you want: ";
    cin >> size;
    int array[size];
    for (i = 1; i <= size; i++) {
        cout << "Enter " << i << "th element: ";
        cin >> array[i];
    }
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "\nYour array after bubble sort is:\n[";
    for (i = 1; i <= size; i++) {
        cout << " " << array[i];
    }
    cout << " ]";
    return 0;
}