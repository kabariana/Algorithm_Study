#include <bits/stdc++.h>

double func(int n)
{
    double res = 1;
    for(double i = 2; i <= n; i++)
        res*=i;
    return res;
}

int main(int argc, char* argv[])
{
    double ret = 1;
    std::cout << "n e\n- -----------\n0 1\n";

    for(int i = 1; i<=9; i++)
    {
        std::cout << i << ' ';
        ret += 1/ func(i);
        if(i == 1) 
            std::cout << "2\n";
        else if(i == 2)
            std::cout << "2.5\n";
        else
            printf("%.9f", ret);
    }
    return 0;
}