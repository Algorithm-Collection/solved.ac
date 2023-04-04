#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int aCnt = 0;
    int bCnt = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'a')
            aCnt++;
    }

    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == 'a')
            bCnt++;
    }

    if (aCnt >= bCnt || a.length() == b.length())
    {
        cout << "go";
    }
    else
    {
        cout << "no";
    }

    return 0;
}