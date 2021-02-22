#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int d;
        std::cin >> d;

        int s = 0, t = 0;
        while(true)
        {
            if(d < s + t)
            {
                t--;
                break;
            }
            t++;
            s = t*t;
        }
        std::cout << t << '\n';
    }
    return 0;
}