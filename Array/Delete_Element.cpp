#include <iostream>
using namespace std;
int deleteElement(int arr[], int pos, int n)
{
    if (pos == 0 || pos > n)
    {
        cout << "Wrong Position!!" << endl;
    }
    else
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
      return n;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, pos;
    cout << "Array Size:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Position of Deletion:";
    cin >> pos;
    int size=deleteElement(arr, pos, n);
    cout<<"After Deletion Array elements are:";
    display(arr,size);
    
    return 0;
}