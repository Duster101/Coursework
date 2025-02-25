 //Write a C++ program to implement a number guessing game with different difficulty levels.Easy difficulty ranges from 1-8, medium from 1-30, hard from 1-50.Then,generate a random number to check if the guess is correct based on the user's selection.
 #include <iostream>
 using namespace std;
 int main()
 {
    int randnumber,b,difficulty;
    cout<<"Choose the difficulty of the game easy, medium or hard(1 or 2 or 3):";
    cin>>difficulty;
    srand(time(0));
    if (difficulty==1)
    {
        randnumber=(rand() % 8)+1;
        cout<<"A random number has been generated from 1 to 8 please guess the number:";
        cin>>b;
            if (b==randnumber)
            {
                cout<<"correct the random number was:"<<randnumber;
            }
            else
            {
                cout<<"Wrong!! the random number was:"<<randnumber;
            }
    }
    if(difficulty==2)
    {
        randnumber=(rand() % 30)+1;
        cout<<"A random number has been generated from 1 to 30 please guess the number:";
        cin>>b;
            if (b==randnumber)
            {
                cout<<"correct the random number was:"<<randnumber;
            }
            else
            {
                cout<<"Wrong!! the random number was:"<<randnumber;
            }
    }
    if(difficulty==3)
    {
        randnumber=(rand() % 50)+1;
        cout<<"A random number has been generated from 1 to 50 please guess the number:";
        cin>>b;
            if (b==randnumber)
            {
                cout<<"correct the random number was:"<<randnumber;
            }
            else
            {
                cout<<"Wrong!! the random number was:"<<randnumber;
            }
    }
    return 0;
 }
