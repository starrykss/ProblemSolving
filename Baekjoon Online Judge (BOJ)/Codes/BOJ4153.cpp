#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        cin >> a >> b >> c;

        if (!a && !b && !c) {    // 0 입력 받으면 반복문 빠져 나오기
            break;
        }
        
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);

        sort(nums.begin(), nums.end());   // 오름 차순 정렬
        
        if (pow(nums[2], 2) == pow(nums[1], 2) + pow(nums[0], 2)) { 
            cout << "right" << '\n';
        }
        else {
            cout << "wrong" << '\n';
        }

        nums.clear();    // 벡터 비워주기
    }

    return 0;
}