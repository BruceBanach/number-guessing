#include <iostream>
using namespace std;

int main()
{
	int guess;
	int timesGuessed;
	int answer;
	timesGuessed = 0;
	answer = 300;
	do
	{
		cout <<"Guess the number" << endl ;
		cin >> guess;
		timesGuessed = timesGuessed + 1;
		if(guess > answer)
		{
			cout <<"Your guess was larger than the answer" << endl ;
		}
		if(guess < answer)
		{
			cout <<"Your guess was smaller than the answer" << endl ;
		}
	}while(guess != answer);
	cout <<"Correct, it took you " << timesGuessed << " guesses." << endl;
}
