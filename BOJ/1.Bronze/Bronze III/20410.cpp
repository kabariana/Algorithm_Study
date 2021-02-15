#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int m, seed, x1, x2;
    std::cin >> m >> seed >> x1 >> x2;
    
    int r_a, r_c;
    r_a = r_c = -1;

    for(int a = 0; a < m; a++)
    {
        for(int c = 0; c < m; c++)
        {
            if((a*seed+c)%m == x1 && (a*x1+c)%m == x2)
            {
                r_a = a;
                r_c = c;
                break;
            }
        }
        if(r_a != -1 && r_c != -1)
            break;
    }
    std::cout << r_a << ' ' << r_c;
    return 0;
}