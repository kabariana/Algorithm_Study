#include <bits/stdc++.h>

void print(int num)
{
    std::cout << num << " = 1";
    for(int i = 2; i<num; i++)
    {
        if(num%i == 0)
            std::cout << " + " << i;
    }
    std::cout << '\n';
}

int main(int argc, char* argv[])
{
    while(true)
    {
        int num, sum = 0;
        std::cin >> num;

        if(num == -1)
            break;
        
        for(int i = 1; i < num; i++)
            if(num%i == 0)
                sum += i;
        
        if(sum != num)
            std::cout << num << " is NOT perfect.\n";
        else
            print(num);
    }
    return 0;
}