#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[10], sum = 0;
    
    for(int i = 0; i < 10; i++)
        std::cin >> arr[i];

    for(int i = 0; i<10; i++)
    {
        if(std::abs(sum+arr[i]-100) <= std::abs(sum-100))
            sum+=arr[i];
        else
            break;
    }
}