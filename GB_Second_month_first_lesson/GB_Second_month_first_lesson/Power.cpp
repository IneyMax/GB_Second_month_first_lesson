#include "Power.h"

#include <iostream>

void power::set_numbers(const double first_number, const double second_number)
{
    first_number_ = first_number;
    second_number_ = second_number;
}

void power::calculate_pow() const
{
    std::cout << pow(first_number_, second_number_) << "\n";
}
