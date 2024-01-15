#include "header.h"

/**
************ LISTS
*
* DEFINTION :
*   list linked doubly, expandable to infinity
*   non contiguous data in memory
*   eeasy and fast insertion
*   only acces by iterator
*
* COMPLEXITY :
*   O(1) : adding a cell at the beginning/end of queue
*   O(1) : deleting a cell at the end of the queue
*   O(i) : acces a cell at the index i
*   O(n) : looking for and element
*   O(1) : add a value in the middle of the list
*
**/

/**
*
* FUNCTIONS
*
* operator :    - index
*               - iterator
*               - myList.front()  acces value
*               - myList.back()   acces value
*               - myList.begin()   acces cell position
*               - myList.end()   acces cell position
*
* functions :   - myList.push_back()  add a value in a new cell at the end of vector
*               - myList.pop_back()   delete last cell of vector
*               - myList.insert(iterator at the postion you want to insert before, value/range of value)  insert value or range of value in the middle of the array
*               - myList.erase(iterator at the position you want to delete)   delete a cell in the middle of the vector
*
*
**/



//VECTORS///////////////////////////////////////////////////////
void container_list()
{

    //vector
    //std::list <TYPE> NAME;
    std::list <int> myList;

    //adding values
    for(unsigned int i=0; i<1000; ++i)
    {
        myList.push_back(i);
    }

    //auto method
    for(const auto &elem : myList)
    {
        std::cout << elem << std::endl;
    }
}
////////////////////////////////////////////////////////////////
