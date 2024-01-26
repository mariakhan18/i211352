#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double X, double Y) : x(X), y(Y) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    double distance(const Point& otherPoint) const {
        double deltaX = x - otherPoint.getX();
        double deltaY = y - otherPoint.getY();
        return sqrt(deltaX * deltaX + deltaY * deltaY);
    }
};

int main() {
    double x1, y1;
    cout << "Enter x coordinate for Point 1: ";
    cin >> x1;
    cout << "Enter y coordinate for Point 1: ";
    cin >> y1;

    Point point1(x1, y1);

    double x2, y2;
    cout << "Enter x coordinate for Point 2: ";
    cin >> x2;
    cout << "Enter y coordinate for Point 2: ";
    cin >> y2;

    Point point2(x2, y2);

    cout << "Point 1 coordinates: (" << point1.getX() << ", " << point1.getY() << ")\n";
    cout << "Point 2 coordinates: (" << point2.getX() << ", " << point2.getY() << ")\n";

    double distanceBetweenPoints = point1.distance(point2);
    cout << "Distance between points: " << distanceBetweenPoints << std::endl;

    return 0;
}
