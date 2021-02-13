#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    int arr[5] = {0, };
    std::cin >> n;

    while(n--)
    {
        int x, y;
        std::cin >> x >> y;

        if(x > 0 && y > 0)
            arr[0]++;
        else if(x < 0 && y > 0)
            arr[1]++;
        else if(x < 0 && y < 0)
            arr[2]++;
        else if(x > 0 && y < 0)
            arr[3]++;
        else
            arr[4]++;
    }
    for(int i = 0; i<4; i++)
        std::cout << "Q"<< i+1 <<  ": " << arr[i] <<'\n';
    std::cout << "AXIS: " << arr[4];
    return 0;
}