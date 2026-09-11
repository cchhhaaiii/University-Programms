#include <iostream>
using namespace std;

// STEP 1: Define the blueprint for our structure
struct Player {
    string name;
    int health;
    double speed;
}; 

int main() {
    // STEP 2: Create a player variable using the blueprint and fill it with data
    Player hero;
    hero.name = "Arthur";
    hero.health = 100;
    hero.speed = 5.5;

    // STEP 3: Print the initial stats
    cout << "--- Game Start ---" << endl;
    cout << "Character Name: " << hero.name << endl;
    cout << "Starting Health: " << hero.health << endl;
    cout << "Movement Speed: " << hero.speed << endl;

    // STEP 4: Modify the data inside the struct (Simulation: Player takes damage)
    cout << "\n[!] A wild monster attacks " << hero.name << " for 30 damage!" << endl;
    hero.health = hero.health - 30; // Modifying the health variable inside the struct

    // STEP 5: Print the updated stats
    cout << "\n--- Updated Stats ---" << endl;
    cout << "Current Health: " << hero.health << endl;

    return 0;
}