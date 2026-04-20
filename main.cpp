#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// 1. ABSTRACTION
class Workout {
protected:
    string name;
    int duration;
    string date;
public:
    Workout(string n, int d, string dt) : name(n), duration(d), date(dt) {}
    virtual string calculateCalories() = 0; // Pure virtual
    virtual string getIcon() = 0;
    virtual string getType() = 0;
    string getName() { return name; }
    string getDate() { return date; }
    int getDuration() { return duration; }
    virtual ~Workout() {}
};

// 2. INHERITANCE
class Cardio : public Workout {
public:
    Cardio(string n, int d, string dt) : Workout(n, d, dt) {}
    // 3. POLYMORPHISM
    string calculateCalories() override { return to_string(duration * 10); }
    string getIcon() override { return "🏃"; }
    string getType() override { return "cardio"; }
};

class Strength : public Workout {
public:
    Strength(string n, int d, string dt) : Workout(n, d, dt) {}
    // 3. POLYMORPHISM
    string calculateCalories() override { return to_string(duration * 7); }
    string getIcon() override { return "🏋️"; }
    string getType() override { return "strength"; }
};

// 4. ENCAPSULATION
class FitnessSite {
private:
    vector<Workout*> logs;
public:
    void addWorkout(Workout* w) { logs.push_back(w); }

    void generate() {
        ofstream file("index.html");
        
        // CSS Style
        file << "<html><head><style>";
        file << "body { font-family: sans-serif; background: #f0f2f5; padding: 40px; }";
        file << ".container { display: flex; gap: 20px; flex-wrap: wrap; }";
        file << ".card { background: white; padding: 20px; border-radius: 12px; width: 220px; box-shadow: 0 4px 10px rgba(0,0,0,0.1); border-top: 8px solid; }";
        file << ".cardio { border-color: #3498db; } .strength { border-color: #e74c3c; }";
        file << "h1 { color: #2c3e50; } .cal { color: #27ae60; font-weight: bold; }";
        file << "</style></head><body>";

        file << "<h1>My Fitness Tracker</h1><div class='container'>";

        // This loop generates a card for each workout
        for (Workout* w : logs) {
            file << "<div class='card " << w->getType() << "'>";
            file << "<h1>" << w->getIcon() << "</h1>";
            file << "<h3>" << w->getName() << "</h3>";
            file << "<p>Date: " << w->getDate() << "</p>";
            file << "<p>Duration: " << w->getDuration() << " mins</p>";
            file << "<p class='cal'>Calori
