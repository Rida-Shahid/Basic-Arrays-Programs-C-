
#include <iostream>
using namespace std;

int second_max(int a[], int size)
{
    int max = 0;
    int secMax = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[0] < a[1])
        {
            max = a[1];
            secMax = a[0];
        }
        else
        {
            max = a[0];
            secMax = a[1];
        }
    }
    for (int i = 2; i < size; i++)
    {
        if (a[i] > max)
        {
            secMax = max;
            max = a[i];
        }
        else if (a[i] > secMax && a[i] != max)
        {
            secMax = a[i];
        }
    }
    return secMax;
}
int main()
{
    int array[7];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < 7; i++)
    {
        cin >> array[i];
    }
    cout << "Contents of array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
    cout << "second largest element you entered is:" << second_max(array,7) << endl;
   
}
