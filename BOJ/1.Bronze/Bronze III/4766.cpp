#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double a, tmp, n;

    std::cin >> n;
    tmp = n;

    while(true)
    {
        std::cin >> a;
        if(a == 999)
            break;
        printf("%.2lf\n", a-tmp);
        tmp = a;    
    }
    return 0;
}