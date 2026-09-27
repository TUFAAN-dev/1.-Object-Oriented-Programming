#include <iostream>
using namespace std;

class Vector {
public:
      double x, y, z;

      Vector(double x, double y, double z) : x(x), y(y), z(z) {}

      // 1. Overloading the '*' symbol for Scalar (Dot) Product
      // Returns a single number (double)
      double operator*(const Vector& other) const {
            return (this->x * other.x) + (this->y * other.y) + (this->z * other.z);
      }

      // 2. Overloading the '%' symbol for Vector (Cross) Product
      // Returns a new Vector
      Vector operator%(const Vector& other) const {
            return Vector(
                  (this->y * other.z) - (this->z * other.y),
                  (this->z * other.x) - (this->x * other.z),
                  (this->x * other.y) - (this->y * other.x)
            );
      }

      void print() const {
            std::cout << "(" << x << ", " << y << ", " << z << ")\n";
      }
};

int main() {
      Vector v1(1.0, 2.0, 3.0);
      Vector v2(4.0, 5.0, 6.0);

      // Using '*' for Scalar Product
      double dotProduct = v1 * v2; 
      std::cout << "Scalar (Dot) Product: " << dotProduct << "\n";

      // Using '%' for Vector Cross Product
      Vector crossProduct = v1 % v2; 
      std::cout << "Vector (Cross) Product: ";
      crossProduct.print();

      return 0;
}
