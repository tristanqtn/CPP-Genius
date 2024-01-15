#include "header.h"

/**
************ MAP
*
* DEFINTION :
*   keys linked to values
*   non contiguous data in memory
*   unic value, no doubles
*   associative container
*
*
* COMPLEXITY :
*   O(log(n)) : adding a cell in the map
*   O(1) : deleting a cell using position
*   O(log(n)) : deleting a cell using value
*   O(log(n)) : looking for and element
*
**/

/**
*
* FUNCTIONS
*
* mySet.find()  returns an iterator add a value in a new cell at the end of map
* mySet.count()     returns 1 or 0 if the value is the value exist in the map
* mySet.insert(iterator at the postion you want to insert before, value/range of value)  insert value or range of value in the middle of the array
* mySet.erase(iterator at the position you want to delete)   delete a cell in the middle of the map
*
**/

//FUNCTION//////////////////////////////////////////////////////
void container_map ()
{
    //std::map <first TYPE, second TYPE> NAME;
    std::map <int, std::string> myMap;

    for(unsigned int i=0; i<100; i++)
    {
        std::ostringstream oss;
        oss << "Hello #" <<i;
        myMap[i] = oss.str();

    }

    for(const auto& elem : myMap)
    {
        std::cout << elem.first << "=>" << elem.second << std::endl;
    }

    auto it = myMap.find(500);
    if(it != myMap.end())
    {
            std::cout << "Key 500 has been found and value equals : " << it->second << std::endl;
    }
    else
    {
        std::cout << "Key 500 not found ! " << std::endl;
    }
}
////////////////////////////////////////////////////////////////
