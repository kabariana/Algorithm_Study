#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, i = 1;
    std::cin >> a >> b;

    while(true)
    {
        if(a*i%b ==1 )
        {
            std::cout << i;
            return 0;
        }
        i++;
    }
    return 0;
}