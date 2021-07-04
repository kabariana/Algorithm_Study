#include <bits/stdc++.h>

std::string stringSum(std::string A, std::string B)
{
    std::string ret;
    int carry = 0;
    for(int i = 0; i<A.length(); i++)
    {
        int num = (A[i] - '0' + B[i] - '0' + carry) % 10;
        ret += std::to_string(num);
        carry = (A[i] - '0' + B[i] - '0' + carry) / 10;
    }
    if(carry != 0)
        ret += std::to_string(carry);
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string A, B;
    std::cin >> A >> B;

    std::reverse(A.begin(), A.end());
    std::reverse(B.begin(), B.end());

    while(A.length() < B.length())
        A += '0';
    while(A.length() > B.length())
        B += '0';

    std::string result = stringSum(A, B);

    std::reverse(result.begin(), result.end());

    std::cout << result << '\n';   
    return 0;
}