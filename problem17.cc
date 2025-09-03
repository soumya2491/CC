#include <iostream>
float volume_cylinder(float r, float h){
    float result = 3.14*r*r*h;
    return result;
}
float volume_sphere(float r){
   float  result = 4/3.0 *3.14 *r*r*r;
   return result;
}
int main (void){
    float r;
    float h;
    std::cin >> r;
    std:: cin >> h;
    float result = volume_cylinder(r,h);
    float result2 = volume_sphere(r);
    std::cout << "volume of cylinder: " << result << '\n';
    std::cout << "volume of sphere: " << result2 << '\n';
}