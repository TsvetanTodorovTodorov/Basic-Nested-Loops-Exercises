#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Program that receives int and check if they are prime or non prime and sum them. 
	// If it`s negative we dont count it. 
	// If we receive command "stop" , program ends.

	string command;
	cin >> command;

	int sumPrime = 0;
	int sumNonPrime = 0;

	while (command != "stop")
	{
		int num = stoi(command);
		int counter = 0;

		if (num < 0)
		{
			cout << "Number is negative." << endl;
		}
		else
		{
			for (int i = 1; i <= num; i++)
			{
				if (num % i == 0)
					counter++;
			}
			if (counter == 2)
			{
				sumPrime += num;
			}
			else {
				sumNonPrime += num;
			}
		}
		cin >> command;
	}
	cout << "Sum of all prime numbers is: " << sumPrime << endl;
	cout << "Sum of all non prime numbers is: " << sumNonPrime << endl;

	return 0;
}
