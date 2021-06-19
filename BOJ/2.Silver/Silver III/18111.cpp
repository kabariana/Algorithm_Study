#include <bits/stdc++.h>

int map[500][500];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, b;
    int minTime = INT_MAX;
    int max;
    std::cin >> n >> m >> b;

    for(int i = 0; i < n; i++)
        for(int j = 0; j<m; j++)
            std::cin >> map[i][j];

    for(int i = 0; i<=256; i++)
    {
        int build = 0;
        int remove = 0;
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k < m; k++)
            {
                int height = map[j][k] - i;
                if(height > 0) 
                    remove+=height;
                else if(height < 0)
                    build-=height;
            }
        }

        if(remove + b >= build)
        {
            int tmp = remove*2 + build;
            if(minTime >= tmp)
            {
                minTime = tmp;
                max = i;
            }
        }
    }
    std::cout << minTime << ' ' << max << '\n';
    return 0;
}