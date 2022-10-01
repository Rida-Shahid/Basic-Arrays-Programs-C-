#include <iostream>
using namespace std;
int sum(int a[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += a[i];
    }
    return s;
}
int multiply(int a[] , int size)
{
    int m = 1;
    for (int i = 0 ; i < size; i++) 
    {
        m = m * a[i];
    }
    return m;

}
int sub(int a[], int size)
{
    int sub = 0;
    for (int i = 0; i < size; i++)
    {
        sub -= a[i];
    }
    return sub;


}
void print(int a[], int size)
{
    cout << "Array contents: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[5] = { 3,5,6,2,1};
    print(a, 5);
    cout << endl;
    int s = sum(a, 5);
    cout << "Sum of all elements: " << s << endl;
    int m = multiply(a, 5);
    cout << "multiplication of all elements: " << m << endl;
    int su = sub(a, 5);
    cout << "Subtraction of all elements of an array: " << su << endl;
}

