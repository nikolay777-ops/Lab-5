using namespace std;
#include <iostream>
#include <ctime>
#include "Dll.h"
int main()
{
	srand(time(NULL));
	int N;
	cout << "N = ";
	cin >> N;
	double* A = new double[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = sin((rand() % 10 - 5) / 2);
		cout << A[i] << endl;
	}
	cout << endl;
	cout << Count1(0, A, 0, (N / 2) - 1) + Count2(0, A, (N / 2) - 1, N - 1) << endl;
	return 0;
}