#include <bits/stdc++.h>

int num_seg[10] = {6,2,5,5,4,5,6,3,7,6};

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    bool flag = false;
    for(int h = 0; h<24; h++)
    {
        for(int m = 0; m<60; m++)
        {
            if(num_seg[h%10] + num_seg[h/10] + num_seg[m%10] + num_seg[m/10] == n)
            {
                printf("%02d:%02d", h, m); 
                flag = true;
                return 0;
            }
        }
    }
    std::cout << "Impossible";
    return 0;
}