#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int sum = 0, min = INT_MAX;
        for(int i = 0; i<7; i++)
        {
            int num;
            std::cin >> num;

            if(num%2 == 0)
            {
                sum+=num;
                if(num < min)
                    min = num;
            }
        }
        std::cout << sum << ' ' << min << '\n';
    }
    return 0;
}