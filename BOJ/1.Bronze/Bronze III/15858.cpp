#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    ll a, b, c;
    std::cin >> a >> b >> c;
    ll tmp = a*b;
    std::string res = std::to_string(tmp/c);
    res.push_back('.');
    for(int i = 0; i<20; i++)
    {
        tmp%=c;
        tmp*=10;
        if(tmp<c)
            res.push_back('0');
        else
            res.push_back((char)(tmp/c + '0'));
    }
    std::cout << res;
    return 0;
}