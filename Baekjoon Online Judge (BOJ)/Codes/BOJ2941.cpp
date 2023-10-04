#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string word;
    int count;

    getline(cin, word);

    bool *flag = new bool[word.length()];
    memset(flag, 1, word.length());

    // Croatian Alphabet
    // - č <=> c=     - ć <=> c-
    // - dž <=> dz=   - đ <=> d-
    // - lj <=> lj    - nj <=> nj
    // - š <=> s=     - ž <=> z=
    
    count = 0;
    for (int i = word.length(); i > 0; i--) {
        if (word[i] != 0) {
            //  Check { c=, dz=, s=, z= }
            if (word[i] == '=') {
                if ((word[i - 1] == 'c') || (word[i - 1] == 's')) {
                    count++;
                    flag[i] = 0;
                    flag[i - 1] = 0;
                }
                else if (word[i - 1] == 'z') {
                    if (word[i - 2] == 'd') {
                        count++;
                        flag[i] = 0;
                        flag[i - 1] = 0;
                        flag[i - 2] = 0;
                    }
                    else {
                        count++;
                        flag[i] = 0;
                        flag[i - 1] = 0;
                    }
                }
            }
            // Check { c-, d- }
            else if (word[i] == '-') {
                if ((word[i - 1] == 'c') || (word[i - 1] == 'd')) {
                    count++;
                    flag[i] = 0;
                    flag[i - 1] = 0;
                }
            }
            // Check { lj, nj }
            else if (word[i] == 'j') {
                if ((word[i - 1] == 'l') || (word[i - 1] == 'n')) {
                    count++;
                    flag[i] = 0;
                    flag[i - 1] = 0;
                }
            }
        }
    }

    for (int i = 0; i < word.length(); i++) {
        if (flag[i] == 1) {
            count++;
        }
    }

    cout << count << endl;

    delete(flag);

    return 0;
}