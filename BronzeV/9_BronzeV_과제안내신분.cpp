#include <iostream>
#include <string>

using namespace std;

int main()
{
    int list[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int z = 30;
    while (z > 0)
    {
        int a;
        cin >> a;
        for (int i = 0; i < 30; i++)
        {
            if (a == list[i])
                list[i] = 0;
        }
        z--;
    }

    for (int i = 0; i < 30; i++)
    {
        if (list[i] != 0)
        {
            cout << list[i] << endl;
        }
    }
    return 0;
}