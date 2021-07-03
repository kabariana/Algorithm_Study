// 스프라그 - 그런디 
// 11868번이랑 똑같음
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int M, x = 0;
    std::cin >> M;

    for(int i = 0; i <M; i++)
    {
        int p;
        std::cin >> p;
        x^=p;
    }
    if(x!=0)
        std::cout << "koosaga\n";
    else
        std::cout << "cubelover\n";
    return 0;
}