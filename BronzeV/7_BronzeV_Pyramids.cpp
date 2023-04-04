#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        if (a == 0)
            return 0;
        int result = 0;
        for (int i = a; i > 0; i--)
        {
            result += i;
        }
        cout << result << endl;
    }
}