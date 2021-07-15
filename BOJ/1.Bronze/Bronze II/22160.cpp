#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int arr[12];
    while(true)
    {
        bool inputEnd = true;
        for(int i = 0; i<12; i++)
            std::cin >> arr[i];
        for(int i = 0; i<12; i++)
            if(arr[i] != 0)
                inputEnd = false;
        if(inputEnd) 
            break;
        
        bool res = true;
        for(int i = 0; i<12; i++)
        {
            int tmp = 0;
            for(int j = 0; j<12; j++)
                tmp += (arr[i] == arr[j]);
            if(tmp % 4 != 0)
                res = false;
        }
        if(res)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
    }
    return 0;
}