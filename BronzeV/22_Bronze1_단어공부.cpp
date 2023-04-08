#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int count[26] = {0}; // 알파벳 개수를 저장할 배열

    cin >> word;

    // 대문자로 변환하여 카운트 증가
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            count[word[i] - 'A']++;
        }
        else
        {
            count[word[i] - 'a']++;
        }
    }

    int max_count = 0; // 가장 많이 나온 알파벳의 개수
    char max_alpha;    // 가장 많이 나온 알파벳

    // 가장 많이 나온 알파벳 찾기
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            max_alpha = i + 'A';
        }
        else if (count[i] == max_count)
        {
            max_alpha = '?';
        }
    }

    cout << max_alpha << endl;

    return 0;
}
