#include <iostream>
using namespace std;
void increaseScores(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        *ptr += 10;
        ptr++;
    }
}
int main() {
    int n;
    cout << "Enter the number of players: ";
    cin >> n;
    int *scores = new int[n];
    cout << "Enter the scores of " << n << " players:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    cout << "Scores before update: ";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    increaseScores(scores, n);
    cout << "Scores after update: ";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    delete[] scores;
    return 0;
}
