#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int num, sum = 0;
        std::cin >> num;

        for(int i = 1; i <= num; i++)
            if(i%2 == 1)
                sum+=i;
        std::cout << sum << '\n';
    }
    return 0;
}