#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, k, r;
    double sum = 0, max, min;
    std::cin >> n >> k;
    int tmp = n - k;
    while(k--)
    {
        std::cin >> r;
        sum += r;    
    }

    max = min = sum;
    while(tmp--)
    {
        min -= 3;
        max += 3;
    }

    std::cout << min/n << " " << max / n <<'\n';
    return 0;   
}