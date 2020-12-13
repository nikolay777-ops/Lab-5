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

int long req(int long i)
{
	if ((i % 10) > 0)
	{
		return (i % 10);
	}
		else
		{
			if (i == 0)
			{
				return 0;
			}
				else
				{
					return (req(i/10));
				}
		}
}

int main()
{
	int long p, q;
	do
	{
	cin >> p >> q;
	int long sum = 0;
	if (p < 0 && q < 0)
		{
			return 0;
		}
			else
			{
				for (int long i = p; i <= q; i++)
				{
					sum += req(i);
				}
				cout << sum << endl;
			}
	} while(true);
	getch();
	return 0;
}

