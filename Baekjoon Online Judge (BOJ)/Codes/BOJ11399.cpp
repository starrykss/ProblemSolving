#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, p, sum;
vector<int> P;

void Input() {
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> p;
		P.push_back(p);
	}
}

int Solution(vector<int> &v) {
	sort(v.begin(), v.end());    // Sort with Ascending Order
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			sum += P[j];
		}
	}
	return sum;
}

void Output() {
	cout << Solution(P) << '\n';
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
