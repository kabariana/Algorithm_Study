#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int h1, m1, h2, m2, n;
    std::cin >> h1 >> m1 >> h2 >> m2 >> n;

    int cnt = 0;
    while(true)
    {
        if(h1%10 == n || h1/10==n || m1%10==n || m1/10==n)
            cnt++;
        if(h1 == h2 && m1 == m2)
            break;

        m1++;
        if(m1 == 60)
        {
            m1 = 0;
            h1++;
        }
    }
    std::cout << cnt;
    return 0;
}