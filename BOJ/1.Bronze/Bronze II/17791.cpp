#include <bits/stdc++.h>
const int MAX = 1e5;

int arr[MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int t = 2;
    while(true)
    {
        if(n % t == 0)
        {
            for(int i = t; i <= MAX; i += t)
                arr[i] = 1;
        }
        if(n % t != 0 && !arr[t])
        {
            std::cout << t << '\n';
            return 0;
        }
        t++;
    }
    return 0;
}