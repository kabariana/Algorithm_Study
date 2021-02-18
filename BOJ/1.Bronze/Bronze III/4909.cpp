#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        double arr[6];

        double sum = 0;
        for(int i = 0; i<6; i++)
        {
            std::cin >> arr[i];
            sum+=arr[i];
        }

        if(sum == 0)
            break;

        std::sort(arr, arr+6);
        
        sum-=arr[0];
        sum-=arr[5];
        printf("%g\n", sum/4);
    }
    return 0;
}