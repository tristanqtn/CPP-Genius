#include "header.h"


/**
*
**************** REFERENCES AND ALIASES
*
* symbol : '&', placed after the type definition of a data
* alias = reference when the data used is an object
* work as an hiden pointer
* must be initialised
*
**/

/**
*
**************** USE
*
* used for parameter data communication between functions (replace adress data communication)
* used to transfer object via parameter, often used with reserved word : const
*
**/

/**
*
**************** ADVANTAGES
*
* avoid using allocation and desallocation in memory
* avoid memory leaks
* avoid recopying objects and data : faster programm
* guarantees that the object will be initialised
*
**/



//EXEMPLE_1/////////////////////////////////////////////////////
/** Fake main
*int main ()
*{
*    int x = 50, y = 3;
*    std::cout << "x = " << x << "y = " << y <<std::endl;
*    exemple_1(x, y);
*    std::cout << "x = " << x << "y = " << y <<std::endl;
*}
**/

void exemple_1(int& value_1, int& value_2)
{
    int tempo = 0;

    tempo = value_1;
    value_1 = value_2;
    value_2 = tempo;
}
////////////////////////////////////////////////////////////////


//EXEMPLE_2/////////////////////////////////////////////////////
/**
*void exemple_2 (myClass& myObject)
*{
*    myObject.setValue(1500);
*}
**/
////////////////////////////////////////////////////////////////

