#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
        t--;
    }
    return 0;
}