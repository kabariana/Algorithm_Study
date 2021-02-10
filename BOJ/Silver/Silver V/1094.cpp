#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x;
    std::cin >> x;

    int init = 64, cnt = 0;

    while(x > 0)
    {
        if(init > x)
            init/=2;
        else
        {
            x -= init;
            cnt++;
        }
    }  
    std::cout << cnt;
    return 0;
}