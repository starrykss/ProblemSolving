// SWEA 1285. 아름이의 돌 던지기

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int T, N, dist;
vector<int> distances;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int test_case = 1; test_case <= T; test_case++) {
        cin >> N;

        distances.clear();  
        
        for (int j = 0; j < N; j++) {
            cin >> dist;

            distances.push_back(abs(dist));    // 절댓값으로 넣기
        }
        
        // 오름차순 정렬
        sort(distances.begin(), distances.end());
        int min_num = distances[0];

        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (distances[i] == min_num) {
                cnt++;
            }
        }

        cout << "#" << test_case << " " << min_num << " " << cnt << '\n'; 
    }

    return 0;
}