#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        std::string str;
        std::cin >> str;
        std::bitset<10> v;
        
        for(auto i : str)
            v[i-'0'] = 1;
        std::cout << v.count() << '\n';
    }
    return 0;
}