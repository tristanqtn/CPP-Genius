#include "header_volume.h"

/** Default Constructor
 */
Volume::Volume():Document()
{}

/** Parameterized Constructor
 */
Volume::Volume(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type)
    : Document(_name, _availability, _publication_date), m_autor(_autor), m_type(_type)
{}

/** Default Destructor
 */
Volume::~Volume()
{}


/** Access m_autor
 * \return The current value of m_autor
 */
std::string Volume::get_autor() const
{
    return m_autor;
}

/** Set m_autor
 * \param val New value to set
 */
void Volume::set_autor(std::string val)
{
    m_autor = val;
}


/** Access m_type
 * \return The current value of m_type
 */
std::string Volume::get_type() const
{
    return m_type;
}

/** Set m_type
 * \param val New value to set
 */
void Volume::set_type(std::string val)
{
    m_type = val;
}


/** Display volume info function
 */
void Volume::display_data()
{
    std::cout << "Autor: " << m_autor << std::endl <<"Title: " << m_name << "\tAvailable: " << m_availability <<"\tDate: " << m_publication_date.day << "/" << m_publication_date.month << "/" << m_publication_date.year << "\tType: " << m_type << std::endl;
}
