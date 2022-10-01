
#include <iostream>
using namespace std;

void reverse(int a[], int size)
{
    for (int i = size-1 ; i >= 0; i--)
    {
        cout << a[i] << "  ";
    }
}
void reverse2(int a[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }  
}
void swap(int a[] , int size)
{
    for (int i = 0 ; i < size; i+=2)
    {
        if (i + 1< size)
        {
            swap(a[i], a[i + 1]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[5] = { 2,9,9,4,5 };
    int e[6] = { 2,3,4,7,9,0 };
    //print odd array 
    cout << "Odd original array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    cout << endl;
    //odd
    cout << "Reverse my method: ";
    reverse(a, 5);
    cout << endl;
    cout << endl;
    cout << "Reverse online method: ";
    reverse2(a, 5);
    cout << endl;
    cout << endl;
    cout << "Alternate elements swaping: ";
    swap(a, 5);

    //print even array 
    cout << endl;
    cout << endl;
    cout << "even original array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << e[i] << "  ";
    }
    cout << endl;
    cout << endl;
   
  
    //even
    cout << "Reverse my method(even): ";
    reverse(e, 6);
    cout << endl;
    cout << endl;
    cout << "Reverse online method(even): ";
    reverse2(e, 6);
    cout << endl;
    cout << endl;
    cout << "Alternate elements swaping(even): ";
    swap(e, 6);

}

 