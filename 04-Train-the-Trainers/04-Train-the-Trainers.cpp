#include <iostream>
#include <string>
using namespace std;

int main()
{
	int judges; // number of judges
	cin >> judges;
	cin.ignore();

	string action; // what we receive
	getline(cin, action);

	double finalSum = 0.0;
	int presentationCount = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (action != "Finish") // if it`s not Finish, it`s a subject a.k.a. string and we enter
	{
		presentationCount++; // to count the final avr sum
		double sum = 0.0;	// 
		for (int i = 1; i <= judges; i++)
		{
			double grade;
			cin >> grade;

			sum += grade;

		}
		double avr = sum / judges;
		cout << action << " - " << avr << "." << endl;
		finalSum += avr;
		cin.ignore();
		getline(cin, action);
	}
	double finalAvr = finalSum / presentationCount;

	cout << "Student's final assessment is " << finalAvr << "." << endl;

	return 0;
}