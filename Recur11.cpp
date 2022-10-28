#include "pt4.h"
#include <cmath>
using namespace std;

int maxa(int i, int n,int *mass,int &MassMax)
{
	if (i == n)
	{
		MassMax = max(MassMax, mass[i]);
		return 0;
	}
	else
	{
		MassMax = max(MassMax, mass[i]);
		return  maxa(i+1, n, mass, MassMax);
	}
}

void Solve()
{
    Task("Recur11");
	for (int i = 0; i < 3; i++)
	{
		int n, max = 0;
		pt >> n;
		int a[100] = {0};
		for (int g = 0; g < n; g++)
		{
			pt >> a[g];
		}
		maxa(0, n, a, max);
		pt << max;
	}

}
