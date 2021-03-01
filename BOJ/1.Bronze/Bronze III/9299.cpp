#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;
    for(int i = 1; i<=T; i++)
    {
        int n;
        std::cin >> n;
        std::cout << "Case "<<i<<": " << n-1;
        for(int j = n; j>=0; j--)
        {
            int m;
            std::cin >> m;
            if(j!=0)
                std::cout << " "<< j*m;
        }
        std::cout << '\n';
    }
    return 0;
}