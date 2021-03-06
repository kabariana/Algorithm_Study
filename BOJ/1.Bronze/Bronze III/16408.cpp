#include <bits/stdc++.h>

std::vector<int> v(128);

int main(int argc, char* argv[])
{
    for(int i = 0; i<5; i++)
    {
        std::string str;
        std::cin >> str;
        v[str[0]]++;
    }    
    std::cout << *std::max_element(v.begin(), v.end());
    return 0;
}