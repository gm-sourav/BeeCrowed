#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y, z;
        cin >> x >> y >> z;
        float result = (x * 2 + y * 3 + z * 5) / 10;
        cout << fixed << setprecision(1) << result << endl;
    }

    return 0;
}
