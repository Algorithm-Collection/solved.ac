#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int list[3] = {a, b, c};
    sort(list, list + 3);
    cout << list[1] << endl;
    return 0;
}