#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input[9] = {};
    int max = 0;
    int idx = 0;
    for (int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        input[i] = a;
        if (max < a)
        {
            max = a;
            idx = i + 1;
        }
    }
    cout << max << endl;
    cout << idx << endl;
    return 0;
}
