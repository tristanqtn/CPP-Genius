#include "header.h"

///CONSTRUCTORS
//Default constructor
Car::Car()
    : m_production_year(0), m_oil_type(' '), m_matriculation("")
{
    //Nothing to do here
}

//Copy constructor
Car::Car(Car const& object_to_copy)
{
    m_matriculation = object_to_copy.get_matriculation();
    m_oil_type = object_to_copy.get_oil_type();
    m_production_year = object_to_copy.get_production_year();
}

//Overloaded constructor
Car:: Car(int _production_year, char _oil_type, string _matriculation)
    : m_production_year(_production_year), m_oil_type(_oil_type), m_matriculation(_matriculation)
{
    //Nothing to do here
}


///DESTRUCTOR
Car::~Car()
{
    //Nothing to do here
    //Free memory if the class is using aliases
}



///GETTERS
//used to get the private data out of an object
string Car::get_matriculation() const
{
    return m_matriculation;
}


char Car::get_oil_type() const
{
    return m_oil_type;
}


int Car::get_production_year() const
{
    return m_production_year;
}


///Setters
void Car::set_matriculation(string value)
{//IF and WHILE could be used to flege the value
    m_matriculation = value;
}

void Car::set_oil_type(char value)
{//IF and WHILE could be used to flege the value
    m_oil_type = value;
}

void Car::set_production_year(int value)
{//IF and WHILE could be used to flege the value
    m_production_year = value;
}
