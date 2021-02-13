#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[5];

    for(int i = 0; i<5; i++)
        std::cin >> arr[i];

    int tmp = 1;

    while(true)
    {
        int cnt = 0;
        for(int i = 0; i<5; i++)
        {
            if(tmp >= arr[i] && tmp % arr[i] == 0)
                cnt++;
        }

        if(cnt >= 3)
        {
            std::cout << tmp;
            break;
        }

        tmp++;
    }
    return 0;
}