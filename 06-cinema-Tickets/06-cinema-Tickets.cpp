#include <iostream>
#include <string>

using namespace std;

int main()
{
	string command;
	getline(cin, command); // std?

	int countTotalTickets = 0;
	while (command != "Finish")
	{
		int seats;
		cin >> seats;
		string ticketType;
		cin >> ticketType;

		int countStandardTickets = 0;
		int countStudentTickets = 0;
		int countKidTickets = 0;
		
		while (ticketType != "End")
		{			
			countTotalTickets++;

			if (ticketType == "standard")
			{
				countStandardTickets++;
				seats--;

			} 
			else if (ticketType == "student")
			{
				countStudentTickets++;
				seats--;
			}
			else if (ticketType == "kid")
			{
				countKidTickets++;
				seats--;
			}
			if (seats == 0)
			{
				break;
			}
			cin >> ticketType;
		}
		cout << countStandardTickets << endl;
		cout << countStudentTickets << endl;
		cout << countKidTickets << endl;

		cin.ignore();
		getline(cin, command);
	}
		cout << countTotalTickets << endl;

	return 0;
}
