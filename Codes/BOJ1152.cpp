#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string sentence;
    
    getline(cin, sentence);
    sentence.push_back(' ');

    bool isWord, flag;
    int count;

    isWord = false;
    flag = false;
    count = 0;

    for (int i = 0; i < sentence.length(); i++) {  
        isWord = (sentence[i] != ' ');

        if (isWord) {
            flag = true;
        }
        else {
            if (flag) {
                count++;
            }
            flag = false;
        }
    }

    cout << count << endl;

    return 0;
}