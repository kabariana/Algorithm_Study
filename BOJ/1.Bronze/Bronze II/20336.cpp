#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::vector<std::string> v;
    std::cin >> n;
    while(n--)
    {
        int d;
        std::cin >> d;
        while(d--)
        {
            std::string menu;
            std::cin >> menu;
            if(n == 0)
                v.push_back(menu);
        }
    }
    std::cout << v.size() <<'\n';
    for(auto i : v)
        std::cout << i << '\n';
    return 0;
}