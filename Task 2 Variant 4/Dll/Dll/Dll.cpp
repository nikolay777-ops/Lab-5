#include "pch.h" 
#include <utility>
#include "Dll.h"

int Count1(int num, double A[], int n, int i)
{
	if (i == -1)
	{
		return 0;
	}
	else
	{
		if (num > A[i])
		{
			return Count1(num, A, n, --i) + 1;
		}
		else
		{
			return Count1(num, A, n, --i);
		}
	}
}

int Count2(int num, double A[], int n, int i)
{
	if (i == n)
	{
		return 0;
	}
	else
	{
		if (num > A[i])
		{
			return Count2(num, A, n, --i) + 1;
		}
		else
		{
			return Count2(num, A, n, --i);
		}
	}
}