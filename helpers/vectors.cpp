#include "header.h"

/**
************ VECTORS
*
* DEFINTION :
*   dynamic array, expandable to infinity
*   contiguous data in memory
*   all cells contain a value, no holes in the array
*   cells are accessed by index or iterator or auto
*   index begin at 0
*
*
* COMPLEXITY :
*   O(1) : adding a cell at the end of queue
*   O(1) : deleting a cell at the end of the queue
*   O(1) : acces a cell
*   O(n) : looking for and element
*
**/

/**
*
* FUNCTIONS
*
* operator :    - index
*               - iterator
*               - myVector.front()  acces value
*               - myVector.back()   acces value
*               - myVector.begin()   acces cell position
*               - myVector.end()   acces cell position
*
* functions :   - myVector.push_back()  add a value in a new cell at the end of vector
*               - myVector.pop_back()   delete last cell of vector
*               - myVector.insert(iterator at the postion you want to insert before, value/range of value)  insert value or range of value in the middle of the array
*               - myVector.erase(iterator at the position you want to delete)   delete a cell in the middle of the vector
*
*
**/



//VECTORS///////////////////////////////////////////////////////
void container_vector()
{

    //vector
    //std::vector <TYPE> NAME;
    std::vector <int> myVector;

    //iterators
    //std::vector <TYPE> ::iterator NAME;
    std::vector <int> ::iterator it;

    //adding values
    myVector.push_back(10);
    myVector.push_back(3);
    myVector.push_back(16);
    myVector.push_back(34);
    myVector.push_back(901);

    //browse in vector
    for(it = myVector.begin(); it != myVector.end(); it++)
    {//also works with an index
        std::cout << *it << std::endl;
    }

    std::cout << std::endl  << std::endl;

    //displaying values
    std::cout << "First value" << myVector.front() << std::endl;
    std::cout << "Last value" << myVector.back() << std::endl;
    std::cout << "Value at position 3 " << myVector[2] << std::endl;

    //erasing value
    myVector.erase(myVector.begin() + 2);

    //display new value
    std::cout << "Value at position 3 " << myVector[2] << std::endl << std::endl;

    std::cout << std::endl  << std::endl;

    //auto method
    for(auto elem : myVector)
    {
        std::cout << elem << std::endl;
    }
}
////////////////////////////////////////////////////////////////
