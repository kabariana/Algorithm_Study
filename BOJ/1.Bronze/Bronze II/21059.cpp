#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string a, b;
    std::cin >> a >> b;
    int cnt = std::count(a.begin(), a.end(), 'S') * std::count(b.begin(), b.end(), 'S');
    for(int i = 0; i<cnt; i++)
        std::cout << "S(";
    std::cout << "0";
    for(int i = 0; i<cnt; i++)
        std::cout << ")";
    return 0;
}