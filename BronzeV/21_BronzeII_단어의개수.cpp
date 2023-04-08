#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int result = 1;
    if (a[0] == ' ')
        a = a.substr(1);
    if (a[a.length() - 1] == ' ')
        a = a.substr(0, a.length() - 1);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
            result++;
    }
    cout << result << endl;
    return 0;
}