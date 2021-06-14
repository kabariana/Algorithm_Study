#include <bits/stdc++.h>

std::string stringSum(std::string a, std::string b)
{
    std::string tmp(std::max(a.size(), b.size()), '0');
    int c = 0;

    for(int i = 0; i < tmp.size(); i++)
    {
        int t = c;
        c = 0;

        if(i <a.size())
            t += (a[a.size()-i-1]-'0');

        if(i <b.size())
            t += (b[b.size()-i-1]-'0');

        if(t >= 10)
        {
            c = 1;
            t -= 10;
        }

        tmp[tmp.size()-i-1] = t + '0';
    }
    if(c)
        tmp.insert(tmp.begin(), '1');
    return tmp;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::string a = "0", b = "1";
    if(n == 0)
        std::cout << a;
    else if(n == 1)
        std::cout << b;
    else
    {
        std::string res;
        for(int i = 0; i<=n-2; i++)
        {
            res = stringSum(a, b);
            a = b;
            b = res;
        }
        std::cout << res << '\n';
    }

    return 0;
}