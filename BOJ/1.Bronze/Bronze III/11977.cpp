#include <bits/stdc++.h>

int arr[101];

int main(int argc, char* argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    for(int i = a; i<b; i++)
        arr[i] = 1;
    for(int i = c; i<d; i++)
        arr[i] = 1;
    int cnt = 0;
    for(int i = 0; i<=100; i++)
        cnt+=arr[i];
    std::cout << cnt;
    return 0;    
}