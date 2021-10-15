#pragma once

class power
{
    double first_number_ {0};
    double second_number_ {0};

public:
    void set_numbers (double first_number, double second_number);
    void calculate_pow () const;
};
