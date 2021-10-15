#pragma once
#include <cstdint>

class rgba
{
    
public:
    rgba(uint8_t m_red, uint8_t m_green, uint8_t m_blue, uint8_t m_alpha)
        : m_red_(m_red),
          m_green_(m_green),
          m_blue_(m_blue),
          m_alpha_(m_alpha)
    {
    }

    void print_color() const;

private:
    uint8_t m_red_ {0};
    uint8_t m_green_ {0};
    uint8_t m_blue_ {0};
    uint8_t m_alpha_ {255};

    
};
