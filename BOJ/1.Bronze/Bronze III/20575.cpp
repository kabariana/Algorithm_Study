#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        double x1, y1, x2, y2;
        std::cin>> x1 >> y1 >> x2 >> y2;
        if((int)x1!=(int)x2)
            cnt++;
        else if(x1*x2<0)
            cnt++;
    }
    printf("%.6lf", 2.0*n/cnt);
    return 0;
}