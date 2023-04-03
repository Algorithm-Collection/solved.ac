#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int chess[6];
    int chess2[6] = {1, 1, 2, 2, 2, 8};
    int result[6];

    for (int i = 0; i < 6; i++)
    {
        cin >> chess[i];
    }

    for (int i = 0; i < 6; i++)
    {
        result[i] = chess2[i] - chess[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}