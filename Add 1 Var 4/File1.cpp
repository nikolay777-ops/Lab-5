#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif
using namespace std;
#include <iostream>
#include <conio.h>
#include <ctime>
int Count(int n, int **arr)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i][i] % 2) == 0 )
		{
			Sum += 1;
		}
	}
	return Sum;
}
int Perebroska(int **arr, int *Mass, int n)
{
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		if ( (arr[i][i] % 2) == 0)
		{
			Mass[m] = arr[i][i];
			m++;
		}
	}
	return *Mass;
}
void Umnojenie(int *Mass, int Sum)
{
	for (int i = 1; i < Sum; i++)
	{
		Mass[0] *= Mass[i];
	}
cout << Mass[0] << endl;
}
int _tmain()
{
	srand(time(NULL));
	int n;
	int k;
	int Sum;
	cout << "n = ";
	cin >> n;
	cout << "k = ";
	cin >> k;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int [k];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "\t";
		}
	cout << endl;
	}
	cout << endl;
	Sum = Count(n, arr);
	cout << Sum << endl;
	int* Mass = new int [Sum];
	Perebroska(arr, Mass, n);
	for (int i = 0; i < Sum; i++)
	{
		cout << Mass[i] << "\t";
	}
    cout << "\n";
	Umnojenie(Mass, Sum);
	getch();
	return 0;
}
