#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, y, cnt = 0;
    std::cin >> x >> y;
    int res = 0;
    int r = 1;
    int c = 1;
    while(true)
    {
        if(c==1&&x<=y&&y<=x+r || c==-1&&x-r<=y&&y<=x)
        {
            res += std::abs(x-y);
            std::cout << res;
            break;
        }
        else
        {
            res+=r*2;
            r*=2;
            c*=-1;
        }
    }
    return 0;
}