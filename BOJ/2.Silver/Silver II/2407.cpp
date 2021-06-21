#include <bits/stdc++.h>

std::string dp[101][101];

std::string stringSum(std::string s1, std::string s2)
{
    int sum = 0;
    std::string result;

    while(!s1.empty() || !s2.empty() || sum)
    {
        if(!s1.empty())
        {
            sum += s1.back() - '0';
            s1.pop_back();
        }
        if(!s2.empty())
        {
            sum += s2.back() - '0';
            s2.pop_back();
        }
        result.push_back((sum % 10) + '0');
        sum /= 10;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

std::string comb(int n, int r)
{
    if(n == r || r == 0)
        return "1";
    std::string& result = dp[n][r];

    if(result != "")
        return result;

    result = stringSum(comb(n-1, r-1),  comb(n-1, r));
    return result;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    std::cout << comb(n,m);
    return 0;
}