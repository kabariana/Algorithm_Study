#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    int check = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j <m; j++)
        {
            if(v[i][j] == 'X')
            {
                check++;
                break;
            }
        }
    }
    int check2 = 0;
    for(int j = 0; j<m; j++)
    {
        for(int i = 0; i<n; i++)
        {
            if(v[i][j]=='X')
            {
                check2++;
                break;
            }
        }
    }
    std::cout << std::max(n-check, m-check2);
    return 0;
}