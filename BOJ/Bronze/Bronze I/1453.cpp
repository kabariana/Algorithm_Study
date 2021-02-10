#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[101] = {0,};
    int n, cnt = 0;
    std::cin >> n;
    while(n--)
    {
        int temp;
        std::cin >> temp;

        if(arr[temp] == 1)
            cnt++;
        else
            arr[temp]++;
    }
    std::cout << cnt;
    return 0;
}