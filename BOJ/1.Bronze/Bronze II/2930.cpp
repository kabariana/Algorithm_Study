#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int R, N;
    std::string shape;

    std::cin >> R >> shape >> N;
    std::vector<std::string> friends(N);
    for(int i = 0; i<N; i++)
        std::cin >> friends[i];
    
    int r, s, p;
    int x, y;
    x = 0, y = 0;
    for(int i = 0; i < R; i++)
    {
        r = s = p = 0;
        for(int j = 0; j<N; j++)
        {
            if(friends[j][i] == 'S')
                s++;
            else if(friends[j][i] == 'R')
                r++;
            else 
                p++;
        }
        if(shape[i] == 'S')
            x += p*2 + s;
        else if(shape[i] == 'R')
            x += s*2 + r;
        else
            x += r*2 + p;
        y += std::max({p*2 + s, s*2 + r, r*2 + p});
    }
    std::cout << x << '\n' << y << '\n';
    return 0;
}