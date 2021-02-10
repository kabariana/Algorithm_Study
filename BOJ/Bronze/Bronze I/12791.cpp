#include <bits/stdc++.h>

struct album {
    int year;
    std::string title;
};

int main(int argc, char* argv[])
{
    album arr[26] = {
        {1967, "DavidBowie"},
        {1969, "SpaceOddity"},
        {1970, "TheManWhoSoldTheWorld"},
        {1971, "HunkyDory"},
        {1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"},
        {1973, "AladdinSane"},
        {1973, "PinUps"},
        {1974, "DiamondDogs"},
        {1975, "YoungAmericans"},
        {1976, "StationToStation"},
        {1977, "Low"},
        {1977, "Heroes"},
        {1979, "Lodger"},
        {1980, "ScaryMonstersAndSuperCreeps"},
        {1983, "LetsDance"},
        {1984, "Tonight"},
        {1987, "NeverLetMeDown"},
        {1993, "BlackTieWhiteNoise"},
        {1995, "1.Outside"},
        {1997, "Earthling"},
        {1999, "Hours"},
        {2002, "Heathen"},
        {2003, "Reality"},
        {2013, "TheNextDay"},
        {2016, "BlackStar"}
    };

    int Q;
    std::cin >> Q;
    while (Q--)
    {
        int a, b, cnt = 0;
        std::cin >> a >> b;

        for (int i = 0; i < 25; i++)
            if (arr[i].year >= a && arr[i].year <= b)
                cnt++;

        std::cout << cnt << '\n';

        for (int i = 0; i < 25; i++)
            if (arr[i].year >= a && arr[i].year <= b)
                std::cout << arr[i].year << ' ' << arr[i].title << '\n';
    }
    return 0;
}