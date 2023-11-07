#include <iostream>
#include <cmath>

void triangulos(){
    int a, v, num;
    for(a=0;a<20;a++){
        for (v=0;v<20;v++) {
            num = sqrt(a*a + v*v);
            if(a^2 + v^2 == num^2){
                if(a == 3 && v == 4){
                    std::cout << a << "-" << v << "-" << num <<std::endl;
                }
                if(a == 6 && v == 8){
                    std::cout << a << "-" << v << "-" << num <<std::endl;
                }
                if(a == 5 && v == 12){
                    std::cout << a << "-" << v << "-" << num <<std::endl;
                }
                if(a == 8 && v == 15){
                    std::cout << a << "-" << v << "-" << num <<std::endl;
                }
            }
        }
    }
}
int main(){
    triangulos();
}