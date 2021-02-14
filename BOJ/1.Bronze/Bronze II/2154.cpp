#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, res;
    std::string str = "";

    std::cin >> n;
    for(int i = 1; i<=n; i++)
        str+=std::to_string(i);

    std::cout << str.find(std::to_string(n)) + 1;
    return 0;
}