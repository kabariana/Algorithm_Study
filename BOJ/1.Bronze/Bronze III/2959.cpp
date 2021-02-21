#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> v;

    for(int i = 0; i<4; i++)
    {
        int n;
        std::cin >> n;
        v.push_back(n);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[0]*v[2];
    return 0;
}