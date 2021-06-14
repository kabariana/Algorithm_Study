#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        std::string str;
        std::cin >> str;

        if(str == "#")
            break;

        int M, S, T;
        std::cin >> M >> S >> T;

        for(int i = 0; i<T; i++)
        {
            char ch;
            int cnt;
            std::cin >> ch >> cnt;

            if(ch == 'S')
                S = std::max(0, S-cnt);
            else
                S = std::min(M, S+cnt);
        }
        std::cout << str << " " << S << '\n'; 
    }
    return 0;
}