#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int h1, m1, h2, m2, d=0;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);

        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        
        int m3 = m1 + m2;
        int h3 = h1 + h2;

        if(m3 >= 60)
        {
            m3-=60;
            h3++;
        }

        while(h3>=24)
        {
            h3-=24;
            d++;
        }

        if(d==0)
            printf("%02d:%02d\n", h3, m3);
        else
            printf("%02d:%02d +%d\n", h3, m3, d);
    }
    return 0;
}