#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, num, sum, median, mode, cnt[8002], range, maxNum, minNum, maxCnt, flag;
double avg;
vector<int> nums, idxes;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;    // N : 홀수

    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
        sum += num;    // 총합 계산하기
    }
    
    // 오름차순 정렬
    sort(nums.begin(), nums.end());

    // (1) 산술 평균 구하기
    avg = round((double)sum / N);    // 소수점 첫째 자리에서 반올림
    avg = (int)avg;    // int 형으로 변환 (-0이 출력되지 않도록 하기 위함.)

    // (2) 중앙값 구하기
    median = nums[floor(N / 2)];  // 내림
    
    // (3) 최빈값 구하기
    for (int i = 0; i < N; i++) {
        cnt[nums[i] + 4000]++;
    }

    maxCnt = 0;
    for (int i = 0; i < 8002; i++) {
        if (maxCnt < cnt[i]) {
            maxCnt = cnt[i];
        }
    }

    flag = 0;
    for (int i = 0; i < 8002; i++) {
        if (cnt[i] == maxCnt) {
            flag++;
            idxes.push_back(i - 4000);
        }
    }

    mode = (flag >= 2) ? idxes[1] : idxes[0];

    // (4) 최솟값, 최댓값, 범위 구하기
    minNum = nums[0];
    maxNum = nums[nums.size() - 1];
    range = maxNum - minNum;

    cout << avg << '\n' << median << '\n' << mode << '\n' << range << '\n';

    return 0;
}