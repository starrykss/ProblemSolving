#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, lastValue, count;

    cin >> N;

    lastValue = 1;
    count = 1;
    while (N > lastValue) {
        lastValue = lastValue + (6 * count);      // 7, 19, 37, 61, ...
        count++;
    }

    cout << count << endl;

    return 0;
}

// { 1 } : 1 (1개)    
// { 2, 3, 4, 5, 6, 7 } : 2 (6개)   
// { 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 } : 3 (12개) 
// { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 } : 4 (18개) 
// { 38, ...,  61 } : 5 (24개)  
// { 62, ..., ... } : 6