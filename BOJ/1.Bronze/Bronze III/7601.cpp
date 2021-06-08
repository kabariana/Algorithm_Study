#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, d, r1, r2, a, b, cnt = 1;
    while(std::cin >> n && n)
    {
        std::cin >> d >> r1 >> r2;
        std::cout << "Scenario " << cnt++ <<'\n';
        for(int i = 1; i<=d; i++)
        {
            std::cin >> a >> b;
            if(r1 && r1 <= a)
                a++;
            if(r2&& r2 <= b)
                b++;
            std::cout << "Day " << i << (a == n-b + 1?" ALERT":" OK") << '\n';
        }
    }
    return 0;
}