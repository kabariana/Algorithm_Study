#include <bits/stdc++.h>
#define SIZE 1001

int dp[SIZE][SIZE];
char str1[SIZE], str2[SIZE];

void printString(int i, int j)
{
    if(dp[i][j] == 0)
        return;
    if(str1[i-1] == str2[j-1])
    {
        printString(i-1, j-1);
        std::cout << str1[i-1];
    }
    else
    {
        if(dp[i-1][j]>dp[i][j-1])
            printString(i-1, j);
        else
            printString(i, j-1);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int i, j;
    std::cin >> str1 >> str2;
    for(i = 0; str1[i]; i++)
    {
        for(j = 0; str2[j]; j++)
        {
            if(str1[i] == str2[j])
                dp[i + 1][j + 1] = dp[i][j] + 1;
            else
                dp[i + 1][j + 1] = std::max(dp[i][j+1], dp[i+1][j]); 
        }
    }

    std::cout << dp[i][j] << '\n';
    printString(i, j);
    return 0;
}