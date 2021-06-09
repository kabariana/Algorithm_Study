#include <bits/stdc++.h>

char map[101][101];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int r, c, rg, rp, cg, cp;
    std::cin >> r >> c >> rg >> cg >> rp >> cp;
    int cnt = 0;

    std::string str;
    for(int i = 0; i<r; i++)
    {
        std::cin >> map[i];
        for(int j = 0; j<c; j++)
            if(map[i][j] == 'P')
                cnt++;
    }

    std::cout << (cnt < rp*cp);
    return 0;
}