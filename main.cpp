#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1. ABSTRACTION: Interface for anything that has a 'pace'
class IPaceCalculatable {
public:
    virtual double calculatePace() = 0; 
};

// 2. BASE CLASS (Encapsulation & Constructors)
class Workout : public IPaceCalculatable {
protected:
    string name;
    double duration; // minutes

public:
    Workout(string n, double d) : name(n), duration(d) {}
    virtual string getType() = 0; 
    virtual ~Workout() {}
};

// 3. INHERITANCE & POLYMORPHISM
class Running : public Workout {
private:
    double distance; // km
public:
    Running(string n, double d, double dist) : Workout(n, d), distance(dist) {}

    // Specific Polymorphic Implementation
    double calculatePace() override {
        return duration / distance; // Minutes per km
    }

    string getType() override { return "Cardio"; }
};

int main() {
    // This logic is mirrored in the JavaScript for the web version
    return 0;
}
