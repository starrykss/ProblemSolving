#include <iostream>
#include <string>
using namespace std;

int algorithm(string word);

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, sum;
    
    cin >> N;
    cin.ignore();

    string *words = new string[N];
    
    sum = 0;
    for (int i = 0; i < N; i++) {
        getline(cin, words[i]);
        sum += algorithm(words[i]);
    }

    cout << sum << endl;

    return 0;
}

int algorithm(string word) {
    for (int i = 0; i < word.length(); i++) {
        for (int j = word.length(); j > i; j--) {
            if (word[i] != word[i + 1]) {
                if (word[i] == word[j]) {
                    return 0;
                }
            }
        }
    }

    return 1;
}