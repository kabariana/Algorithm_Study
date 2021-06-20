// 해시 맵
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    std::map<std::string, std::string> pw;

    for(int i = 0; i<N; i++)
    {
        std::string site, pass;
        std::cin >> site >> pass;

        pw[site] = pass;
    }

    for(int i = 0; i<M; i++)
    {
        std::string query;
        std::cin >> query;
        std::cout << pw[query] << '\n';
    }
    return 0;
}