#include <iostream>
#include <string>

using namespace std;

int main()
{
    int subject;
    cin >> subject;
    float result = 0.0f;
    float max = 0.0f;
    while (subject > 0)
    {
        float a;
        cin >> a;
        if (a > max)
            max = a;
        subject--;
    }

    return 0;
}