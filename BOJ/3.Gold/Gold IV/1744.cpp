#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, tmp;
    std::cin >> n;

    std::vector<int> pos;
    std::vector<int> neg;

    int cnt1 = 0, cnt0 = 0;

    for(int i = 0; i<n; i++)
    {
        std::cin >> tmp;
        if(tmp>1) pos.push_back(tmp);
        else if(tmp<0) neg.push_back(-tmp);
        else if(tmp == 0) cnt0++;
        else cnt1++;
    }

    if(pos.size()%2 == 1)
        pos.push_back(1);
    if(neg.size()%2 == 1){
        if(cnt0 == 0) 
            neg.push_back(-1);
        else 
            neg.push_back(0);
    }

    std::sort(pos.begin(), pos.end());
    std::sort(neg.begin(), neg.end());

    int sum = cnt1;
    for(int i = 0; i<pos.size(); i+=2)
        sum += pos[i] * pos[i+1];
    for(int i = 0; i<neg.size(); i+=2)
        sum += neg[i] * neg[i+1];
    std::cout << sum << '\n';
    return 0;
}