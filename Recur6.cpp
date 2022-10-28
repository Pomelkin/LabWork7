#include "pt4.h"
#include <string>
using namespace std;

int Combin1(int n,int k, int &s)
{
	s += 1;
    if (k == n || k == 0) return 1;
	else
	{
		return Combin1(n - 1, k, s) + Combin1(n - 1, k - 1, s);
	}
}

void Solve()
{
    Task("Recur6");
	int n;
	pt >> n;
	for (int i = 0; i < 5; i++)
	{
		int k, s1 = 0, otvet;
		pt >> k;
		otvet = Combin1(n, k, s1);
		pt << otvet << s1;
	}


}
