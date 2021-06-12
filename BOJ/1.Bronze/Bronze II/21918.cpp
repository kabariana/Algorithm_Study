#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    std::vector<int> v(n + 1);

    for(int i = 1; i<= n; i++)
        std::cin >> v[i];

    while(m--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        switch (a)
        {
        case 1:
            v[b] = c;
            break;
        case 2:
            for(int i = b; i <= c; i++)
            {
                if(v[i] == 1)
                    v[i] = 0;
                else 
                    v[i] = 1;
            }
            break;
        case 3:
           for(int i = b; i <= c; i++)
                v[i] = 0;
            break;
        case 4:
            for(int i = b; i <= c; i++)
                v[i] = 1;
            break;
        }
        
    }
    for(int i = 1; i <= n; i++)
        std::cout << v[i] << ' ';
    std::cout << '\n';
    return 0;
}