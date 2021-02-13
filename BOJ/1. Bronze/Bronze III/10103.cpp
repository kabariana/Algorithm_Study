#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    int c_score = 100, s_score = 100;
    std::cin >> n;

    while(n--)
    {
        int a, b;
        std::cin >> a >> b;

        if(a>b)
            s_score -= a;
        else if(a<b)
            c_score -= b;
    }
    std::cout << c_score << '\n' << s_score;
    return 0;
}