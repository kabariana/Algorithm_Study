#include <bits/stdc++.h>
#define MAX 1000000

int a[MAX + 1], b[MAX + 1];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int m, n;
    std::vector<std::pair<int, int>> v;
    std::cin >> m >> n;

    for(int i = 0; i<n; i++)
        std::cin >> b[i];
    
    b[n] = m + 1;
    int current = 0, cnt = 0;
    for(int i = n-1; i>=0; i--)
    {
        current += b[i+1] - b[i] - 1;
        a[n-i-1] = current;
    }

    int sum = 0;
    for(int i = 0; i< n; )
    {
        int tmp = i;
        while(tmp < n && a[i] == a[tmp])
            tmp++;
        v.push_back({a[i], tmp - i});
        if(a[i] % 2)
            sum ^= tmp - i;
        i = tmp;
    }

    if(v[0].first == 1)
    {
        std::cout << v[0].second <<'\n';
        return 0;
    }

    for(int i = 0; i <v.size(); i++)
    {
        if(v[i].first == 2)
            continue;
        if(v[i].first % 2 == 0)
        {
            if(i && v[i-1].first == v[i].first-1)
            {
                for(int j = 1; j<=v[i].second; j++)
                {
                    int u = sum ^ v[i-1].second ^(v[i-1].second + j);
                    if(u == 0)
                        cnt++;
                }
            }
            else
            {
                for(int j = 1; j<=v[i].second; j++)
                {
                    int u = sum ^ j;
                    if(u == 0)
                        cnt++;
                }
            }
        }
        else
        {
            for(int j = 1; j<=v[i].second; j++)
            {
                int u = sum ^ v[i].second ^ (v[i].second - j);
                if(u == 0)
                    cnt++;
            }
        }
    }
    std::cout << cnt <<'\n';
    return 0;
}