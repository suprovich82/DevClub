#include <iostream>
#include <cmath>

class Complex {
    double re;
    double im;

public:
    
    void complexIncrement(Complex other) {
        this->re += other.re;
        this->im += other.im;
    }

    void complexDecrement(Complex other) {
        this->re -= other.re;
        this->im -= other.im;
    }

    void complexMultiply(Complex other) {
        Complex a;
        
        a.im = this->re * other.im + this->im * other.re;
        a.re = this->re * other.re - this->im * other.im;
        this->re = a.re
        this->im = a.im
    }

    Complex complexSum( Complex b) {
        *this->complexIncrement(b);
            
        return *this;
    }

    Complex complexDiff(Complex a, Complex b) {
        Complex diff = a;
        
        complexDecrement(&diff, b);
        return diff;
    }

    Complex complexProduct(Complex a, Complex b) {
        Complex product = a;
        
        complexMultiply(&product, b);
        return product;
    }

    int complexEqual(Complex b) {
        return this->re == b.re && this->im == b.im;
    }

    double complexAbs(Complex this) {
        return hypot(this->re, this->im);
    }

    void complexPrint() {
        if ( this->im < 0 ) {
            printf("%g %gi", this->re, this->im);
        } else {
            printf("%g + %gi", this->re, this->im);
        }
    }
} ;

int main() {
    int number, basis;
    
    scanf("%d%d", &number, &basis);
    
   

    return 0;
}


// double getX(){
//     return this->x;
// }
// double getY(){
//     return this->y;
// }

// double setY(double velue){
//     return this->y = velue;
// }
//  double setX(){
//     return this->x = velue;

// ~Vector(){ - 
    
//}