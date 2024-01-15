#include "header.h"

/**< OVERLOAD CONSTRUCTOR >**********************************************/
Employee::Employee(std::string _name, int _birthday_year, int _salary)
         :Person(_name, _birthday_year), m_salary(_salary)
{}
/************************************************************************/


/**< DESTRUCTOR >********************************************************/
Employee::~Employee() {}
/************************************************************************/


/**< PROMOTION GETTER >**************************************************/
int Employee::get_salary() const {return (m_salary);}
/************************************************************************/


/**< DISPLAY EMPLOYEE INFO >**********************************************/
void Employee::display() const
{
    Person::display();

    std::cout << "Salary - " << m_salary << std::endl;

    std::cout << "************** Skills **************" << std::endl;
    if(m_skills.size()== 0)
    {
        std::cout << "No skills to display" << std::endl;
    }
    else
    {
        for(const auto& elem : m_skills)
        {
            std::cout << "Skill : " << elem << std::endl;
        }
    }
    std::cout << "************************************" << std::endl;
}
/************************************************************************/


/**< ADD SKILL TO EMPLYEE SKILLS LIST >**********************************/
void Employee::add_skills(std::string _skill)
{
        m_skills.push_back(_skill);
}
/************************************************************************/
