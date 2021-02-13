#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    const int size = 9;
    int arr[size];
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        std::cin >> arr[i];
        sum+=arr[i];
    }

    std::sort(arr, arr+size);

    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(sum - arr[i] - arr[j] == 100)
            {
                for(int k = 0; k < size; k++)
                {
                    if(k != i && k != j)
                        std::cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
}