#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int* arr = new int[n];
    for(int i = 0; i<n; i++)
        std::cin >> arr[i];
    
    bool flag = true;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(i!=j && j!=k && i!=k && (arr[i]-arr[j])%arr[k])
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    if(flag)
        std::cout << "yes";
    else
        std::cout << "no";
    delete[] arr;
    return 0;
}