#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, sum;
    int arr[200][3] = {0, }; // n <= 200, 3번의 게임
    int brr[3][101] = {0, }; // 이미 나온 수가 있는지 체크하는 배열

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        // 3번의 게임 진행
        for(int j = 0; j < 3; j++)
        {
            int temp;
            std::cin >> temp;
            arr[i][j] = temp;
            brr[j][temp]++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = 0; j < 3; j++)
        {
            if(brr[j][arr[i][j]] == 1)
                sum += arr[i][j];
        }
        std::cout << sum << '\n';
    }
    return 0;
}