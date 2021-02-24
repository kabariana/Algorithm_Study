#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n;
        std::cin >> n;

        if(n == 0)
            break;

        std::vector<int> v(n);
        
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            std::cin >> v[i];
            if(v[i] == 1)
                cnt++;
        }

        std::cout << "Mary won " << n-cnt << " times and Johm won " << cnt << " times\n";
    }
    return 0;
}