#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double P, S, k, i;

	S = 0;
	i = 1;

	while (i <= 10)
	{
		P = 1;
		k = 1;

		while (k <= i)
		{
			P *= k/i;
			k++;
		}

		S += (1 + P) / pow(i, 2);
		i++;
	}

	cout <<"1)S= " << S << endl;

	S = 0;
	i = 1;

	do 
	{
		P = 1;
		k = 1;
		do {
			P *= k / i;
			k++;
		} while (k <= i);

		S += (1 + P) / pow(i, 2);
		i++;
	} while (i <= 10);

	cout << "2)S= " << S << endl;

	S = 0;

	for (i = 1; i <= 10; i++)
	{
		P = 1;
		for (k = 1; k <= i; k++)
			P *= k / i;

		S += (1 + P) / pow(i, 2);
	}

	cout << "3)S= " << S << endl;

	S = 0;

	for (i = 10;  i>= 1; i--)
	{
		P = 1;
		for (k = i; k >= 1; k--)
			P *= k / i;

		S += (1 + P) / pow(i, 2);
	}

	cout << "4)S= " << S << endl;

	return 0;
}