#include "AddIntegers.h"
#include <iostream>

using namespace std;

namespace samples
{
	//내가 친 것
	/*void AddIntegers()
	{
		int input;
		int sum = 0;

		while (true)
		{
			cout << "please enter an integer or EOF";
			cin  >> input;

			if (input == 4)
			{
				cout << "finish";
				break;
			}
			sum += input;
		}

		cout << "Result is : " << sum << endl;
	}*/
	

	//pope code
	void AddIntegers()
	{
		cout << "+------------------------------+" << endl;
		cout << "|          Add Integer         |" << endl;
		cout << "+------------------------------+" << endl;

		int number;
		int sum = 0;

		while(true)
		{
			cout << "please enter an inteager or eof" << endl;
			cin  >> number;

			if (cin.eof())
			{
				break;
			}

			else if (cin.fail())
			{
				cin.clear();
				cin.ignore(LLONG_MAX, '\n');
				continue;
			}
			sum += number;
		}
		cin.clear();

		cout << "the sum is : " << sum << endl;
	}
}