#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    std::string fan = ":fan:";

    std::cout << fan << fan << fan << '\n';
    std::cout << fan << ":" << str << ":" << fan << '\n';
    std::cout << fan << fan << fan;
    return 0;
}