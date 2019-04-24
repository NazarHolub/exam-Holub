#include <iostream>
using namespace std;

int Sum(int ptr[]);
void EnterCredit(char num[], int size);
void Change(int arr[], char num[], int size);
bool Check(bool check, int size, char num[]);
void Show(int arr[], int size);
void Valiable(int sum);

int main()
{
	const int SIZE = 17;
	int arr[SIZE];
	char num[SIZE];

	EnterCredit(num, SIZE);
	Change(arr, num, SIZE);
	Show(arr, SIZE);
	Valiable(Sum(arr));
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

void Change(int arr[], char num[], int size)
{
	size -= 1;
	for (int i = 0; i < size; i++)
		arr[i] = int(num[i]) - 48;
}

bool Check(bool check, int size, char num[])
{
	size -= 1;
	
	for (int i = 0; i < size; i++)
	{
	
		if (num[i] < '0' || num[i] > '9')
			break;
		
		if (i + 1 == size)
			return true;
			
	}
	return false;
}

void Show(int arr[], int size)
{
	cout << "Your credit card: ";
	for (int i = 0; i < size - 1; i++)
	{
		if (i % 4 == 0)
			cout << "  ";
		cout << arr[i];
	}
	cout << endl;
}

void Valiable(int sum)
{
	if (sum % 10 != 0)
		cout << "your card is not valiable\n";
	else
		cout << "your card is valiable\n";
}