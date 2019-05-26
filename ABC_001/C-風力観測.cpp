#include <bits/stdc++.h>
using namespace std;

int main(){
    double x, y;
    cin >> x >> y;
    string deg;
    x /= 10.0;
    if(11.25 <= x && x < 33.75) deg = "NNE";
    else if(33.75 <= x && x < 56.25) deg = "NE";
    else if(56.25 <= x && x < 78.75) deg = "ENE";
    else if(78.75 <= x && x < 101.25) deg = "E";
    else if(101.25 <= x && x < 123.75) deg = "ESE";
    else if(123.75 <= x && x < 146.25) deg = "SE";
    else if(146.25 <= x && x < 168.75) deg = "SSE";
    else if(168.75 <= x && x < 191.25) deg = "S";
    else if(191.25 <= x && x < 213.75) deg = "SSW";
    else if(213.75 <= x && x < 236.25) deg = "SW";
    else if(236.25 <= x && x < 258.75) deg = "WSW";
    else if(258.75 <= x && x < 281.25) deg = "W";
    else if(281.25 <= x && x < 303.75) deg = "WNW";
    else if(303.75 <= x && x < 326.25) deg = "NW";
    else if(326.25 <= x && x < 348.75) deg = "NNW";
    else deg = "N";

    int w;
    y = round(y / 60.0 * 10.0) / 10.0;
    if(0 <= y && y <= 0.2) w = 0;
    else if(0.3 <= y && y <= 1.5) w = 1;
    else if(1.6 <= y && y <= 3.3) w = 2;
    else if(3.4 <= y && y <= 5.4) w = 3;
    else if(5.5 <= y && y <= 7.9) w = 4;
    else if(8.0 <= y && y <= 10.7) w = 5;
    else if(10.8 <= y && y <= 13.8) w = 6;
    else if(13.9 <= y && y <= 17.1) w = 7;
    else if(17.2 <= y && y <= 20.7) w = 8;
    else if(20.8 <= y && y <= 24.4) w = 9;
    else if(24.5 <= y && y <= 28.4) w = 10;
    else if(28.5 <= y && y <= 32.6) w = 11;
    else if(32.7 <= y) w = 12;

    if(w == 0) deg = "C";

    cout << deg << " " << w << endl;
    return 0;
}
