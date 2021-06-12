#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    for(int i = n; i>=1; i--)
    {
        int cnt = 0;
        for(int j = 1; j*j*j <=i; j++)
        {
            for(int k = 1; k<=n, k*k*k + j*j*j <= i; k++)
                if(k*k*k + j*j*j == i)
                    cnt++;
        }
        if(cnt == 4){
            std::cout << i <<'\n';
            return 0;
        }
    }
    std::cout << "none\n";
    return 0;   
}