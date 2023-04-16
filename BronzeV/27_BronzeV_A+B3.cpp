#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T > 0)
    {
        int A, B;
        cin >> A >> B;
        cout << A + B << endl;
        T--;
    }
    return 0;
}