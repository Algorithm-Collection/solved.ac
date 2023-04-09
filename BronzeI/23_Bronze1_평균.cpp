#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int subject;
    cin >> subject;
    float result = 0.0f;
    float max = 0.0f;
    float *input = new float[subject]();
    int i = 0;
    while (subject > 0)
    {
        float a;
        cin >> a;
        input[i++] = a;
        if (max < a)
        {
            max = a;
        }
        subject--;
    }

    for (int j = 0; j < i; j++)
    {
        result += input[j] / max * 100;
    }

    cout << float(result / i) << endl;
    delete[] input;
    return 0;
}