#include <bits/stdc++.h>

bool sieve[246913];

int main () {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, n2, i, j, cnt ;

    while(true) {
        std::cin >> n;
        if (n == 0) break;
        cnt = 0;
        n2 = n * 2;

        for (i = 2; i <= n2; i++) 
            sieve[i] = true;

        for (i = 2; i <= std::sqrt(n2); i++) {
            if (sieve[i]) {
                for (j = i+i; j <= n2; j += i) {
                    if (sieve[j]) {
                        sieve[j] = false;
                    }
                }
            }
        }

        for (i = n + 1; i <= n2; i++)
            if (sieve[i]) 
                cnt++;
        std::cout << cnt << '\n';
    }

    return 0;
}