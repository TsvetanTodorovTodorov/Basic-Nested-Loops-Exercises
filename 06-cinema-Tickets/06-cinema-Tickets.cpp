#include <iostream>
#include <string>

using namespace std;

int main()
{
	string command;
	getline(cin, command); // std?

	int countTotalTickets = 0;
	double countStandardTickets = 0.0;
	double countStudentTickets = 0.0;
	double countKidTickets = 0.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (command != "Finish")
	{
		double seats;
		cin >> seats;
		string ticketType;
		cin >> ticketType;

		double counterBoughtTicketsForMovie = 0.0;

		while (ticketType != "End")
		{		
			counterBoughtTicketsForMovie++;

			if (ticketType == "standard")
			{
				countStandardTickets++;
				countTotalTickets++;
			} 
			else if (ticketType == "student")
			{
				countStudentTickets++;
				countTotalTickets++;
			}
			else if (ticketType == "kid")
			{
				countKidTickets++;
				countTotalTickets++;
			}
			if (counterBoughtTicketsForMovie == seats)
			{
				break;
			}
			cin >> ticketType;
		}

		double percentage = (counterBoughtTicketsForMovie / seats) * 100;
		cout << command << " - " << percentage << "% full." << endl;

		cin.ignore();
		getline(cin, command);
	}

	double percentageStudentTickets = (countStudentTickets / countTotalTickets) * 100;
	double percentageStandardTickets = (countStandardTickets / countTotalTickets) * 100;
	double percentageKidTickets = (countKidTickets / countTotalTickets) * 100;

	cout << "Total tickets: " << countTotalTickets << endl;

	cout << percentageStudentTickets << "% student tickets." << endl;
	cout << percentageStandardTickets << "% standard tickets." << endl;
	cout << percentageKidTickets << "% kids tickets." << endl;

	return 0;
}
