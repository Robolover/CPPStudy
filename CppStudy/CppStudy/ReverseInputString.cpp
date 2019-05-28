#include "ReverseInputString.h"
#include <iostream>

using namespace std;

namespace samples
{
	void ReverseInputString()
	{
		const int LINE_SIZE = 512;
		char line[LINE_SIZE];

		cout << "please any word write : ";
		cin.getline(line, LINE_SIZE);

		if (cin.fail())
		{
			cin.clear();
			return;
		}

		char* p = line;
		char* q = line + strlen(line) - 1;

		while (p < q)
		{
			char temp = *p;
			*p = *q;
			*q = temp;

			++p;
			--q;
		}

		cout << line;
	}
}