#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int hp, int pts, int lvl) {
        playerName = name;
        health = hp;
        score = pts;
        level = lvl;
    }

    friend class GameManager;
};
class GameManager {
public:
    void displayPlayerDetails(const Player& p) {
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }
    void checkAliveStatus(const Player& p) {
        if (p.health > 0) {
            cout << p.playerName << " is Alive." << endl;
        } else {
            cout << p.playerName << " is Dead." << endl;
        }
    }
    void displayLevelAndScore(const Player& p) {
        cout << "Current Level: " << p.level << " | Current Score: " << p.score << endl;
    }
};

int main() {
    Player p1("KOHLI", 85, 10000, 5);
    GameManager manager;
    manager.displayPlayerDetails(p1);
    cout << endl;
    manager.checkAliveStatus(p1);
    manager.displayLevelAndScore(p1);
    return 0;
}
