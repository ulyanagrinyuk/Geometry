#include<iostream>

using std::cin;
using std::cout;
using std::endl;

//#define �������_1
//#define �������_0
//#defaine �������_2
//#defaine �������_3 
//#defaine �������_4
//#defaine ����
void main()
{
	setlocale(LC_ALL, "");
#ifdef �������_1
	int n;
	cout << "������� ������ ������:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{								
			cout << "*";			
		}
		cout << endl;
	}
#endif // �������_1
#ifdef �������_0
	int n;
	cout << "������� ������ ������:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // �������_0
#ifdef �������_2
	int n;
	cout << "������� ������ ������:"; cin >> n;
	for (int i = 0; i < n; i++)
	{		
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // �������_2
#ifdef �������_3
	int n;
	cout << "������� ������ ������:"; cin >> n;
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
#endif // �������_3
#ifdef �������_4
	int n;
	cout << "������� ������ ������:"; cin >> n;
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
#endif // �������_4
#ifdef ����
	int n;
	cout << "������� ������ ������:"; cin >> n;
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
#endif // ����

}