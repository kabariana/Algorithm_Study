#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> a(10);
    std::vector<int> b(10);

    for(int i = 0; i<10; i++)
        std::cin >> a[i];
    for(int i = 0; i<10; i++)
        std::cin >> b[i];
    
    int scA = 0, scB = 0;
    char winner = 'D';
    for(int i = 0; i<10; i++)
    {
        if(a[i]>b[i])
        {
            scA+=3;
            winner = 'A';
        }
        else if(a[i] < b[i])
        {
            scB+=3;
            winner = 'B';
        }
        else
        {
            scA++;
            scB++;
        }
    }
    std::cout << scA << ' ' << scB <<'\n';
    if(scA > scB)
        std::cout << 'A';
    else if(scA < scB)
        std::cout << 'B';
    else
        std::cout << winner;
    return 0;
}