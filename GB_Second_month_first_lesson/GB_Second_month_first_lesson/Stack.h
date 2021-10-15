#pragma once
#include <array>


/*
 *private-массив целых чисел длиной 10;
 *private целочисленное значение для отслеживания длины стека;
*/

class stack
{
private:
    
std::array<int, 10> stack_array_ {};
int stack_lenght_ {0};

public:
    void reset();
    bool push(int value);
    int pop();
    void print();
};