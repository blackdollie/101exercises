#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz\n";
		}
		cout << i << "\n";
	}
    return 0;
}
