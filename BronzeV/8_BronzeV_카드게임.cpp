#include <iostream>
#include <string>

using namespace std;

int main()
{
    int z = 5;
    int result = 0;
    while (z > 0)
    {
        int a;
        cin >> a;
        result += a;
        z--;
    }
    cout << result << endl;
    return 0;
}