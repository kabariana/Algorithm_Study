#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string t;
    std::cin >> t;

    for(int i = 0; i<t.size()/3; i++)
    {
        std::vector<char> v;
        for(int j = 0; j<3; j++)
            v.push_back(t[t.size()/3*j+i]);
        std::sort(v.begin(), v.end());
        std::cout << v[1];
    }
    return 0;
}