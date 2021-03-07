#include <bits/stdc++.h>

// 최대 50*50
int map[51][51];

int check(int a, int b)
{
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = a; i<a+8; i++)
    {
        for(int j = b; j<b+8; j++)
        {
            if((i+j)%2==map[i][j])
                cnt1++; //흰색 블록
            if((i+j+1)%2 == map[i][j])
                cnt2++;
        }
    }
    return std::min(cnt1, cnt2);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, minv = INT_MAX;
    char c;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            std::cin>>c;
            map[i][j]=(c=='B'?0:1); 
        }
    }

    for(int i = 0; i<=n-8; i++)
        for(int j = 0; j<=m-8; j++)
            if(minv > check(i,j))
                minv = check(i, j);

    std::cout << minv;
    return 0;
}