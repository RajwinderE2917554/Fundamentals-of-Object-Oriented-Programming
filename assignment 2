//this project contains 2 different questions,
// 
//Use (#define QUE1) to run first question given in the assignment 
// 
//Use (#define QUE2) to run second question given in the assignment 
// 
//file made by Ayush Jain 2310997048

#define QUE2 //CHANGE THIS TO (QUE1 OR QUE2) TO TOGGLE BETWEEN PROJECTS.

#ifdef QUE1
#include <iostream>
#include <vector> // to store class objects in a smart object array (used in entry function, line number 69.)

//parent class
class Shape {
public:
    // deconstructor to free memmory to avoid memory leak; 
    virtual ~Shape() {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

//child class to shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

//child class to shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

//child class to shape
class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    double area() const override {
        double s = (sideA + sideB + sideC) / 2;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    double perimeter() const override {
        return sideA + sideB + sideC;
    }
};

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4, 5));
    shapes.push_back(new Triangle(3, 4, 5));

    for (Shape* shape : shapes) { //iterating over all the objects in our array. right now we have circle, rectangle, and triangle
        std::cout << "Area: " << shape->area() << ", Perimeter: " << shape->perimeter() << std::endl;
    }

    // Clean up to free up memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
#endif QUE1



#ifdef QUE2
#include <iostream>

class Vector2D {
private:
    float x, y;

public:
    // Constructor
    Vector2D(float x = 0.0, float y = 0.0) : x(x), y(y) {}

    friend Vector2D operator+(const Vector2D& v1, const Vector2D& v2);


    void display() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }
};

Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
    return Vector2D(v1.x + v2.x, v1.y + v2.y);
}

int main() {
    Vector2D vec1(1.0, 2.0), vec2(3.0, 4.0);
    Vector2D vec3 = vec1 + vec2; 

    std::cout << "vec1: ";
    vec1.display();
    std::cout << "vec2: ";
    vec2.display();
    std::cout << "vec3 (vec1 + vec2): ";
    vec3.display();

    return 0;
}
#endif  QUE2
