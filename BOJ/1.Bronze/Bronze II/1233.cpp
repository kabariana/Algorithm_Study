#include <bits/stdc++.h>

int dp[81];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;
    
    for(int i = 1; i<= s1; i++)
        for(int j = 1; j<= s2; j++)
            for(int k = 1; k<=s3; k++)
                dp[i+j+k]++;
    int max = 0, index = 0;
    for(int i = 1; i<= 80; i++){
        if(dp[i] > max) {            
            max = dp[i];
            index = i;
        }
    }
    std::cout << index << '\n';
    return 0;
}