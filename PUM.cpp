#include <iostream>
using namespace std;

int main()
{
    int n, x, s, q;
    int count = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        cout << count << " " << count + 1 << " " << count + 2 << " "<< "PUM"<< endl;
        count += 4;
    }
}