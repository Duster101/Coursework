//write a program that takes a tempreture value from the user.It should then allow the user to choose between Celsius(C) and Fahrenheit(F). 
//After the user selection, it should then convert the enteredtemp to shoces scale and display the result.
#include<iostream> 
using namespace std;
int main()
{
    char Temp;
    float a, convertedTemp;
    cout<<"what would you like to convert the tempreature into Celsius or Fahrenheit (C or F):";
    cin>>Temp;
    switch (Temp) {
        case 'C':
        case 'c': 
            cout<<"Enter the tempreature:"<<endl;
            cin>>a;
            convertedTemp = (a - 32) * 5 / 9; 
            cout << "The temperature in Celsius is: " << convertedTemp << "°C" << endl;
            break;

        case 'F':
        case 'f': 
            cout<<"Enter the tempreature:"<<endl;
            cin>>a;
            convertedTemp = (a * 9 / 5) + 32; 
            cout << "The temperature in Fahrenheit is: " << convertedTemp << "°F" << endl;
            break;

        default: 
            cout << "Invalid choice! Please enter 'C' or 'F'." << endl;
            break;
    }
    return 0;
}