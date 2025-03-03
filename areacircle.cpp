/*Program in cpp to create a class with name area , default constructor of class which set radius value 5 , and function() with name calculate() , this function will calculate the area of circle , finally create a destructor to free the memeory of used variable*/
#include <iostream>
using namespace std;
class Area {
private:
    int radius;
    float res;

public:
    Area() {
        radius = 5;
    }
    float calculate() {
        res = 3.14159 * radius * radius;
        return res; 
    }
    ~Area() {
        cout << "\nDestructor called" << endl;
    }
};
int main() {
    Area circle;  // Object of class Area
    cout << "Area of the circle: " << circle.calculate() << " square units" << endl;
    return 0;
}


