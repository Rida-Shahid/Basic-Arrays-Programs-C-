
#include <iostream>
using namespace std;
int max(int a[],int size)
{
    cout << "Max element you entered is: ";
    for (int i = 0; i < size; i++)
    {       
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }     
    }
    return a[0];

}

//Seprate function for printing array elements
void print(int a[], int size)
{
    cout << "Array contents: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    //intialize
    int array[5];
    

    //taking input using FOR loop
    for (int i = 0; i < 5; i++) {

        cout << "Enter the " << i + 1 << " element in array: ";
        cin >> array[i];

    }

    //calling print function with two parameters (array and its size)
    cout << endl;
    print(array, 5);

    //calling max function 
    cout << endl;
    int m = max(array, 5);
    cout << m;


    
}

