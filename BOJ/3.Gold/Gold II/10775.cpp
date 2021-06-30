// Union-Find
#include <bits/stdc++.h>

const int SIZE = 1e5;
int parents[SIZE + 1];

int Find(int x)
{
    if(x == parents[x])
        return x;
    return parents[x] = Find(parents[x]);
}

void _union(int x, int y)
{
    int px = Find(x);
    int py = Find(y);

    if(px < py)
        parents[py] = px;
    else
        parents[px] = py;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int G, P, num, cnt = 0;
    std::cin >> G >> P;

    for(int i = 0; i<=G; i++)
        parents[i] = i;
    
    for(int i = 0; i<P; i++)
    {
        std::cin >> num;
        int root = Find(num);

        if(root == 0) // 도킹할 게이트가 없다.
            break;
        else
        {
            cnt++;
            _union(root, root-1);
        }
    }
    std::cout << cnt  << '\n';
    return 0;
}