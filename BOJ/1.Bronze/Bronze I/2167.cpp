#include <bits/stdc++.h>
#define MAX_SIZE 301

int arr[MAX_SIZE][MAX_SIZE];

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            std::cin >> arr[i][j];
    
    int T;
    std::cin >> T;
    while(T--)
    {
        int a, b, x, y, sum = 0;
        std::cin >> a >> b >> x >> y;

        for(int i=a; i<=x; i++)
            for(int j=b; j<=y; j++)
                sum+=arr[i-1][j-1];

        std::cout << sum << '\n';
    }
    return 0;
}