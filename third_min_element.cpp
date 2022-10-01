#include<iostream>
using namespace std;


int third_min(int a[], int size)
{
    int min = 0;
    int secMin = 0;
    int thirdMin = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[0] < a[1])
        {
            min = a[0];
            secMin = a[1];
        }
        else
            min = a[1];
            secMin = a[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (a[i] < min)
        {
            thirdMin = secMin;
            secMin = min;
            min = a[i];
        }
        else if (a[i] < secMin && a[i] != min)
        {
            thirdMin = secMin;
            secMin = a[i];
        }
    }
    return thirdMin;
}
int main()
{
    int num;
    int arr[7];
    cout << "Enter the elements of an array:  \n";
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    cout << "contents of array: ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "Third Smallest number you entered is: " << third_min(arr, 7) << endl;



}