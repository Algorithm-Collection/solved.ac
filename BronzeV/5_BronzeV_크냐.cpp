#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a;
        cin >> b;
        if (a == 0 && b == 0)
        {
            return 0;
        }
        if (a > b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}