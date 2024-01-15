#include "header.h"

/**
************ DEQUE (double ended queue)
*
* DEFINTION :
*   non contiguous data in memory
*   fast adding in end and begin
*   vectors like
*   access by index
*
*
* COMPLEXITY :
*   O(1) : adding a cell at the end of queue
*   O(1) : deleting a cell at the end of the queue
*   O(1) : acces a cell
*   O(n) : looking for and element
*   O(n) : adding a value
*
**/

/**
*
* FUNCTIONS
*
* operator :    - index
*               - iterator
*               - myDeque.front()  acces value
*               - myDeque.back()   acces value
*               - myDeque.begin()   acces cell position
*               - myDeque.end()   acces cell position
*
* functions :   - myDeque.push_back()/push_front()  add a value in a new cell at the beginning/end of deque
*               - myDeque.pop_back()/pop_front()   delete last/first cell of deque
*               - myDeque.insert(iterator at the postion you want to insert before, value/range of value)  insert value or range of value in the middle of the array
*               - myDeque.erase(iterator at the position you want to delete)   delete a cell in the middle of the deque
*
*
**/

//DEQUE/////////////////////////////////////////////////////////
void container_deque()
{
    std::deque <float> myDeque (1000, 0);

    //adding values
    for(unsigned int i=0; i<1000; i++)
    {
        myDeque[i] = i;
    }

    //auto method
    for(const auto &elem : myDeque)
    {
        std::cout << elem << std::endl;
    }

}
////////////////////////////////////////////////////////////////
