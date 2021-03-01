#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int n, res = -1;
        std::cin >> n;

        if(!n)
            break;
        
        for(int i = 0; i*i*i<=n; i++)
            for(int j = 0; (i*i*i)+(j*(j+1)*(j+2))/6<=n; j++)
                if((i*i*i)+(j*(j+1)*(j+2))/6>res)
                    res = (i*i*i)+(j*(j+1)*(j+2))/6;
        std::cout << res << '\n';
    }
    return 0;
}