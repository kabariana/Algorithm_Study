#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int x, y, i = 1;
        long long sum = 0;
        std::cin >> x >> y;
        while(true)
        {
            sum += (i+1)/2;
            if(sum >= y-x)
            {
                std::cout << i << '\n';
                break;
            }
            i++;
        }
    }
}