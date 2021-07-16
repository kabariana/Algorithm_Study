#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str, res;
    std::cin >> str;

    while(res.size() < str.size())
    {
        res.push_back('A');
        res.push_back('W');
    }
    std::cout << res << "HOO\n";
}