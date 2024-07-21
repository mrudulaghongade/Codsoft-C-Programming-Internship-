#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int playerChoice,range;
    char ch;
    cout << "\n\t\t\tWelcome to GuessTheNumber game!"<< endl;
    do
    {
        cout << "\nEnter the range of number you want to play in (starting fron 0) "<<endl;
        cin>>range;
        cout << "\nYou have to guess a secret number between 0 to "<<range<<endl;
        cout<<"\n\t\t\t\t\tGood Luck!"<< endl;
        srand(time(0));
        int secretNumber =(rand() % range);
        int chance=0;
        do
        {
            
            cout << "\n\nEnter the guess number: ";
            cin >> playerChoice;
            if (playerChoice == secretNumber) 
            {
                cout << "Well played! You won "<<playerChoice<<" is the secret number" << endl;
                cout << "\t\t Thanks for playing...."<< endl;
                break;
            }
            else
            {
                if (playerChoice < secretNumber) 
                {
                    cout << "Your guess is lower than the secret number"<< endl;
                    chance+=1;
                }
                if(playerChoice > secretNumber) 
                {
                    cout << "Your guess is higher than the secret number"<< endl;
                    chance+=1;
                }
                
            }
            
        }
        while(secretNumber!=playerChoice);
        cout<<"Do you want to play again ? ('Y' for yes and 'N' for no) "<<endl;
        cin>>ch;
    } 
    while (ch=!'n'||ch!='N');
    return 0;
}        