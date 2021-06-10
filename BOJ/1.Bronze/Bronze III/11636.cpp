#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int tc;
    std::cin >> tc;

    for(int i = 0; i<tc; i++)
    {
        int tmp;
        std::cin >> tmp;
        int res = 0;
        while(true)
        {
            int c;
            std::cin >> c;
            if(!c)
                break;
            if(c > 2 * tmp)
                res += c - 2*tmp;
            tmp = c;
        }
        std::cout << res << '\n';
    }
    return 0;
}