#include <iostream>
using namespace std;

class Distance {
int meters;
public:
Distance(int m) : meters(m) {}
Distance operator+(Distance d) {
return Distance(meters + d.meters);
}
void display() {
cout << "Distance: " << meters << " meters" << endl;
}
};
int main() {
Distance d1(5), d2(10), d3(0);
d3 = d1 + d2;
d3.display();
return 0;
}