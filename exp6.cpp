#include <iostream>
#include <cmath>

class Line {
private:
    int x1, y1, x2, y2;
    double slope, intercept;

public:
    Line() {}
    Line(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    void setLine(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    void calculateSlopeIntercept() {
        slope = static_cast<double>(y2 - y1) / (x2 - x1);
        intercept = y1 - slope * x1;
    }

    double getSlope() const {
        return slope;
    }

    double getIntercept() const {
        return intercept;
    }

    void drawLine() const {
        std::cout << "Drawing line from (" << x1 << ", " << y1 << ") to (" << x2 << ", " << y2 << ")" << std::endl;
    }
};

class Circle {
private:
    int centerX, centerY;
    int radius;
    double circumference;
    double area;

public:
    Circle() : centerX(0), centerY(0), radius(0), circumference(0), area(0) {}
    Circle(int cx, int cy) : centerX(cx), centerY(cy), radius(1), circumference(0), area(0) {}
    Circle(int cx, int cy, int r) : centerX(cx), centerY(cy), radius(r), circumference(0), area(0) {}

    void setCenter(int cx, int cy) {
        centerX = cx;
        centerY = cy;
    }

    void setRadius(int r) {
        radius = r;
    }

    int getCenterX() const {
        return centerX;
    }

    int getCenterY() const {
        return centerY;
    }

    int getRadius() const {
        return radius;
    }

    void calcArea() {
        area = M_PI * radius * radius;
    }

    double getArea() const {
        return area;
    }

    void calcCircumference() {
        circumference = 2 * M_PI * radius;
    }

    double getCircumference() const {
        return circumference;
    }

    bool isTangent(int x1, int x2, int y1, int y2) const {
        // Implementation for checking tangent between a line and the circle
        // Return true if tangent, false otherwise
        return false;
    }

    bool isTangent(int slope, int intercept) const {
        // Implementation for checking tangent between a line and the circle
        // Return true if tangent, false otherwise
        return false;
    }

    bool isTangent(Line tl) const {
        // Implementation for checking tangent between a line and the circle
        // Return true if tangent, false otherwise
        return false;
    }

    void draw() const {
        std::cout << "Drawing circle at (" << centerX << ", " << centerY << ") with radius " << radius << std::endl;
    }
};

int main() {
    Circle circle1(3, 4, 5);
    Line line1(1, 1, 8, 8);

    circle1.draw();
    line1.drawLine();

    return 0;
}
