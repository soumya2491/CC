#include <iostream>
float area(float s);
float area(float s){
    return s*s*3.14;
}
float area_cylinder (float i, float h){
    float so = i+h;
    return 2*3.14*i*so;
}
int main(void){
    float s;
    float h;
    std::cin >> s;
    std::cin >> h;
    std::cout << "area of circle : "<<  area(s) << '\n';
    std::cout << "area of cylinder: " << area_cylinder(s,h) << '\n';
    return 0;
}