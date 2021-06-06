#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int t1, v1, t2, v2;
    std::cin >> t1 >> v1 >> t2 >> v2;
    if(t2 < 0  && v2 >= 10)
        std::cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if(t1 > t2)
        std::cout << "MCHS warns! Low temperature is expected tomorrow.";
    else if(v1 < v2)
        std::cout << "MCHS warns! Strong wind is expected tomorrow.";
    else
        std::cout << "No message";
    return 0;
}