// 메모리초과 뭔데...!!!!!!!
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int maxDP[3] = {0, };
    int minDP[3] = {0, };
    int a, b, c, tmp0, tmp2;
    int n;
    std::cin >> n;

    for(int i = 0; i<3; i++) {
        std::cin >> maxDP[i];
        minDP[i] = maxDP[i];
    }

    
    for(int i = 1; i<n; i++)
    {
        std::cin >> a >> b >> c;
        tmp0 = maxDP[0], tmp2 = maxDP[2];
        maxDP[0] = std::max(maxDP[0], maxDP[1]) + a;
        maxDP[2] = std::max(maxDP[1], maxDP[2]) + c;
        maxDP[1] = std::max({tmp0, maxDP[1], tmp2}) + b;

        tmp0 = minDP[0], tmp2 = minDP[2];
        minDP[0] = std::min(minDP[0], minDP[1]) + a;
        minDP[2] = std::min(minDP[1], minDP[2]) + c;
        minDP[1] = std::min({tmp0, minDP[1], tmp2}) + b;
    }

    std::cout << std::max({maxDP[0], maxDP[1], maxDP[2]}) <<' ';
    std::cout << std::min({minDP[0], minDP[1], minDP[2]}) <<'\n'; 
    return 0;
}