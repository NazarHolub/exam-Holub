#include <iostream>
using namespace std;

int Sum(int ptr[]);

int main()
{
	const int SIZE = 17;
	int arr[SIZE];
	char num[SIZE];

	system("pause");
	return 0;
}

int Sum(int ptr[])
{
	int sum = 0;
	for (int i = 15; i >= 0; i--)
	{
		if (i % 2 == 0)
			sum += ptr[i];

		if (i % 2 != 0)
			sum += 2 * ptr[i];
	}
	return sum;
}