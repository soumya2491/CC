#include <iostream>

float area(float* l , float* b);
float area(int* r);

float area(float* l , float* b){
    return (*l)*(*b);
}
float area(float* r){
    return 3.14*(*r)*(*r);
}
int main(void){
    std::string main;
    std::cin >> main;
    std::cout << main;
    float r,l,b;
    std::cin >> r;
    std::cin >> l;
    std::cin >> b;
   if (r && l && b)
   {
       std::cout << area(&r) << " " << area(&l,&b) << '\n';
    
   }
   else{
    return 1;
   }
    return 0;
}