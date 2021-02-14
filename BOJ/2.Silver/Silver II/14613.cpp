#include <bits/stdc++.h>

//게임 20회, 점수 최대 ~3000점
double dp[21][3001];

int main(int argc, char* argv[])
{
    double W, L, D;
    scanf("%lf %lf %lf", &W, &L, &D);

    dp[0][2000] = 1;

    for(int i = 1; i<=20; i++)
    {
        for(int j = 1000; j<=3000; j++)
        {
            if(dp[i-1][j] == 0)
                continue;
            dp[i][j-50] += dp[i-1][j]*L;
            dp[i][j+50] += dp[i-1][j]*W;
            dp[i][j] += dp[i-1][j]*D;
        }
    }

    //각각의 랭크 확률
    double b, s, g, p, d;
    b = s = g = p = d = 0;
    for(int i = 1000; i<=3000; i++)
    {
        if(i>=3000)
            d+=dp[20][i];
        else if(i>=2500)
            p+=dp[20][i];
        else if(i>=2000)
            g+=dp[20][i];
        else if(i>=1500)
            s+=dp[20][i];
        else
            b+=dp[20][i];
    }
    printf("%.8lf\n%.8lf\n%.8lf\n%.8lf\n%.8lf",b, s, g, p, d);
    return 0;
}