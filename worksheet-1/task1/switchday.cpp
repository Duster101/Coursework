//4.	Write a program that reads a number from the user and based on the user input, it says what day of the week it is, Sundays being 1 and Saturdays being 7. You system should give appropriate response for invalid input entries. [20 marks]
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number (1-7) to know the day of the week it is: ";
    cin>>num;
    switch(num)
    {
        case 1:
        cout<<"It is Sunday";
        break;
        case 2:
        cout<<"It is Monday";
        break;
        case 3:
        cout<<"It is Tuesday";
        break;
        case 4:
        cout<<"It is Wenesday";
        break;
        case 5:
        cout<<"It is Thursday";
        break;
        case 6:
        cout<<"It is Friday";
        break;
        case 7:
        cout<<"It is Saturday";
        break;
        default:
        cout<<"Invalid input please press num (1-7)";
        break;
    }
    return 0;
}