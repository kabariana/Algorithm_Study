#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::map<int, std::string> M;

    int N;
    std::cin >> N;

    while(N--)
    {
        std::string name;
        int cnt;
        std::cin >> name >> cnt;
        if(M.count(cnt) && M[cnt] <= name)
            continue;
        M[cnt] = name;
    }
    std::cout << (--M.end())->second << '\n';
    return 0;
}