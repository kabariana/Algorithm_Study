#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n, i = 0;
        std::cin >> n;

        while(n>0)
        {   
            if(n%2 == 1)
                std::cout << i << ' ';
            n/=2;
            i++;
        }
        std::cout << '\n';
    }
    return 0;
}
