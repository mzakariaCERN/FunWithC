//Flag-controlled while loop.
//Number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

int main()
{

	int num;
	
	int guess;

	bool done;


	num = (rand() + time(0)) % 100;

	if (num < 0){
	num = -1 * num;
	}
cout << num<<endl;

	done = false;

	while (!done)
	{
		cout << "Enter an integer greater"
			<< " than or equal to 0 and "
			<< "less than 100: ";
	
		cin >> guess;
		cout << endl;

		if (guess == num)
		{
			cout << "You guessed the correct "
				<< "number." << endl;
			done = true;
		}
		else
			if (guess < num )
				cout << "Your guess is lower "
					<< "than the number.\n"
					<<"Guess again!" << endl;
			else 
				cout << "Your guess is higher "
					<< "than the number.\n"
					<< "Guess again!" << endl;
	}
	return 0;
}
