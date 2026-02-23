#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n; // input is a single integer

	// the goal is to itarate trough the nums in the for loop and too see
	// does when we divide the input number to every single digit from these numbers and 
	// the remainder is 0; 
	// is so we print this number from te loop

	for (int i = 1111; i <= 9999; i++)
	{
		string num = to_string(i);
		int counter = 0;
		for (int j = 0; j <= 3; j++)
		{
			int singleDigit = num[j] - '0';
			if (singleDigit == 0)
			{
				break;
			}
			if (n % singleDigit == 0)
			{
				counter++;
			}
		}
		if (counter == 4)
		{
			cout << i << " ";
		}
	}

	return 0;
}
