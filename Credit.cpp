#include <iostream>
using namespace std;

int Sum(int ptr[]);
void EnterCredit(char num[], int size);

int main()
{
	const int SIZE = 17;
	int arr[SIZE];
	char num[SIZE];

	EnterCredit(num, SIZE);
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

void EnterCredit(char num[], int size)
{
	bool check = false;

	do
	{
		cout << "Enter num of credit: ";
		for (int i = 0; i < size, (num[i] = cin.get()) != '\n'; i++)
			continue;

		check = Check(check, size, num);

		if (check == false)
			cout << "Enter correct num.\n";

	} while (check == false);
}

