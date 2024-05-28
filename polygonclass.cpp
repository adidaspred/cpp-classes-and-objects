#include <iostream>

using namespace std;

// Abstract class Shape
class Shape {
public:
  virtual double area() = 0; // Abstract method (pure virtual function)
  virtual void printInfo() = 0; // Abstract method
};

// Circle class inheriting from Shape
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double radius) {
    this->radius = radius;
  }

  double area() override {
    return 3.14 * radius * radius;
  }

  void printInfo() override {
    cout << "Circle with radius: " << radius << endl;
  }
};

// Rectangle class inheriting from Shape
class Rectangle : public Shape {
private:
  double length;
  double width;

public:
  Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
  }

  double area() override {
    return length * width;
  }

  void printInfo() override {
    cout << "Rectangle with length: " << length << " and width: " << width << endl;
  }
};

int main() {
  // Create circle and rectangle objects
  Circle circle(5);
  Rectangle rectangle(4, 6);

  // Array of pointers to Shape objects (polymorphism)
  Shape* shapes[2];
  shapes[0] = &circle;
  shapes[1] = &rectangle;

  // Call area() and printInfo() through pointers (polymorphic behavior)
  for (int i = 0; i < 2; i++) {
    cout << shapes[i]->area() << endl;
    shapes[i]->printInfo();
  }

  return 0;
}
