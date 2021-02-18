#include <bits/stdc++.h>

int arr[10];

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
        arr[str[i]-'0']++;

    int n = 0;
    for(int i = 0; i<10; i++)
        if(i!=6 && i!=9)
            n = std::max(n, arr[i]);

    int numSorN = (arr[6]+arr[9]+1)/2;

    std::cout << std::max(n, numSorN);
    return 0;
}