#include <iostream>
#include <string>

using namespace std;

struct Point {
  double x, y, z;

  Point(double x, double y, double z) : x(x), y(y), z(z) {}

  void print() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
  }
};

class Triangle {
private:
  Point v1, v2, v3;

public:
  Triangle(const Point& p1, const Point& p2, const Point& p3) : v1(p1), v2(p2), v3(p3) {}

  double calculateArea() const {
    Point edge1 = v2 - v1;
    Point edge2 = v3 - v1;

    double base = edge1.x;
    double height = edge2.y; 
    double area = 0.5 * base * height;

    return area;
  }

  void printVertices() const {
    cout << "Triangle vertices:" << endl;
    v1.print();
    v2.print();
    v3.print();
  }
};

int main() {
  Point p1(1.0, 2.0, 0.0);
  Point p2(3.0, 4.0, 0.0);
  Point p3(5.0, 2.0, 0.0);

  Triangle triangle(p1, p2, p3);

  triangle.printVertices();

  double area = triangle.calculateArea();
  cout << "Triangle area: " << area << endl;

  return 0;
}