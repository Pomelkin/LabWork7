#include "pt4.h"
using namespace std;

int fub2(int n, int *mass,int i)
{
    if (i != n) 
    {
        mass[i] = mass[i - 1] + mass[i - 2];
        return fub2(n, mass, i + 1);

    }
    else
    {
        mass[i] = mass[i - 1] + mass[i - 2];
        return 0;
    }
}

void Solve()
{
    Task("Recur5");
    int a[21] = { 0,1 }, Num[5] = {}, NumMax = 0;
    for (int i = 0; i < 5; i++)
    {
        pt >> Num[i];
        NumMax = max(NumMax, Num[i]);
    }
    fub2(NumMax, a,2);
    for (int i = 0; i < 5; i++)
    {
        int nk = Num[i];
        int otvet = a[nk];
        pt << otvet;
    }
}