#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    long long G, A, T, D;
    while(std::cin >> G >> A >> T >> D && ~G){
        long long a = A*(A-1)/2 * G;
        long long b = G * T + D;
        long long tmp = 1;

        while(tmp < b)
        {
            a += tmp;
            tmp <<= 1;
        }
        std::cout << G << '*' << T << '/' << A << '+' << D << '=' << a << '+' << tmp-b << '\n';
    }
    return 0;
}