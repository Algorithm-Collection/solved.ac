#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int v[N];
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
    }

    int result;
    cin >> result;
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        if (result == v[i])
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}