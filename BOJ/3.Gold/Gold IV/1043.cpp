#include <bits/stdc++.h>
#define MAX 50

int N, M, K;
int parents[MAX+1];
std::vector<int> reveal;
std::vector<std::vector<int>> v(MAX);

int Find(int x)
{
    if(parents[x] == x)
        return x;
    return x = Find(parents[x]);
}

void _union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    parents[x] = y;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M >> K;

    while(K--)
    {
        int tmp;
        std::cin >> tmp;
        reveal.push_back(tmp);
    }

    for(int i = 1; i<=N; i++)
        parents[i] = i;

    for(int i = 0; i<M; i++)
    {
        int num;
        std::cin >> num;
        int x, y;
        for(int j = 0; j<num; j++)
        {
            if(j >= 1)
            {
                y = x;
                std::cin >> x;
                _union(y, x);
            }
            else
                std::cin >> x;
            v[i].push_back(x);
        }
    }

    for(auto& i : v)
    {
        bool flag = false;
        for(auto& j : i)
        {
            if(flag) 
                break;
            for(auto& t : reveal)
            {
                if(Find(j) == Find(t))
                {
                    flag = true;
                    break;
                }
            }
        }
        if(flag)
            M--;
    }
    std::cout << M <<'\n';
    return 0;
}