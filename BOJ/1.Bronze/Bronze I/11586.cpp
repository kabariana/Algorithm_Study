#include <bits/stdc++.h>

std::vector<std::string> arr(100);
char result[100][100];

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];
    int k;
    std::cin >> k;

    if(k == 1) //그대로
    {
        for(int i = 0; i<n; i++)
            std::cout << arr[i] << '\n';
    }
    else if(k == 2) //좌우 반전
    {
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                result[i][j] = arr[i][n-1-j];

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                std::cout << result[i][j];
            std::cout << '\n';
        }        
    }
    else //상하 반전
    {
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                result[i][j] = arr[n-1-i][j];

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                std::cout << result[i][j];
            std::cout << '\n';
        }        
    }
    return 0;
}