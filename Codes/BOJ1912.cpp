#include <iostream>
#include <vector>
using namespace std;

int n, num, result;
vector<int> seq, dp; 

void Input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        seq.push_back(num);
    }
    dp.resize(n);
}

int Calc(int n) {
    dp[0] = seq[0];
    result = seq[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + seq[i], seq[i]);
        result = max(result, dp[i]);
    }
    return result;
}

/*
int findMaxNum(vector<int> v) {
    int maxN = INT_MIN;
    for (auto i : v) {
        if (maxN < i) {
            maxN = i;
        }
    }
    return maxN;
}


// 시간 초과 : 부분합 + 2중 for문
int Calc2(int e) {
    int maxNum = INT_MIN;

    // 부분합 구하기
    pSum[0] = seq[0];
    for (int i = 1; i < e; i++) {
        pSum[i] = seq[i] + pSum[i - 1];  
    }

    for (auto i : seq) {
        dp.push_back(i);
    }

    for (int i = 0; i < e; i++) {
        for (int j = 0; j < i; j++) {
            int tmp = pSum[i] - pSum[j];
            if (tmp > maxNum) {
                maxNum = tmp;
            }
        }
        dp.push_back(maxNum);
        maxNum = INT_MIN;
    }

    return findMaxNum(dp);
}

// 시간 초과 O(n²)
int Calc3(int e) {
    int maxNum, sum;

    maxNum = INT_MIN;
    sum = 0;

    for (int i = 0; i < e - 1; i++) {
        for (int j = i; j < e; j++) {
            sum += seq[j];

            if (maxNum < sum) {
                maxNum = sum;
            }
        }
        dp.push_back(maxNum);
        maxNum = INT_MIN;
        sum = 0;
    }
    return findMaxNum(dp);
}

// 시간 초과 (O(n³))
int Calc4(int e) {
    int maxNum, sum;

    maxNum = INT_MIN;
    sum = 0;

    for (int i = 0; i < e - 1; i++) {
        for (int j = i; j < e; j++) {
            for (int k = i; k <= j; k++) {
                sum += seq[k];

                if (maxNum < sum) {
                    maxNum = sum;
                }
            }
            dp.push_back(maxNum);
            maxNum = INT_MIN;
            sum = 0;
        }
    }
    return findMaxNum(dp);
}
*/

void Output() {
    cout << Calc(n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}