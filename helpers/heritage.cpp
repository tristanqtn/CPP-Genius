#include "header.h"

/**
*
************** HERITAGE
*
* heritage = kinship between two classes
* parent class = base class or superclass
* derived or daughter class = specialised class
*
* specialisation : going deep in the derived classes
* generalisation : going up to the parent class
*
* derived (daughter) class inherits attributes and methods of the parent class
*
**/

/**
*
************** ADVANTAGES
*
* code factorisation
* reusability
* modularity
* creation of standardised interfaces
*
*/

/**
*
************** EXAMPLE
*
* class : Person : name, age
*   class : Student : name, age, grades, ...
*   class : Employee : name, age, salary, competences, ...
*
* attributes "name" and "age" are shared with derived classes
* relation between classes "is a" : "this men is an employee -> heritage relation
*
**/

/**
*
************** MULTIPLE HERITAGE
*
* girl class inherited from several mother classes
* still inherits all the attributes and methods
*
***** MAJOR PROBLEMES
*
* diamon heritage
* constructors
* confusion over the name of the methods
*
**/
