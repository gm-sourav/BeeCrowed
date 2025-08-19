#include <iostream>
using namespace std;

int main()
{
    int n,x,s,q;
    cin >> n;

    for ( int i = 1; i <= n; i++)
    {
        x = i;
        s = i * i;
        q = i * i * i;

        cout << x << " "<< s << " " << q << endl;
    }
    
}