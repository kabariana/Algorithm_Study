#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a, b, c, d, i = 1;
    while(true)
    {
        std::cin >> a >> b >> c >> d;
        if(a+b+c+d == -4)
            break;
        a = (a+2300-d)%23;
        b = (b+2800-d)%28;
        c = (c+3300-d)%33;
        d = 0;
        for(d = 0; a+b+c>0; d++)
        {
            a=(a+1)%23;
            b=(b+1)%28;
            c=(c+1)%33;
        }
        std::cout << "Case "<<i++<<": the next triple peak occurs in "<<21252-d<<" days.\n";
    }
    return 0;
}