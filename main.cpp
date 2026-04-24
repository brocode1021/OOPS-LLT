class Activity {
public:
    virtual string getMetric(double d, double t) = 0; // Abstraction
};

class Running : public Activity {
    string getMetric(double d, double t) override { return to_string(t/d) + " min/km"; }
};

class Cycling : public Activity {
    string getMetric(double d, double t) override { return to_string(d/(t/60)) + " km/h"; }
};
