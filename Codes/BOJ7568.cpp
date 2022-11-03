#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

using myVector = vector<tuple<int, int, int>>;

int N, weight, height, rate;
myVector body;

void BruteForce(myVector v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if ((get<0>(body[i]) < get<0>(body[j])) && (get<1>(body[i]) < get<1>(body[j]))) {
                get<2>(body[i])++;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    rate = 1;
    for (int i = 0; i < N; i++) {
        cin >> weight >> height;
        body.push_back({ weight, height, rate });
    }

    BruteForce(body);

    for (auto i : body) {
        cout << get<2>(i) << " ";
    }

    return 0;
}