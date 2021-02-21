#include <bits/stdc++.h>

double arr[4];
double ans[4];

int main(int argc, char* argv[])
{
    for(int i = 0; i<4; i++)
        std::cin >> arr[i];

    ans[0] = arr[0]/arr[2] + arr[1]/arr[3];
    ans[1] = arr[2]/arr[3] + arr[0]/arr[1];
    ans[2] = arr[3]/arr[1] + arr[2]/arr[0];
    ans[3] = arr[1]/arr[0] + arr[3]/arr[2];

    double max = 0;
    int idx = 0;

    for(int i = 0; i<4; i++)
    {
        if(ans[i]>max)
        {
            max = ans[i];
            idx = i;
        }
    }
    std::cout << idx;
    return 0;   
}