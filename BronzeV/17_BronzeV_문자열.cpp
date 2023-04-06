#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string a, b, c;
        cin >> a;
        b = a[0];
        c = a[a.length() - 1];
        cout << b << c << endl;
        t--;
    }
}