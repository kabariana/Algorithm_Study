//C까지의 수 중 각 주기의 배수 체크, 중복 제거

#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, c;
    std::cin >> n >> c;

    std::vector<int> v(n);
    std::vector<bool> chk(c+1);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 1; v[i]*j<=c; j++)
        {
            if(!chk[v[i]*j])
            {
                chk[v[i]*j]= true;
                cnt++;
            }
            
        }
    }
    std::cout << cnt;
    return 0;    
}