#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;

    while(std::getline(std::cin, str))
    {
        int m, p, l, e, r, s, n;
        std::stringstream var(str);
        var >> m >> p >> l >> e >> r >> s >> n;
        std::vector<int> a, b, c;

        a.push_back(m);
        b.push_back(p);
        c.push_back(l);
        
        for(int i = 1; i<=n; i++)
        {
            m = b[b.size()-1]/s;
            p = c[c.size()-1]/r;
            l = a[a.size()-1]*e;

            a.push_back(m);
            b.push_back(p);
            c.push_back(l);
        }
        std::cout << a[a.size()-1] <<'\n';
    }
    return 0;
}