#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cricketer {
private:
    string name;
    int age;
    int matchesPlayed;
    float avgRun;
public:
    void setName(const string& name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setMatchesPlayed(int matchesPlayed) {
        this->matchesPlayed = matchesPlayed;
    }
    void setAvgRun(float avgRun) {
        this->avgRun = avgRun;
    }

    string getName() const {
        return name;
    }
    int getAge() const {
        return age; 
    }
    int getMatchesPlayed() const {
        return matchesPlayed;
    }
    float getAvgRun() const {
        return avgRun;
    }

};

int main() {
    vector<Cricketer> players;

    for(int i = 0; i < 2; i++) {
        Cricketer player;
        string name;
        int age;
        int matches;
        float avg;

        cout << "Enter name " << i << ": ";
        getline(cin >> ws, name);
        player.setName(name);

        cout << "Enter age " << i << ": ";
        cin >> age;
        player.setAge(age);

        cout << "Enter matches " << i << ": ";
        cin >> matches;
        player.setMatchesPlayed(matches);

        cout << "Enter avg " << i << ": ";
        cin >> avg;
        player.setAvgRun(avg);

        players.push_back(player);
    }

    for(size_t i = 0; i < players.size(); i++) {
        cout << "Name: " << players[i].getName() << endl;
        cout << "Age: " << players[i].getAge() << endl;
        cout << "Average Runs: " << players[i].getAvgRun() << endl;
        cout << "Matches Played: " << players[i].getMatchesPlayed() << endl;
    }

    return 0;
}
