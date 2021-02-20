#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    int minv = INT_MAX;
    for(int i = 0; i<7; i++)
    {
        int num;
        std::cin >> num;
        
        if(num%2 == 1)
        {
            sum+= num;
            minv = std::min(minv, num);
        }  
    }
    if(sum == 0)
        std::cout << "-1";
    else
        std::cout << sum << '\n' << minv;
    return 0;
}