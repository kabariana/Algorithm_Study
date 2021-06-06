#include <bits/stdc++.h>
typedef long long ll;
int Tc, n;
ll x[21], y[21];

double func(int cur, int cnt, ll xT, ll yT){
    if(cnt == n/2) 
        return std::sqrt(xT*xT + yT*yT);
    double INF = 1e18;
    for(int i = cur; i<=n; i++)
        INF = std::min(INF, func(i+1, cnt+1, xT-x[i]*2, yT-y[i]*2));
    return INF;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    std::cin >> Tc;

    while(Tc--)
    {
        std::cin >> n;
        for(int i = 1; i<= n; i++)
            std::cin >> x[i] >> y[i];
        ll xSum = 0, ySum = 0;
        for(int i = 1; i<=n; i++)
        {
            xSum+= x[i];
            ySum+= y[i];
        }
        std::cout << std::fixed << std::setprecision(6) <<func(1, 0, xSum, ySum) << '\n';
    }
    return 0;
}