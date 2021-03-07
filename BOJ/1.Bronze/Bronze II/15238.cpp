#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string str;
    std::cin >> n >> str;
    std::vector<int> v(26);

    for(int i = 0; str[i]; i++)
        v[str[i]-'a']++;

    auto it = std::max_element(v.begin(), v.end());
    std::cout << char(it - v.begin()+'a') << ' ' << *it;
    return 0;
}