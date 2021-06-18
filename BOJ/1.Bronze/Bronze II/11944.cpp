#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b;
    std::cin >> a >> b;
    std::string str, tmp = std::to_string(a);
    while(a--) str += tmp;
    std::cout << str.substr(0, b) << '\n';
    return 0;
}