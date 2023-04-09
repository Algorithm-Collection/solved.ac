#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    int tmp = cases;
    while (tmp > 0)
    {
        int r;
        string s;
        cin >> r >> s;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << s[i];
            }
        }
        cout << endl;
        tmp--;
    }

    return 0;
}