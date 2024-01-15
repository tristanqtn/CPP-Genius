#include "header.h"

/**< OVERLOAD CONSTRUCTOR >**********************************************/
Person::Person(std::string _name, int _birthday_year)
       : m_name(_name), m_birthday_year(_birthday_year)
{
    m_age = 2021 - m_birthday_year;
}
/************************************************************************/


/**< DESTRUCTOR >********************************************************/
Person::~Person() {}
/************************************************************************/


/**< NAME GETTER >*******************************************************/
std::string Person::get_name() const {return m_name;}
/************************************************************************/


/**< BIRTHDAY YEAR GETTER >**********************************************/
int Person::get_birthday_year() const {return m_birthday_year;}
/************************************************************************/


/**< AGE GETTER >*******************************************************/
int Person::get_age() const {return m_age;}
/************************************************************************/


/**< DISPLAY >***********************************************************/
void Person::display() const
{
    std::cout << "Name : " << get_name() << std::endl;
    std::cout << "Age : " << get_age() << std::endl;
    std::cout << "Birthday year : " << get_birthday_year() << std::endl;
}
/************************************************************************/
