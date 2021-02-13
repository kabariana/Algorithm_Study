#include <bits/stdc++.h>

int arr[21];

int main(int argc, char* argv[])
{
    int n, mT, yT;
    mT = yT = 0;
    std::cin >> n;  
    for(int i = 0; i<n; i++)
    {
        std::cin >> arr[i];
        yT += (arr[i]/30 + 1)*10;
        mT += (arr[i]/60 + 1)*15;
    }
    if(yT > mT) 
        std::cout << "M " << mT << '\n';
    else if(yT < mT)
        std::cout << "Y " << yT << '\n';
    else 
        std::cout << "Y M " << yT << '\n';
    return 0;
}
