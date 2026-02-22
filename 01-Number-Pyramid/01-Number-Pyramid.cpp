#include <iostream>
using namespace std;

int main()
{
	// build a pyramid with numbers from 1 to INPUT num

	int num;
	cin >> num;

	int count = 1;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (count == num)
			{
				cout << num << endl;
				return 0;
			}
			cout << count << " ";
			count++;
		}
		cout << endl;
	}

	return 0;
}

