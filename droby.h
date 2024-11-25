#pragma once
class droby {
private:
    int numerator;
    int denominator; 

public:
    void setValues(int num, int denom); 
    void print();

    droby add(droby other);      
    droby subtract(droby other); 
    droby multiply(droby other); 
    droby divide(droby other); 
};
