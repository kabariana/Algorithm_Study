#include <bits/stdc++.h>

std::string getGrade(int n)
{
    if(n >= 97)
        return "A+";
    else if(n >= 90)
        return "A";
    else if(n >= 87)
        return "B+";
    else if(n >= 80)
        return "B";
    else if(n >= 77)
        return "C+";
    else if(n >= 70)
        return "C";
    else if(n >= 67)
        return "D+";
    else if(n >= 60)
        return "D";
    else 
        return "F";
}

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        std::string name;
        int score;

        std::cin >> name >> score;

        std::cout << name << ' ' << getGrade(score) << '\n';
    }
    return 0;
}