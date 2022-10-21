#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double N, S;
	int k, i;
	N = 0;
	k = 1;
	while (k <= 20)

	{
		S = 0;
		i = 1;
		while (i <= k)

		{
			S += cos(i+k);
			i++;
		}
		N += sqrt(sin(k)* sin(k)+abs(S));
		k++;

	}
	cout << N << endl;

	N = 0;
	k = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += cos(i + k);
			i++;
		} while (i <= k);

		N += sqrt(sin(k) * sin(k) + abs(S));
		k++;

	} while (k <= 20);

	cout << N << endl;

	N = 0;
	for (k = 1; k <= 20; k++)

	{
		S = 0;
		for (i = 1; i <= k; i++)

		{			
			S += cos(i + k);

		}
		N += sqrt(sin(k) * sin(k) + abs(S));

	}
	cout << N << endl;

	N = 0;
	for (k = 20; k >= 1; k--)

	{
		S = 0;
		for (i = k; i >= 1; i--)

		{
			S += cos(i + k);
		}
			
		N += sqrt(sin(k) * sin(k) + abs(S));
	}
	cout << N << endl;
	return 0;
}