
//Create a program that takes a positive integer as input and determines whether it's a "bouncy number". A bouncy number is one where the digits neither consistently increase nor consistently decrease when read from left to right. For example:
//•	123 is NOT bouncy (digits consistently increase)
//•	321 is NOT bouncy (digits consistently decrease)
//•	120 is bouncy (neither consistently increasing nor decreasing)
#include<iostream>
using namespace std;
int main()
{
    int i,a[3];
    cout<<"Enter the number : ";
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    if(a[0]<a[1]&&a[1]<a[2])
        {
            cout<<"Not bouncy incresing trend.";
        }
    else if(a[0]>a[1]&&a[1]>a[2])
        {
            cout<<"Not bouncy decreasing trend.";
        }
    else
        {
            cout<<"The number is boncy,";
        }
        return 0;
    }