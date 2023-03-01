#include <iostream>
using namespace std;

int N = 20;    // 20번
string subjectName, grade;
double gpa, credit, totalGrade, totalCredit;

void Calculate(double c, string g) {
    double score, tmpCredit = 0;
    int count;

    count = 0;
    if (g.compare("P") != 0) {    // P가 아닐 경우, compare() 함수는 서로의 값이 같을 경우 0을 반환한다.
        if (g.compare("A+") == 0) score = 4.5;
        else if (g.compare("A0") == 0) score = 4.0;
        else if (g.compare("B+") == 0) score = 3.5;
        else if (g.compare("B0") == 0) score = 3.0;
        else if (g.compare("C+") == 0) score = 2.5;
        else if (g.compare("C0") == 0) score = 2.0;
        else if (g.compare("D+") == 0) score = 1.5;
        else if (g.compare("D0") == 0) score = 1.0;
        else score = 0.0;    // F
        
        count++;
        tmpCredit = c;
    }
    
    // 값 업데이트
    totalGrade += (tmpCredit * score);
    totalCredit += tmpCredit;
}

void Input() {
    for (int i = 0; i < N; i++) {
        cin >> subjectName >> credit >> grade;

        Calculate(credit, grade);
    }
}

double Solution() {
    // 전공 평점 = 시그마(학점 × 과목평점) / 시그마(학점)
    gpa = totalGrade / totalCredit;
    
    return gpa;
}

void Output() {
    cout << Solution() << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed;
    cout.precision(6);    // 소수점 자릿수 조절 (소수점 이하 6자리)

    Solve();

    return 0;
}