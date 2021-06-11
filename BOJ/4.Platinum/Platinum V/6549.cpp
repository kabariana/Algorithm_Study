#include <bits/stdc++.h>
typedef long long ll;

int dp[100001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n, tmp;
    ll res;

    while(true)
    {
        std::cin >> n;
        if(!n)
            break;
        res = 0;
        std::stack<int> s;
        for(int i = 0; i<n+1; i++)
        {
            if(i < n) 
                std::cin >> dp[i];
            else 
                dp[i] = 0;
            while(!s.empty() && dp[s.top()]>= dp[i]){
                tmp = s.top();
                s.pop();
                res = std::max(res, ((ll)dp[tmp])*(s.empty()?i:i-s.top()-1));
            }
            s.push(i);
        }
        std::cout << res <<'\n';
    }
    return 0;
}