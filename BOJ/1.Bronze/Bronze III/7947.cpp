#include <bits/stdc++.h>
#define MAX 10
using namespace std;  

int main(void) 
{ 
    int TC; 
    cin >> TC; 
    for (int t = 0; t < TC; t++) 
    { 
        double red = 0, green = 0, blue = 0; 
        for (int i = 0; i < MAX; i++) 
        { 
            double r, g, b; 
            cin >> r >> g >> b; 
            
            red += r; 
            green += g; 
            blue += b;   
        } 
        printf("%.lf %.lf %.lf\n", round(red / MAX), round(green / MAX), round(blue / MAX));
    } 
    return 0; 
}