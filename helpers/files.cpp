#include "header.h"

/**
************ STACKS (LIFO : Last In First Out)
*
* DEFINTION :
*   non contiguous data in memory
*   2 operations authorized (stack/unstack)
*   only access to the top of the file
*   access by index
*   no browsing possible in stacks
*
**/

/**
*
* FUNCTIONS
*
* data accessor :    - myStack.top()
*
* functions :   - myStack.push() add a value in a new cell at the top of the stack
*               - myStack.pop()  delete top cell of vector
*
**/

//STACK///////////////////////////////////////////////////////
void container_stack ()
{
    //std::stack <TYPE> NAME;
    std::stack <int> myStack;

    for(int i=1; i<=10; i++)
    {
        myStack.push(i);
    }

    std::cout << "Top - " << myStack.top() << std::endl;

    myStack.pop();

    std::cout << "New top - " << myStack.top() << std::endl;

    for(int i=1; i<=9; i++)
    {
        myStack.pop();
    }

    if(myStack.empty())
            std::cout << "Stack empty !" <<std::endl;
    else
            std::cout << "Left " << myStack.size() << "elem" << std::endl;

}
////////////////////////////////////////////////////////////////
