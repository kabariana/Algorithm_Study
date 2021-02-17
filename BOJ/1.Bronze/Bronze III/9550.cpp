#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n, k;
        std::cin >> n >> k;
        
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            int temp;
            std::cin >> temp;
            while(temp>=k)
            {
                cnt++;
                temp-=k;
            }
        }
        std::cout << cnt << '\n';
    }
    return 0;
}