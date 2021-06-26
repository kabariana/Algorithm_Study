#include <bits/stdc++.h>

std::map<std::string, int> week = {
    {"Mon", 0},
    {"Tue", 24},
    {"Wed", 48},
    {"Thu", 72},
    {"Fri", 96}
};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T, N, sum = 0;
    std::cin >> T >> N;

    for(int i = 0; i<N; i++)
    {
        std::string a, b;
        int x, y;
        std::cin >> a >> x >> b >> y;
        int start = week[a] + x;
        int end = week[b] + y;
        sum += end - start;
    }

    if(sum >= T)
        std::cout << "0\n";
    else if(sum + 48 < T)
        std::cout << "-1\n";
    else
        std::cout << T - sum << '\n';
    return 0;
}