#include <iostream>
#include <map>
using namespace std;

int N, M;
string pokemon, info;
map<int, string> pokemonList1;
map<string, int> pokemonList2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int num = 1; num <= N; num++) {
        cin >> pokemon;
        pokemonList1.insert({ num, pokemon });    // (포켓몬 번호, 포켓몬 이름)의 맵 생성 
        pokemonList2.insert({ pokemon, num });    // (포켓몬 이름, 포켓몬 번호)의 맵 생성
    }

    for (int i = 0; i < M; i++) {
        cin >> info;
        
        if (isdigit(info[0])) {
            int key = stoi(info);
            auto result1 = pokemonList1.find(key);
            if (result1 != pokemonList1.end()) {
                cout << result1->second << '\n';    // 포켓몬 이름 출력
            }
        }
        else {
            auto result2 = pokemonList2.find(info);
            if (result2 != pokemonList2.end()) {
                cout << result2->second << '\n';    // 포켓몬 번호 출력
            }
        }
    }

    return 0;
}