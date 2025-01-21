#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){

srand(time(0));
int number = (rand()% 100 );
int count =0;
int guess;
cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"+                                          +"<<endl;
cout<<"+            Number Guessing Game          +"<<endl;
cout<<"+                                          +"<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"                                            "<<endl;
cout<<"             PLEASE GUESS NUMBER            "<<endl;
while (true){
cin>>guess;


if(guess == number){
    cout<<"You are Correct . The Number is : "<<number<<endl;
    count++;
    cout<<"==========================================="<<endl;
    cout<<"  You guess correct number in "<<count<<" attempts"<<endl;
    cout<<"==========================================="<<endl;
    break ;

}
else if (guess > number){
    cout<<"You Guess Too Large Number  ... Try Again "<<endl;
    count++;
}

else if (guess < number){
    cout<<"You Guess Too Small Number  ... Try Again "<<endl;
    count++;
}
}
}