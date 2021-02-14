#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<std::string> v;
    int n;

    std::cin >> n;
    std::cin.ignore();

    for(int i = 0; i<n; i++)
    {
        std::string str;
        std::cin >> str;

        for(int j = 0; str[j]; j++)
            str[j] = std::tolower(str[j]);
        v.push_back(str);
    }

    for(int i = 0; i<v.size(); i++)
        std::cout << v[i] << '\n';
    return 0;
}