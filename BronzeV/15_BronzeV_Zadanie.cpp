#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    cin >> a;

    char tmp = a[0];
    a[0] = a[2];
    a[2] = tmp;

    cout << a << endl;
    return 0;
}