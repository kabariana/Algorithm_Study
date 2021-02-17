#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[10];
    for(int i = 0; i<10; i++)
        std::cin >> arr[i];

    int aw, bw, d;
    aw = bw = d = 0;
    for(int i = 0; i<10; i++)
    {
        int b_card;
        std::cin >> b_card;

        if(arr[i] < b_card)
            bw++;
        else if(arr[i]>b_card)
            aw++;
    }
    if(aw == bw)
        std::cout << "D";
    else if(aw > bw)
        std::cout << "A";
    else
        std::cout << "B";
    return 0;
}