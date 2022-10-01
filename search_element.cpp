
#include <iostream>
using namespace std;
void search(int a[],int size,int key)
{
    bool flag = 0;
    for (int i = 0 ; i < size; i++)
    {
        if (a[i] == key)
        {
            cout << "Number you entered to search is found at " << i << " index.\n";
            flag = 1;
        } 

    }
    if (flag == 0)
    {
        cout << "Number is not found.\n";
    }
    
}
int main()
{
    int num;
    int a[7] = { 3,6,1,9,5,1,1 };
    cout << "Enter the nuber you want to search in an array: ";
    cin >> num;
    search(a , 7, num);

}
 
