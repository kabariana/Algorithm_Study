#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N;
    std::cin >> N;
    std::cin.ignore();
    for(int i = 1; i<=N; i++)
    {
        std::string str;
        std::getline(std::cin, str);

        std::cout << i << ". ";
        std::cout << str << '\n';
    }
    return 0;
}