#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k;
    std::vector<int> v;
    std::cin >> n >> k;

    for(int i = 1; i<= n; i++)
        if(k % 10 != i%10 && (2*k)%10 != i%10)
            v.push_back(i);

    std::cout << v.size() <<'\n';
    for(auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}