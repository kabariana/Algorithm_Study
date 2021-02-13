#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    const double modifier = 0.167;
    while(true)
    {
        double w;
        std::cin >> w;
        if(w == -1.0)
            break;
        printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", w, w*modifier);
    }
    return 0;
}