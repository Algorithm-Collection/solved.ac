#include <iostream>
#include <string>

using namespace std;

int main()
{
    string grade;
    string score;

    cin >> grade;

    if (grade == "A+")
    {
        score = "4.3";
    }
    else if (grade == "A0")
    {
        score = "4.0";
    }
    else if (grade == "A-")
    {
        score = "3.7";
    }
    else if (grade == "B+")
    {
        score = "3.3";
    }
    else if (grade == "B0")
    {
        score = "3.0";
    }
    else if (grade == "B-")
    {
        score = "2.7";
    }
    else if (grade == "C+")
    {
        score = "2.3";
    }
    else if (grade == "C0")
    {
        score = "2.0";
    }
    else if (grade == "C-")
    {
        score = "1.7";
    }
    else if (grade == "D+")
    {
        score = "1.3";
    }
    else if (grade == "D0")
    {
        score = "1.0";
    }
    else if (grade == "D-")
    {
        score = "0.7";
    }
    else if (grade == "F")
    {
        score = "0.0";
    }
    else
    {
        return 1;
    }

    cout << score;

    return 0;
}
