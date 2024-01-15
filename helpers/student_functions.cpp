#include "header.h"

/**< OVERLOAD CONSTRUCTOR >**********************************************/
Student::Student(std::string _name, int _birthday_year, int _promo)
        :Person( _name, _birthday_year), m_promotion(_promo)
{}
/************************************************************************/


/**< DESTRUCTOR >********************************************************/
Student::~Student() {}
/************************************************************************/


/**< PROMOTION GETTER >**************************************************/
int Student::get_promotion() const {return (m_promotion);}
/************************************************************************/


/**< DISPLAY STUDENT INFO >**********************************************/
void Student::display() const
{
    Person::display();

    std::cout << "Promotion - " << m_promotion << std::endl;

    std::cout << "************** GRADES **************" << std::endl;
    if(m_grades.size()== 0)
    {
        std::cout << "No grades to display" << std::endl;
    }
    else
    {
        for(const auto& elem : m_grades)
        {
            std::cout << "Grades = " << elem << std::endl;
        }
    }
    std::cout << "************************************" << std::endl;
}
/************************************************************************/


/**< ADD GRADE TO STUDENT GRADES >***************************************/
bool Student::add_grade(float _grade)
{
    if(_grade >= 0 && _grade <= 20)
    {
        m_grades.push_back(_grade);
        return true;
    }
    else {return false;}
}
/************************************************************************/
