#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int maxScore[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    int arr[9];

    for(int i = 0; i < 9; i++)
        std::cin >> arr[i];
    
    int sum = 0;
    for(int i = 0; i<9; i++)
    {
        if(arr[i] > maxScore[i])
        {
            std::cout << "hacker\n";
            return 0;
        }
        sum += arr[i];
    }

    if(sum <100)
        std::cout << "none\n";
    else
        std::cout << "draw\n";
    return 0;
}