#include <iostream>
#include <string.h>
#include <random>
#include <cstdlib>
using namespace std;
void lowbet()
{
    cout<<"Enter the bet amount (max amt: 50 Rs.)"<<endl;
    cin>>bet;
    cout<<"Take a guess (any number between 1 and 20)"<<endl;
    cin>>guess;
    number=rand()+20+1;
    if(guess==number)
        {cout<<"Winning number is: "<<number<<endl<<"Congrats! An accurate guess!"<<endl;
        prize=bet+5*bet;}
    else if((guess-number)<=5)
        {cout<<"You won a consolation reward."<<endl;
        prize=bet/2;}
    else
        cout<<"Correct number is: "<<number<<endl<<"Oops! sorry, you've lost this bet, better luck next time:("<<endl;
}

void midbet()
{
    cout<<"Enter the bet amount (max amt: 100 Rs.)"<<endl;
    cin>>bet;
    cout<<"Take a guess (any number between 20 and 50)"<<endl;
    cin>>guess;
    number=rand()+50+1;
    if(guess==number)
        {cout<<"Winning number is: "<<number<<endl<<"Congrats! An accurate guess!"<<endl;
        prize=bet+15*bet;}
    else if((guess-number)<=5)
        {cout<<"You won a consolation reward."<<endl;
        prize=bet/2;}
    else
        cout<<"Correct number is: "<<number<<endl<<"Oops! sorry, you've lost this bet, better luck next time:("<<endl;
}

void highbet()
{
    cout<<"Enter the bet amount (max amt: 150 Rs.)"<<endl;
    cin>>bet;
    cout<<"Take a guess (any number between 50 and 100)"<<endl;
    cin>>guess;
    number=rand()+100+1;
    if(guess==number)
        {cout<<"Winning number is: "<<number<<endl<<"Congrats! An accurate guess!"<<endl;
        prize=bet+35*bet;}
    else if((guess-number)<=5)
        {cout<<"You won a consolation reward."<<endl;
        prize=bet/2;}
    else
        cout<<"Correct number is: "<<number<<endl<<"Oops! sorry, you've lost this bet, better luck next time:("<<endl;
}

void maxbet()
{
    cout<<"Enter the bet amount (max amt: 200 Rs.)"<<endl;
    cin>>bet;
    cout<<"Take a guess (any number between 1 and 100)"<<endl;
    cin>>guess;
    number=rand()+100+1;
    if(guess==number)
        {cout<<"Winning number is: "<<number<<endl<<"Congrats! An accurate guess!"<<endl;
        prize=bet+75*bet;}
    else if((guess-number)<=5)
        {cout<<"You won a consolation reward."<<endl;
        prize=bet/2;}
    else
        cout<<"Correct number is: "<<number<<endl<<"Oops! sorry, you've lost this bet, better luck next time:("<<endl;
}

int main()
{   string name; 
    int bet,prize=1,guess,choice,number; char conf;
    cout<<"Welcome to casino! Let's play some roulette, shall we?"<<endl;
    cout<<"Enter your full name please"<<endl;
    getline(cin,name);
    cout<<"A few pointers before we begin:"<<endl<<"1. There is a cap of betting amount for all kinds of bets."<<endl<<"2. The prize earned would be all cashed in at the end."<<endl<<"3. There are consolation rewards (half the betted amounts) for a guess with a difference of 5 or less, but if a bet is lost, no money is won."<<endl;
    cout<<"Stakes:"<<endl<<"1. Low Bet (Guess The Correct Number Between 1 and 20) - get 5 times more of the initial bet."<<endl<<"2. Mid Bet (Guess The Correct Number Between 20 and 50) - get 15 times more of the initial bet."<<endl<<"3. High Bet (Guess The Correct Number Between 50 and 100) - get 35 times more of the initial bet."<<endl<<"4. Maximum Bet (Includes A Bonus Bet) (Guess The Correct Number Between 1 to 100) - get 75 times more of the initial bet."<<endl;
    cout<<"Enter your betting choice"<<endl;
    cin>>choice;
    do
    {   switch(choice)
            {case 1:{lowbet();
                break;}
            case 2:{midbet();
                break;}
            case 3:{highbet();
                break;}
            case 4:{maxbet();
                break;}
            default:{cout<<"Please enter a correct choice."<<endl; break;}   
            }
        cout<<"Another round? (Y/N)"<<endl;
        cin>>conf;    
    }while(conf=='Y'||conf=='y');
    cout<<"Your total earnings are: "<<prize<<endl<<"Thanks for playing with us!"<<endl;
    return 0;
}