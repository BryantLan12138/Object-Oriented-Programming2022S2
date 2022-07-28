#include <iostream>
#include <math.h>

int main() {
    std::cout << "Enter your number in base 10 : " << "\n"; 
    
    int base_10;
    std::cin >> base_10;
    
    int array[32];
    int rmd = base_10;
    
    int i = 0;
    
    while(base_10 > 0){
        
        rmd = base_10/2;
        array[i] = base_10%2;
        base_10 = rmd;
        
        i++;
        
        std::cout << base_10 << "\n";
    }
    
    for (int j = i-1; j > -1; j--){
        std::cout << array[j];
    }

    
    
}