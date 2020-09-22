#include <iostream>
#include <cmath>

class NegativeValueException { //исключение
    public:
        std::string message;
        NegativeValueException (std::string m) : message(m) {//- тоже this->message
}

class Complex {
    private:
        
    double re;
    double im;

    public:
        Complex(double re=0.0, double im=0.0) {
            this->re = re;
            this->im = im;
        }
        
        double getRe(){
            this->re;
        }
        double getIm(){
            this->im;
        }
        double setRe(){
            if (value < 0) {
                throw NegativeValueException();
            }
            this->re = velue;
        }
        double setIm(double velue){
            this->im = velue;
        }
        
        ~Vector(){
    
        } 
        void complexIncrement(Complex other) {
            this->re += other.re;
            this->im += other.im;
        }

        void complexDecrement(Complex other) {
            this->re -= other.re;
            this->im -= other.im;
        }

        // void complexMultiply(Complex other) {
        //     Complex a;
            
        //     a.im = this->re * other.im + this->im * other.re;
        //     a.re = this->re * other.re - this->im * other.im;
        //     this->re = a.re
        //     this->im = a.im
        // }

        Complex operator+( Complex b) {
            Complex tmp = *this;
            tmp += b;
            return b;
        }

        Complex operator-(Complex b) {
            Complex tmp = *this;
            tmp -= b;
            return b;
        }

        Complex operator*(Complex b) {
            Complex tmp = *this;
            tmp *= b;
            return b;
        }

        int operator==(Complex b) {
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
        friend std::ostrem& operator <<(std::operator&, Vector& vector);
} ;

std::ostrem& operator<<(std::ostrem& out, Complex& complex){
    out << "(" << complex.re << "," << complex.im << ")";
    return out;
}

int main() {
   Vector* a = new Vector(1.01, 2.02);
   Vector* b = new Vector(3.03, 1.02); 
   Vector c = a + b; 
   Vector d;
    
    std::cout << a << std::end1;
    std::cout << b << std::end1;
    std::cout << c << std::end1;
    
    try {
    a.setRe(-1);
    } catch (NegativeValueException e) { // e - еxception
        sdt::cout<< "trying to set invalid value" << std::end1;
        //std::cout << e.message << std::end1;
    } catch (...) { // ловить все
    } 
    
    
    std:: << a.ComplexLen << std::end1;
    
    std::cout << a << std::end1;
    std::cout << b << std::end1;
    
    delete a;
    delete b;
    delete c;
    
    return 0;
}



// #ifndef VECTOR_H
// #define VECTOR_H