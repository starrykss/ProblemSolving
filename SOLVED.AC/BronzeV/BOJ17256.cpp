#include <iostream>
using namespace std;

int ax, ay, az, cx, cy, cz;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;

    // a 🍰 b 
    // = (a.z + b.x, a.y * b.y, a.x + b.z)
    // = (c.x, c.y, c.z)
    // a.z + b.x = c.x    => b.x = c.x - a.z
    // a.y * b.y = c.y    => b.y = c.y / a.y
    // a.x + b.z = c.z     => b.z = c.z - a.x

    cout << cx - az << " " << cy / ay << " " << cz - ax;
    
    return 0;
}