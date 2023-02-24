#include<iostream>

using std::cin;
using std::cout;
using std::endl;

//#define Задание_1
//#define Задание_0
//#defaine Задание_2
//#defaine Задание_3 
//#defaine Задание_4
//#defaine Ромб
void main()
{
	setlocale(LC_ALL, "");
#ifdef Задание_1
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{								
			cout << "*";			
		}
		cout << endl;
	}
#endif // Задание_1
#ifdef Задание_0
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // Задание_0
#ifdef Задание_2
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{		
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Задание_2
#ifdef Задание_3
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Задание_3
#ifdef Задание_4
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < (n - 1); j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // Задание_4
#ifdef Ромб
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // Ромб

}