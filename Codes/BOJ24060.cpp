#include <iostream>
using namespace std;

int A, K, num, cnt, *nums, *tmp, answer = -1;

// A[p..q]와 A[q+1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q+1..r]은 이미 오름차순으로 정렬되어 있다.
void merge(int *ary, int p, int q, int r) {
    int i, j, t;

    i = p;
    j = q + 1;
    t = 1;

    while (i <= q && j <= r) {
        if (ary[i] <= ary[j]) {
            tmp[t++] = ary[i++];    // tmp[t] = A[i]; t++; i++;
        }
        else {
            tmp[t++] = ary[j++];    // tmp[t] = A[j]; t++; j++;
        }
    }
    while (i <= q) {    // 왼쪽 배열 부분이 남은 경우
        tmp[t++] = ary[i++];
    }
    while (j <= r) {
        tmp[t++] = ary[j++];    // 오른쪽 배열 부분이 남은 경우
    }

    i = p;
    t = 1;

    while (i <= r) {    // 결과를 A[p..r]에 저장
        ary[i++] = tmp[t++];
        cnt++;
        if (cnt == K) {
            answer = ary[i - 1];
            break;
        }
    }
}

void merge_sort(int *ary, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;     // q는 p, r의 중간 지점 (내림)
        merge_sort(ary, p, q);    // 전반부 정렬
        merge_sort(ary, q + 1, r);    // 후반부 정렬
        merge(ary, p, q, r);    // 병합
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> K;

    nums = new int[A];    // 벡터를 이용하여 문제를 풀 경우 시간 초과 오류 발생
    tmp = new int[A];    // merge() 함수 내부에서 동적 할당을 할 경우, '메모리 초과' 오류 발생

    for (int i = 0; i < A; i++) {
        cin >> num;
        nums[i] = num;
    }
    
    merge_sort(nums, 0, A - 1);

    cout << answer << '\n';

    delete[] nums;
    delete[] tmp;

    return 0;
}