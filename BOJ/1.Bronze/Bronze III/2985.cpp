#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if(A+B==C)
        printf("%d+%d=%d",A,B,C);
    else if(A-B==C)
        printf("%d-%d=%d",A,B,C);
    else if(A*B==C)
        printf("%d*%d=%d",A,B,C);
    else if(A/B==C)
        printf("%d/%d=%d",A,B,C);
    else if(A==B+C)
        printf("%d=%d+%d",A,B,C);
    else if(A==B-C)
        printf("%d=%d-%d",A,B,C);
    else if(A==B*C)
        printf("%d=%d*%d",A,B,C);
    else if(A==B/C)
        printf("%d=%d/%d",A,B,C);
    return 0;
}