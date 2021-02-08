#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[3];
    int sum = 0, min = INT_MAX;

    for(int i = 0; i<3; i++)
        std::cin >> arr[i];

    for(int i = 0; i<3; i++)
    {
        sum = 0;
        for(int j = 0; j<3; j++)
        {
            int temp = arr[j]*std::abs(i-j)*2;
            sum += temp;
        }
        if(sum < min)
            min = sum;
    }
    std::cout << min;
    return 0;
}