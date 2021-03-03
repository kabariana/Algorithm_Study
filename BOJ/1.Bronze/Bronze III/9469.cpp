#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int P;
    std::cin >> P;

    while(P--)
    {
        int N; 
        double D, A, B, F, tmp = 0;
        std::cin >> N >> D >> A >> B >> F;
        tmp = D/(A+B);
        std::cout << N << ' '<< F*tmp<<'\n';
    }
    return 0;
}