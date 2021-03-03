#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int h, m, s, tc;
    std::cin >> h >> m >> s >> tc;
    
    while(tc--)
    {
        int T;
        std::cin >> T;
        if(T == 1 || T == 2)
        {
            int c;
            std::cin >> c;
            if(T==2)
                c*=-1;
            h+=c/3600;
            c%=3600;
            m+=c/60;
            c%=60;
            s+=c;
            while(s<0)
            {
                s+=60;
                --m;
            }
            while(m<0)
            {
                m+=60;
                --h;
            }
            while(h<0)
                h+=24;
            while(s>59)
            {
                s-=60;
                ++m;
            }
            while(m>59)
            {
                m-=60;
                ++h;
            }
            while(h>23)
                h-=24;
        }
        else
            std::cout << h << ' ' << m << ' ' << s << '\n';
    }
    return 0;
}