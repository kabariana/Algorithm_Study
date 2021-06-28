#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int N;
        std::cin >> N;
        bool flag = false;

        if(N < 10)
        {
            if(N * N %10 == N)
                flag = true;
        }
        else if(N < 100)
        {
            if(N*N%100 == N)
                flag = true;
        }
        else if(N < 1000)
        {
            if(N*N%1000 == N)
                flag = true;    
        }
        if(flag)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}