#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, cnt = 0;
    std::cin >> n;
    for(int i = 1; i<n; i++)
    {
        for(int j = i; i + j < n; j++)
        {
            int t = n - i - j;
            if(t < j)
                break;
            if(i + j > t)
                cnt++;
        }
    }
}