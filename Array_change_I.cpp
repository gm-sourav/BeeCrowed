#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N[20];

    for (int i = 0; i < 20; i++)
    {
        cin >> N[i];
    }
    int i = 0;
    int j = 20 - 1;
    while (i < j)
    {
        int temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << N[i] << endl;
    }
}