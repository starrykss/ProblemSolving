#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, num;
vector<int> realFactors;

int findN(vector<int> v) {
    int minN, maxN;
    sort(v.begin(), v.end());    // 오름차순 정렬
    minN = v[0];
    maxN = v[v.size() - 1];

    return minN * maxN;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        realFactors.push_back(num);
    }

    cout << findN(realFactors) << '\n';

    return 0;
}