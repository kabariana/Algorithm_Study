#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int a, b, c, temp;
        std::cin >> a >> b >> c;

        temp = a;
        if(a == 0 && b == 0 && c == 0)
            break;

        int i=0;
        while(a<c)
        {
            a+=b;
            i++;
        }
        if(temp + b*i == c)
            std::cout << i+1 << '\n';
        else
            std::cout << "X\n";
    }
    return 0;
}