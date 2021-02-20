#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t = 3;
    while(t--)
    {
        int h1, m1, s1, h2, m2, s2, cnt = 0;
        scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);

        while(true)
        {
            int converted = h1*10000 + m1*100 + s1;
            if(converted%3 == 0)
                cnt++;
            if(h1 == h2 && m1 == m2 && s1 == s2)
                break;

            s1++;
            if(s1 == 60)
            {
                s1 = 0;
                m1++;
            }
            if(m1 == 60)
            {
                m1 = 0;
                h1++;
            }
            if(h1 == 24)
                h1 = 0;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}