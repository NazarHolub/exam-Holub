#include <iostream>
using namespace std;

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



