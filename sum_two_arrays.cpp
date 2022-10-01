#include <iostream>
using namespace std;
void sum(int a[], int b[], int size)
{
    int sum[5];
    for (int i = 0; i < size; i++)
    {       
            sum[i] = a[i] + b[i];
            cout << sum[i] << "  ";       
    }
}
void print(int a[], int b[], int size)
{
    cout << "Array A: ";
    for (int i = 0 ; i < size ; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
    cout << "Array B: ";
    for (int j = 0 ; j < size ; j++)
    {
        cout << b[j] << "  ";
    }
}

void sub(int a[], int b[], int size)
{
    int sub[5];
    for (int i = 0; i< size; i++)
    {
        sub[i] = a[i] - b[i];
        cout << sub[i] << "  ";
    }

}
void multiply(int a[], int b[], int size)
{
    int m[5];
    for (int i = 0; i<size; i++)
    {
        m[i] = a[i] * b[i];
        cout << m[i] << "  ";
    }

}

int main()
{
    int a[5] = { 2,5,3,3,2 };
    int b[5] = { 1,5,7,3,2 };
    print(a, b, 5);


    cout << endl;
    cout << "Sum of two arrays is: ";
    sum(a, b, 5);


    cout << endl;
    cout << "Sub of two arrays is: ";
    sub(a, b, 5);


    cout << endl;
    cout << "Multiply of two arrays is: ";
    multiply(a, b, 5);
    

}

