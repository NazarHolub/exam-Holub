#include <iostream>
using namespace std;
void Pyramid2(char* pointer, int num);//prototype of function
void Pyramid(char* pointer, int num);
int main()
{
	int num,choise;
	char word[3];
	do
	{
		cout << "Enter num: ";
		cin >> num;
		if (!cin)
		{
			cin.clear();
			cout << "enter again:\n ";
			while (cin.get() != '\n') //checking a number by correctly
				continue;

			continue;
		}

	} while (num <= 0);
	do
	{
		cout << "Enter word 1 or 0: ";
		cin >> choise;
		if (!cin)
		{
			cin.clear();
			cout << "enter again: ";  //checking choise
			while (cin.get() != '\n')
				continue;

			choise = 10;
			continue;
		}
	} while (choise!=0 && choise!=1);

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
			cout << "#";            //function draw a pyramide

		cout << " ";
		for (int j = i; j > 0; j--)
			cout << "#";
		cout << endl;
	}
}
void Pyramid(char* pointer, int num)
{
		for (int i = 0; i <= num; i++)
		{
			for (int k = num - i; k > 0; k--)
				cout << " ";
			for (int j = i; j > 0; j--)     //function drawin a half pyramide
				cout << "#";
			cout << endl;
		}
}