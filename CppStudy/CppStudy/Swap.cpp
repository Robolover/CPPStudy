#include <iostream>
#include "Swap.h"

using namespace std;

namespace samples
{
	void swapExample()
	{
	int number1 = 10;
	int number2 = 20;

	cout << "num1 : " << number1 << " num2 : " << number2 << endl;

	swap(number1, number2);

	cout << "num1 : " << number1 << " num2 : " << number2 << endl;
	}

	void swap(int& num1, int&num2)
	{
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
}
