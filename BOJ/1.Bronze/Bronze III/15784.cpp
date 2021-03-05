#include <bits/stdc++.h>

int v[1001][1001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int n, a, b;
    std::cin >> n >> a >> b;
    std::vector<int> h;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            std::cin >> v[i][j];
            if(i == a-1 || j == b-1)
                h.push_back(v[i][j]);
        }
    }

    bool flag = false;
    for(int i = 0; i<h.size(); i++)
    {
        if(h[i] > v[a-1][b-1])
        {
            flag = true;
            break;
        }
    }
    if(flag)
        std::cout << "ANGRY";
    else
        std::cout << "HAPPY";
    return 0;
}
