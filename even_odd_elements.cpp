#include <iostream>
using namespace std;

void even(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << a[i] << "  ";
        }
    }

}
void odd(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << a[i] << "  ";
        }
    }

}

int main()
{
    int arr[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter the " << i + 1 << " element: \n";
        cin >> arr[i];
    }
    cout << "Array Contents: ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "  ";

    }
    cout << endl;
    cout << "Even elemnts: \n";
    even(arr,8);
    cout << endl;
    cout << "odd elements: \n";
    odd(arr,8);

}