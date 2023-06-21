#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c;
vector<int> lengths;

void Input() {
    cin >> a >> b >> c;
}

int Solution(int s1, int s2, int s3) {
    int sum, minNum, num, maxNum;

    // 삼각형의 결정 조건 : 가장 긴 변의 길이가 다른 두 변의 길이의 합보다 작아야 한다.
    lengths.push_back(s1);
    lengths.push_back(s2);
    lengths.push_back(s3);

    // 오름차순 정렬
    sort(lengths.begin(), lengths.end());

    maxNum = lengths[2];
    num = lengths[1];
    minNum = lengths[0];
    
    if (minNum + num > maxNum) {
        sum = minNum + num + maxNum;
    }
    else {
        sum = (minNum + num) * 2 - 1; 
    }

    return sum;
}

void Output() {
    cout << Solution(a, b, c) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}