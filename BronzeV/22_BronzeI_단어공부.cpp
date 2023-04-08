#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int counts[26] = {0};

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            int idx = tolower(str[i]) - 'a';
            counts[idx]++;
        }
    }
    int result = counts[0];
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] > result)
            result = i;
    }

    for (int i = 0; i < 26; i++)
    {
        if (result == counts[i])
        {
            cout << "?" << endl;
            return 0;
        }
    }
    cout << counts[result] << endl;

    return 0;
}