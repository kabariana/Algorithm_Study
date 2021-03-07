#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string a, b, res;
    std::cin >> a >> b;

    // 0을 지워주는 과정 필요
    while(a.size()>1 && a[0] == '0')
        a.erase(0, 1);
    while(b.size()>1 && b[0] == '0')
        b.erase(0, 1);

    int sum = 0;
    while(!a.empty() || !b.empty() || sum)
    {
        if(!a.empty())
        {
            sum+=a.back()-'0';
            a.pop_back();
        }
        if(!b.empty())
        {
            sum+=b.back()-'0';
            b.pop_back();
        }
        res.push_back((sum%2)+'0');
        sum/=2;
    }
    std::reverse(res.begin(), res.end());
    std::cout << res;
    return 0;
}