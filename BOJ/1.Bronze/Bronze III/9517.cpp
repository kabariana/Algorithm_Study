#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int k, n, time = 0;
    std::cin >> k >> n;
    while(n--)
    {
        int t;
        char c;
        std::cin >> t >> c;
        time+=t;
        if(time >= 210)
        {
            std::cout << k;
            break;
        }
        if(c == 'T')
        {
            k++;
            if(k==9)
                k=1;
        }
    }
    return 0;
}