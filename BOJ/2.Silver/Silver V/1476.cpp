#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int E, S, M, ans = 1;
    int iE, iS, iM;
    std::cin >> iE >> iS >> iM;

    E = S = M = 1;

    while((E!=iE) || (S!=iS) || (M!=iM))
    {
        if(E!=15)
            E++;
        else
            E=1;
        
        if(S!=28)
            S++;
        else
            S=1;
        if(M!=19)
            M++;
        else
            M=1;
        ans++;
    }
    std::cout << ans;
    return 0;
}