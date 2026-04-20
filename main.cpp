#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. ABSTRACTION
class Workout {
protected:
    string name;
    int duration;
public:
    Workout(string n, int d) : name(n), duration(d) {} // CONSTRUCTOR
    virtual string getHtmlCard() = 0; // Pure Virtual Function
    virtual ~Workout() {}
};

// 2. INHERITANCE
class Cardio : public Workout {
    float distance;
public:
    Cardio(string n, int d, float dist) : Workout(n, d), distance(dist) {}
    
    // 3. POLYMORPHISM
    string getHtmlCard() override {
        return "<div class='card cardio'><h3>🏃 " + name + "</h3>" +
               "<p>Duration: " + to_string(duration) + "m</p>" +
               "<p>Distance: " + to_string((int)distance) + "km</p></div>";
    }
};

class Strength : public Workout {
    int weight;
public:
    Strength(string n, int d, int w) : Workout(n, d), weight(w) {}
    
    // 3. POLYMORPHISM
    string getHtmlCard() override {
        return "<div class='card strength'><h3>🏋️ " + name + "</h3>" +
               "<p>Duration: " + to_string(duration) + "m</p>" +
               "<p>Weight: " + to_string(weight) + "kg</p></div>";
    }
};

int main() {
    // This logic generates the HTML below
    return 0;
}
