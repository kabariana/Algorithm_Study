#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::vector<std::string> v;

    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        std::string tmp = str.substr(i, str.length()-i);
        v.push_back(tmp);
    }
    std::sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++)
        std::cout << v[i] << '\n';
    return 0;
}