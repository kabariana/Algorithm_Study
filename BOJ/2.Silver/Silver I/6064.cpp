#include <bits/stdc++.h>

int getGCD(int a, int b)
{
    if(b==0)
        return a;
    return getGCD(b, a%b);
}

int getLCM(int a, int b)
{
    return a*b/getGCD(a, b);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int m, n, x, y, i;
        std::cin >> m >> n >> x >> y;
        int lcm = getLCM(m, n);
        for(i = x; i<= lcm; i+=m)
        {
            int tmp = (i%n==0)?n:i%n;
            if(tmp == y)
            {
                std::cout << i <<'\n';
                break;
            }
        }
        if(i > lcm)
            std::cout << "-1\n";
    }
    return 0;
}