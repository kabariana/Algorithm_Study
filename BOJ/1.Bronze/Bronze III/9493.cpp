#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double P, T;
    while(true)
    {
        int m, a, b;
        std::cin >> m >> a >> b;

        if(!m&&!a&&!b)
            break;
        P = m/(double)a*3600;
        T = m/(double)b*3600;
        int sum = std::round(std::abs(P-T));
        printf("%01d:%02d:%02d\n", sum/3600, sum%3600/60, sum%3600%60); 
    }
    return 0;
}