#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, cs = 0;
    while(std::cin >> n && n > 0)
    {
        std::cout << "Case " << ++cs <<": ";
        double a = 0, b = 0, sum = 0; 
        for(int i = 0; i<n; i++)
        {
            double x, y, m;
            std::cin >> x >> y >> m;
            a+=x*m;
            b+=y*m;
            sum+=m;
        }
        std::cout << std::fixed << std::setprecision(2) << a/sum << ' ' << b/sum << '\n';
    }
    return 0;
}