#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int c = 0;
    int s = 0;
    int r = 0;
    

    for (int i = 0; i < n; i++)
    {
        int qun;
        char ty;
        cin >> qun >> ty;

         if (ty == 'C')
    {
        c += qun;
    }
    else if (ty == 'S')
    {
        s += qun;
    } else if (ty == 'R')
    {
        r += qun;
    }

    }

   
    int total = c + s + r;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s<< endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (c * 100.0 / total) << " %" << endl;
    cout << "Percentual de ratos: " << (r * 100.0 / total) << " %" << endl;
    cout << "Percentual de sapos: " << (s * 100.0 / total) << " %" << endl;


    
}