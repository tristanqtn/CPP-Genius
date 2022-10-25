#include "header_comic.h"

/** Default Constructor
 */
Comic::Comic() {}

/** Parameterized Constructor
 */
Comic::Comic(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type, std::string _cartoonist)
    :Volume(_name, _availability, _publication_date, _autor, _type), m_cartoonist(_cartoonist)
{}

/** Default Destructor
 */
Comic::~Comic(){}

/** Access m_cartoonist
 * \return The current value of m_cartoonist
 */
std::string Comic::get_cartoonist() const
{
    return m_cartoonist;
}

/** Set m_cartoonist
 * \param val New value to set
 */
void Comic::set_cartoonist(std::string val)
{
    m_cartoonist = val;
}


/** Display comics info function
 */
void Comic::display_info()
{
    Volume::display_data();
    std::cout << "Cartoonist: " << m_cartoonist << std::endl;
}
