#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        double input;
        std::cin >> input;

        if(input == 0)
            break;

        double sum = 0;
        double init = 2;
        while(sum<input)
        {
            sum+=1/init;
            init++;
        }
        std::cout << init-2 <<" card(s)\n";
    }
    return 0;
}