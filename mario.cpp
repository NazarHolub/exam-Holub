#include <iostream>
using namespace std;
void Pyramid2(char* pointer, int num);
void Pyramid(char* pointer, int num);
int main()
{
	int num,choise;
	char word[3];
	do
	{
		cout << "Enter num: ";
		cin >> num;
	} while (num < 1);
	do
	{
		cout << "Enter word 1 or 0: ";
		cin >> choise;
	} while (choise != 0 && choise !=1);
	if (choise == 1)
		Pyramid(word, num);
	else
		Pyramid2(word, num);
	system("pause");
	return 0;
}
void Pyramid2(char * pointer, int num)
{
	for (int i = 0; i <= num; i++)
	{
		for (int k = num - i; k > 0; k--)
			cout << " ";
		for (int j = i; j > 0; j--)
			cout << "*";

		cout << " ";
		for (int j = i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
}
void Pyramid(char* pointer, int num)
{
		for (int i = 0; i <= num; i++)
		{
			for (int k = num - i; k > 0; k--)
				cout << " ";
			for (int j = i; j > 0; j--)
				cout << "*";
			cout << endl;
		}
}