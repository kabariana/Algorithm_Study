#include <bits/stdc++.h>

bool compare1(const std::string& s1, const std::string& s2)
{
    if(s1.length() == s2.length())
        return s1 > s2;
    else
        return s1.length() > s2.length();
}

bool compare2(std::string s1, std::string s2)
{
    return s1+s2 > s2+s1;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int k, n;
    std::cin >> k >> n;
    
    std::vector<std::string> v(k);
    std::vector<std::string> res(n);
    int cnt = 0;

    for(int i = 0; i<k; i++)
    {
        std::cin >> v[i];
        res[i] = v[i];
        cnt++;
    }
    std::sort(v.begin(), v.end(), compare1);
    
    for(int i = cnt; i<n;i++)
        res[i] = v[0];
    std::sort(res.begin(), res.end(), compare2);
    
    for(int i = 0; i<n; i++)
        std::cout << res[i];
    return 0;
}