class Workout {
protected:
    string type;
    double km, time;
public:
    Workout(string t, double k, double m) : type(t), km(k), time(m) {}
    virtual string calculateMetric() = 0; // Polymorphism: Pace vs Speed
};

class Running : public Workout {
    // Pace: Minutes per km
    string calculateMetric() override { return to_string(time/km) + " min/km"; }
};

class Cycling : public Workout {
    // Speed: km per hour
    string calculateMetric() override { return to_string(km/(time/60)) + " km/h"; }
};
