#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // Chess Pieces
    // King  : 1     Queen : 1
    // Rook : 2      Bishop : 2
    // Knight : 2    Pawn : 8
    int pieces[6] = { 1, 1, 2, 2, 2, 8 }, input[6];

    for (int i = 0; i < 6; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 6; i++) {   
        cout << pieces[i] - input[i] << " ";
    }

    return 0;
}