//"NUMBER GUESSING GAME"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
srand(time(0));

int randomnumber=rand()%100+1;//random number would be genrated between range 1-100;

int guess;

cout<<"WELCOME TO THE NUMBER GUESSING GAME.I HAVE SELECTED A RANDOM NUMBER FOR YOU FROM RANGE 1-100.CAN U GUESS IT"<<endl;
do{
	cout<<"ENTER YOUR GUESS: "<<endl;
	cin>>guess;
	if(guess>randomnumber){
		cout<<"TOO HIGH.TRY AGAIN"<<endl;
	}
		
		else if(guess<randomnumber){
			cout<<"TOO LOW.TRY AGAIN"<<endl;
		}
		else{
			cout<<"CONGRATULATIONS YOU GUESSED THE RIGHT NUMBER:"<<randomnumber<<endl;
		}
	}while(guess!=randomnumber);
return 0;
}