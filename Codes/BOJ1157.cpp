#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string word;
    int strLength, max, count, alphabet[26] = { 0 };
    char answer;

    getline(cin, word);
    strLength = word.length();
    
    // ASCII Codes
    // A ~ Z : 65 ~ 90
    // a ~ z : 97 ~ 122 
    
    // (1) Make all letters in the string(Word) lower Case
    for (int i = 0; i < strLength; i++) {
        if ((word[i] >= 'A') && (word[i] <= 'Z')) {
            word[i] += 32;
        }
    }

    // (2) Calculate
    for (int i = 0; i < strLength; i++) {
        alphabet[word[i] - 'a']++;
    }

    // (3) Find the most frequent letter and Check its duplication
    max = 0;
    count = 0;

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == max) {
            count++;
            answer = i + 'A';    // Answer should be 'Upper Case' letter
        }
    }

    // (4) Print the answer
    if (count > 1) {
        cout << "?" << endl;
    }
    else {
        cout << answer << endl;
    }
   
    return 0;
}