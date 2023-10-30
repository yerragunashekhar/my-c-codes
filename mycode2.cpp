#include <iostream>

class DB; // Forward declaration of DB class

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m, int cm) : meters(m), centimeters(cm) {}

    void display() const {
        std::cout << "Distance: " << meters << " meters and " << centimeters << " centimeters\n";
    }

    friend DM addDistance(const DM& dm, const DB& db);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft, int in) : feet(ft), inches(in) {}

    void display() const {
        std::cout << "Distance: " << feet << " feet and " << inches << " inches\n";
    }

    friend DM addDistance(const DM& dm, const DB& db);
};

DM addDistance(const DM& dm, const DB& db) {
    int totalCentimeters = dm.meters * 100 + dm.centimeters; // Convert DM to centimeters
    totalCentimeters += (db.feet * 12 + db.inches) * 2.54; // Convert DB to centimeters

    int meters = totalCentimeters / 100;
    int centimeters = totalCentimeters % 100;

    return DM(meters, centimeters);
}

int main() {
    DM dm(5, 75); // 5 meters and 75 centimeters
    DB db(16, 8); // 16 feet and 8 inches

    std::cout << "DM Object:\n";
    dm.display();

    std::cout << "\nDB Object:\n";
    db.display();

    DM result = addDistance(dm, db);

    std::cout << "\nResult after addition:\n";
    result.display();

    return 0;
}

