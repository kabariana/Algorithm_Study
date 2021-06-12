#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, sum = 0;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        std::cin >> v[i];
        sum += v[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(sum == 2*v[i])
        {
            std::cout << v[i] << '\n';
            return 0;
        }
    }
    std::cout << "BAD\n";
    return 0;   
}