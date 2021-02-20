#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int n;
        std::cin >> n;
        
        if(n == 0)
            break;
        
        int cnt = 1;
        while(n--)
        {
            int a, b;
            std::cin >> a >> b;
            cnt = cnt*a - b;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}