#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int hp, mp, attk, def, mhp, mmp, mattk, mdef;
        std::cin >> hp >> mp >> attk >> def >> mhp >> mmp >> mattk >> mdef;
        hp = std::max(1, hp+mhp);
        mp = std::max(1, mp+mmp);
        attk = std::max(0, attk+mattk);
        def += mdef;
        std::cout << hp + 5*mp + 2*attk + 2*def << '\n';
    }
    return 0;
}