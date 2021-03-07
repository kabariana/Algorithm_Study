#include <bits/stdc++.h>
typedef long long ll;

int getGCD(int a, int b)
{
    if(b==0)
        return a;
    return getGCD(b, a%b);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int Tc;
    std::cin >> Tc;

    while(Tc--)
    {
        int n;
        ll sum = 0;
        std::cin >> n;

        std::vector<int> v(n);

        for(int i = 0; i<n; i++)
            std::cin >> v[i];

        for(int i = 0; i<n; i++)
            for(int j = i+1; j<n; j++)
                sum+=getGCD(v[i], v[j]);
        std::cout << sum << '\n';
    }
    return 0;
}