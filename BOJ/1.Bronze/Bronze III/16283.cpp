#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, n, w, cnt = 0;
    int sheep, goat;

    int sidx, gidx;
    std::cin >> a >> b >> n >> w;
    for(sheep = 1; sheep<n; sheep++)
    {
        goat = n-sheep;
        if((a*sheep + b*goat)==w)
        {
            cnt++;
            sidx = sheep;
            gidx = goat;
        }
    }
    if(cnt == 1)
        std::cout << sidx << ' ' << gidx;
    else
        std::cout << "-1";
    return 0;
}