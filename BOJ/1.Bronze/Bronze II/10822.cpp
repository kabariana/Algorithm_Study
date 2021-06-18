#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    std::cin >> str;

    std::stringstream stream;
    stream.str(str);
    int n, sum = 0;
    char ch;
    while(stream)
    {
        stream >> n >> ch;
        sum += n;
    }
    std::cout << sum << '\n';
    return 0;
}