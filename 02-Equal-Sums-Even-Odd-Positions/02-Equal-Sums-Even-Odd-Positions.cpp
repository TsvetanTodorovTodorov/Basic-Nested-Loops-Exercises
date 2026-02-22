#include <iostream>
#include <string>
//#include <climits>
using namespace std;

int main()
{
	// iterate the numbers from first to last with incement += 1;
	//have to summarize numbers of even and odd positions and if that are equal to print the number
	// input numbers are from 100 000 to 300 000 and first is always smaller then second
	int first, last;
	cin >> first >> last;

	for (int i = first; i <= last; i++)
	{
		string num = to_string(i);
		int sumOdd = 0;
		int sumEven = 0;
		for (int j = 0; j < 6; j++)
		{
			if (j % 2 != 0)
			{
				int	n = num[j] - '0';
				sumOdd += n;
			}
			else 
			{
				sumEven += num[j] - '0';
			}
		}
		if (sumOdd == sumEven)
		{
			cout << num << " ";
		}
	}


	return 0;
}
// 100000 100050