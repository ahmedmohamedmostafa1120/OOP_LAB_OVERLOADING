#include <iostream>

#include "../include/lib.hpp"
using namespace std;
using namespace liba;

class Complex
{
    private:
    int imag;
    int real;
    public:
        Complex()
{
     this->imag = 0;
     this->real = 0;
};
       Complex(int r, int i)
{
     this->imag = i;
     this->real = r;
};
     int  getReal(){
    return this->real;
};
     int getImag(){
    return this->imag;
}
;
     void log(){
    cout<<this->real<<" + "<<this->imag<<" j";

}
    int operator[](int index){
        if (index == 0){
           return  this->real;
        }else if( index ==1){
            return this-> imag;
        }
    }
    
    Complex operator+(Complex c2){
        Complex temp;
        temp.real = this->real + c2.real;
        temp.imag = this->imag + c2.imag;
        return temp;
    }
    Complex operator-(Complex c2){
        Complex temp;
        temp.real = this->real - c2.real;
        temp.imag = this->imag - c2.imag;
        return temp;
    }
    Complex operator*(Complex c2){
        Complex temp;
        temp.real = this->real * c2.real;
        temp.imag = this->imag * c2.imag;
        return temp;
    }
    Complex operator/(Complex c2){
        Complex temp;
        temp.real = this->real /c2.real;
        temp.imag = this->imag /c2.imag;
        return temp;
    }
    Complex& operator=(Complex c2){
        this->real = c2.real;
        this->imag = c2.imag;
        return *this;
    }   
    Complex& operator+=(Complex c2){
        this->real += c2.real;
        this->imag += c2.imag;
        return *this;
    }
    Complex& operator-=(Complex c2){
        this->real -= c2.real;
        this->imag -= c2.imag;
        return *this;
    }
    Complex& operator*=(Complex c2){
        this->real *=  c2.real;
        this->imag *= c2.imag;
        return *this;
    }
    Complex& operator/=(Complex c2){
        this->real /= c2.real;
        this->imag /= c2.imag;
        return *this;
    }
    Complex& operator++(){
        this->real++;
        this->imag++;
        return *this;
    }
    Complex& operator++(int){
        Complex temp = *this;
        this->real++;
        this->imag++;
        return temp;
    }
    Complex& operator--(){
        this->real--;
        this->imag--;
        return *this;
    }
    Complex operator--(int){
        Complex temp = *this;
        this->real--;
        this->imag--;
        return temp;
    }


friend istream & operator>>(istream &obj, Complex &c);

};

ostream & operator<<(ostream &obj,  Complex &c){
  return  obj<<c.getReal()<<c.getImag();
}
istream & operator>>(istream &obj, Complex &c){
    return obj>> c.real >> c.imag;
}
int main()
{
    Complex c1;
    cout<<c1.getImag()<<endl;
    Complex c2(0,-10);
    c2.log();
    cout<<c2<<" AHMED"<<endl;
    return 0;
}
