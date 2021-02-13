// 버블정렬 과정 출력 문제
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[5];
    for(int i = 0; i<5; i++)
        std::cin >> arr[i];
    
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
                for(int k = 0; k < 5; k++)
                    std::cout << arr[k] << ' ';
                std::cout << '\n';
            }
        }
    }
    return 0;
}