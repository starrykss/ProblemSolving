#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, num;
vector<int> nums, uNums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
        uNums.push_back(num);     
    }

    sort(uNums.begin(), uNums.end());
    uNums.erase(unique(uNums.begin(), uNums.end()), uNums.end());

    for (auto i : nums) {
        auto it = lower_bound(uNums.begin(), uNums.end(), i);
        cout << it - uNums.begin() << ' ';
    }

    return 0;
}

/* 시간 초과 */
/*
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int N, num, cnt;
vector<int> nums, cnts;
set<int> uniqueNums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
        uniqueNums.insert(num);    // 중복 제거
    }

    // sort(nums.begin(), nums.end());    // 오름차순 정렬

    for (int i = 0; i < nums.size(); i++) {
        cnt = 0;
        for (auto j : uniqueNums) {
            if (nums[i] > j) {
                cnt++;
            }
        }
        cnts.push_back(cnt);
    }

    for (auto i : cnts) {
        cout << i << " ";
    }

    return 0;
}
*/