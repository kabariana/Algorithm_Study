#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    std::vector<int> v;

    for(int i = 0; i<5; i++)
    {
        int n;
        std::cin >> n;
        sum+=n;
        v.push_back(n);
    }
    std::sort(v.begin(), v.end());
    std::cout << sum/5 << '\n';
    std::cout << v[2];
    return 0;
}