#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, t;
    scanf("%d", &n);
    t = 0xAC00 + n - 1;
    printf("%c%c%c\n", 
        0xE0 + (t >> 12), 
        0x80 + (t>>6&0x3F), 
        0x80 + (t&0x3F));
    return 0;
}