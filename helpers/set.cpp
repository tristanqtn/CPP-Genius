#include "header.h"

/**
************ SET
*
* DEFINTION :
*   keys linked to values
*   non contiguous data in memory
*   elements sorted
*   binary tree of research
*   associative container
*
*
* COMPLEXITY :
*   O(log(n)) : adding a cell in the tree
*   O(1) : deleting a cell using position
*   O(log(n)) : deleting a cell using value
*   O(log(n)) : looking for and element
*   O(1) : add a value in the middle of the list
*
**/

/**
*
* FUNCTIONS
*
* mySet.find()  returns an iterator add a value in a new cell at the end of vector
* mySet.count()     returns 1 or 0 if the value is the value exist in the tree
* mySet.insert(iterator at the postion you want to insert before, value/range of value)  insert value or range of value in the middle of the array
* mySet.erase(iterator at the position you want to delete)   delete a cell in the middle of the vector
*
*
**/

//SET///////////////////////////////////////////////////////////
void container_set()
{

    //std::set <TYPE> NAME;
    std::set <float> mySet;

    //adding values
    for(unsigned int i=0; i<1000; i++)
    {
        mySet.insert(0);
    }

    //auto method
    for(const auto &elem : mySet)
    {
        std::cout << elem << std::endl;
    }

    if(mySet.find(500) != mySet.end())
    {
        std::cout << "Value 500 has been found ! " << std::endl;
    }
    else
    {
        std::cout << "Value 500 not found ! " << std::endl;
    }
}
////////////////////////////////////////////////////////////////
