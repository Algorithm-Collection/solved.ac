#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N, S;
    while (cin >> N >> S)
    {
        cout << S / (N + 1) << endl;
    }
    return 0;
}