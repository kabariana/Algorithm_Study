#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int P;
    std::cin >> P;

    while(P--)
    {
        int K, N;
        std::cin >> K >> N;
        std::cout << K << ' ' << (N*(N+1))/2 << ' ';
        int s2 = 0, s3 = 0;
        for(int i = 1; i<=2*N; i++)
        {
            if(i%2 == 0)
                s2+=i;
            else
                s3+=i;
        }
        std::cout << s3 << ' ' << s2 << '\n';
    }
    return 0;
}