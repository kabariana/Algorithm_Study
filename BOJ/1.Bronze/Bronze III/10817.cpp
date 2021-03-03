#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> v(3);
    for(int i = 0; i<3; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    std::cout << v[1];
    return 0;
}