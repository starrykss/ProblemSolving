#include <iostream>
#include <string>
using namespace std;

int algorithm(char ch);

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string word;
    int sum;

    getline(cin, word);

    sum = 0;
    for (int i = 0; i < word.length(); i++) {
        sum += algorithm(word[i]);
    }
    sum += word.length(); 

    cout << sum << endl;

    return 0;
}

int algorithm(char ch) {
    if ((ch >= 'A') && (ch <= 'C')) {
        return 2;
    }
    else if ((ch >= 'D') && (ch <= 'F')) {
        return 3;
    }
    else if ((ch >= 'G') && (ch <= 'I')) {
        return 4;
    }
    else if ((ch >= 'J') && (ch <= 'L')) {
        return 5;
    }
    else if ((ch >= 'M') && (ch <= 'O')) {
        return 6;
    }
    else if ((ch >= 'P') && (ch <= 'S')) {
        return 7;
    }
    else if ((ch >= 'T') && (ch <= 'V')) {
        return 8;
    }
    else if ((ch >= 'W') && (ch <= 'Z')) {
        return 9;
    }
    else {
        return 0;
    }
}
