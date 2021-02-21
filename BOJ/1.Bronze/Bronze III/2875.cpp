#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m, k;
    std::cin >> n >> m >> k;
    
    int cnt = 0;
    while(true)
    {
        if(k<=(n-2 + m-1) && n>=2 && m>=1)
        {
            n-=2;
            m-=1;
            cnt++;
        }
        else
            break;    
    }
    std::cout << cnt;
    return 0;
}