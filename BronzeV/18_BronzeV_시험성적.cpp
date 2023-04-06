#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    char grade = 'A';
    cin >> a;
    int diff = 100 - a;
    int quotient = diff / 10;
    int remainder = diff % 10;
    int flag = 0;
    if (remainder == 0)
        flag = 1;

    if ((quotient == 4 && remainder != 0) || quotient > 4)
        cout << char(grade + 5) << endl;
    else if (a == 100)
        cout << 'A' << endl;
    else if (a == 0)
        cout << 'F' << endl;
    else
        cout << char(grade + quotient - flag) << endl;
    return 0;
}