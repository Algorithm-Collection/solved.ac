#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int A[N];
    int tmp = N;
    int i = 0;
    while (tmp > 0)
    {
        int a;
        cin >> a;
        A[i++] = a;
        tmp--;
    }

    for (int j = 0; j < N; j++)
    {
        if (A[j] < X)
            cout << A[j] << endl;
    }
    return 0;
}