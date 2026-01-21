#include <iostream>
#include <string>
using namespace std;

class GitHubUser {
private:
    string username;
    int nrRepo;
    string bio;
    int contributions;
    int followers;
    int following;

public:
    GitHubUser() {
        username = "anonim";
        nrRepo = 0;
        bio = "Nu exista bio";
        contributions = 0;
        followers = 0;
        following = 0;
    }

    GitHubUser(string u, int r, string b, int c, int f1, int f2) {
        username = u;
        nrRepo = r;
        bio = b;
        contributions = c;
        followers = f1;
        following = f2;
    }

    GitHubUser(const GitHubUser &obj) {
        username = obj.username;
        nrRepo = obj.nrRepo;
        bio = obj.bio;
        contributions = obj.contributions;
        followers = obj.followers;
        following = obj.following;
    }

    ~GitHubUser() {
        cout << "Obiect GitHubUser distrus: " << username << endl;
    }

    void setUsername(string u) { 
        username = u; 
    }
    void setNrRepo(int r) { 
        nrRepo = r; 
    }
    void setBio(string b) { 
        bio = b; 
    }
    void setContributions(int c) { 
        contributions = c; 
    }
    void setFollowers(int f) { 
        followers = f; 
    }
    void setFollowing(int f) { 
        following = f; 
    }

    string getUsername() { 
        return username; 
    }
    int getNrRepo() { 
        return nrRepo; 
    }
    string getBio() { 
        return bio; 
    }
    int getContributions() { 
        return contributions; 
    }
    int getFollowers() { 
        return followers; 
    }
    int getFollowing() { 
        return following; 
    }

    void changeUsername() {
        username = "CulbidaMihail"; 
    }
    void addFollower() { 
        followers += 13; 
    }
    void addFollowing() { 
        following += 6; 
    }
    void addRepo() { 
        nrRepo++; 
    }
    void makeContribution(int c) { 
        contributions += c; 
    }
    void showInfo() {
        cout << "Username: " << username << endl;
        cout << "Nr. de repo: " << nrRepo << endl;
        cout << "Bio: " << bio << endl;
        cout << "Contributii: " << contributions << endl;
        cout << "Followeri: " << followers << endl;
        cout << "Following: " << following << endl;
        cout << endl;
    }
};

int main() {

    GitHubUser user1;
    user1.showInfo();

    GitHubUser user2("MihaiCulbida", 13, "C++ Programmer", 196, 4, 3);
    user2.showInfo();

    user2.changeUsername();
    user2.addFollower();
    user2.addFollowing(); 
    user2.addRepo();
    user2.makeContribution(4);
    user2.showInfo();

    GitHubUser user3(user2);
    user3.setUsername("cloneUser");
    user3.showInfo();

    return 0;
}
