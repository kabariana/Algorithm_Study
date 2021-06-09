#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, i;
    std::cin >> n;
    std::vector<long long> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    long long total;
    std::cin >> total;

    long long tmp = 0;
    for(int i = 0; i<n; i++)
    {
        if(v[i] > 0 && v[i] <= total)
            tmp++;
        else if(v[i] > total)
        {
            if(v[i] % total == 0)
                tmp += v[i] / total;
            else
                tmp += (v[i] / total) + 1;
        }
    }
    std::cout << total * tmp;
    return 0;
}