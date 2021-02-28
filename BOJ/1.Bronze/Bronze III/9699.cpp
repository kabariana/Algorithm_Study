#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    for(int i = 1; i<=T; i++)
    {
        int maxv = 0;
        for(int j = 0; j <5; j++)
        {
            int num;
            std::cin >> num;
            maxv = std::max(num, maxv);
        }
        std::cout << "Case #"<<i<<": "<<maxv<<'\n';
    }
    return 0;
}