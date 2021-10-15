#include "Stack.h"
#include "Power.h"
#include "RGBA.h"

int main()
{
    stack main_stack;
    main_stack.reset();
    main_stack.print();
    
    main_stack.push(3);
    main_stack.push(7);
    main_stack.push(5);
    
    main_stack.print();
    
    main_stack.pop();
    main_stack.print();
    
    main_stack.pop();
    main_stack.pop();
    main_stack.print();

    return 0;
}
