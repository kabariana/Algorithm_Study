#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int d, vf, vg;
    while(scanf("%d %d %d", &d, &vf, &vg)==3)
    {
        if(12*12*vg*vg>=12*12*vf*vf + d*d*vf*vf)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}