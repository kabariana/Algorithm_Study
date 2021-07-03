// N개의 돌에서 4 ^ x 개 만큼 가져갈 수 있다.
// 1, 4, 16, 64, ...

// 0 -> *0 = {}
// 1 -> *1 = {*0}
// 2 -> *2 = {*1} = *0
// 3 -> *3 = {*2} = *1
// 4 -> *4 = {*0, *3} = *2;
// 5 -> *5 = {*1, *4} = {*1, *2} = *0
// 6 -> *6 = {*2, *5} = {*0} = *1
// 7 -> *7 = {*3, *6} = {*1} = *0
// 8 -> *8 = {*4, *7} = {*0, *2} = *1
// 9 -> *9 = {*5, *8} = {*0, *1} = *2
// - - - 
// 0 1 0 1 2 패턴 반복 : MOD 5 == 0 or 2

#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll N;
    std::cin >> N;

    if(N%5 == 0 || N%5 == 2)
        std::cout << "CY\n";
    else
        std::cout << "SK\n";
    return 0;
}