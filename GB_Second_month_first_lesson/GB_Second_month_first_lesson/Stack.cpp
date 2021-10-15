#include "Stack.h"

#include <iostream>

void stack::reset()
{
    stack_lenght_ = 0;
    for (auto &element : stack_array_)
    {
        element = 0;
    }
}

bool stack::push(const int value)
{
    if (stack_lenght_ + 1 <= stack_array_.size())
    {
        stack_array_[stack_lenght_] = value;
        stack_lenght_++ ;
        return true;
    }
    return false;
}

int stack::pop()
{
    if (stack_lenght_ - 1 < 0)
    {
        std::cout << "Stack is empty!!!";
        return 0;
    }
    else
        return stack_array_[--stack_lenght_];
}

void stack::print()
{
    std::cout << "( ";
    int index {};
    while (index < stack_lenght_)
    {
        std::cout << stack_array_[index] << " ";
        index ++;
    }
    std::cout << ")\n";
}
