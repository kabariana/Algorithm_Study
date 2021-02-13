#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 1, tmp = 1;
    std::cin >> n;

    if(n == 1)
        cnt = 1;
    else
    {
        for(int i = 2; i<=n; i++)
        {
            if(tmp +(cnt-1) * 6 < i)
            {
                cnt++;
                tmp = i-1;
            }
        }
    }
    std::cout << cnt;
    return 0;   
}