#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, a, b;
    std::string str;

    std::cin >> n >> a >> b;
    std::cin >> str;

    a--;

    std::reverse(str.begin()+a, str.begin()+b);
    std::cout << str;
    return 0;
}