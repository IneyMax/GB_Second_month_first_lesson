#include "RGBA.h"

#include <iostream>

void rgba::print_color() const
{
    std::cout << m_red_ << " " << m_green_ << " " << m_blue_ << " " << m_alpha_ << "\n";
}
