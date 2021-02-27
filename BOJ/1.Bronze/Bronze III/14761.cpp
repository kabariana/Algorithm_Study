#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int x, y, n;
    std::cin >> x >> y >> n;

    for(int i=1; i<=n; i++)
    {
        if(i%x==0&&i%y==0)
            std::cout << "FizzBuzz\n";
        else if(i%x==0)
            std::cout << "Fizz\n";
        else if(i%y==0)
            std::cout << "Buzz\n";
        else
            std::cout << i << '\n';
    }
    return 0;
}