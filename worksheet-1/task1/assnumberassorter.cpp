//write a program that reads an array of integer number from the user and sort the number in the assending order
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Enter how many integer do you want: ";
    cin>>n;
    cout<<"enter "<<n<<" integers:";
    for (int i=0;i<n;i++)
    {
       
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<<"the sorted numbers : ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}
