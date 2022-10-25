#include "header_document.h"

/** Default Constructor
 */
Document::Document() {}

/** Parameterized Constructor
 */
Document::Document(std::string _name, bool _availability, t_date _publication_date)
    : m_name(_name), m_availability(_availability), m_publication_date (_publication_date)
{}

/** Default Destructor
 */
Document::~Document() {}


/** Access m_name
 * \return The current value of m_name
 */
std::string Document::get_name() const
{
    return m_name;
}

/** Set m_name
 * \param val New value to set
 */
void Document::set_name(std::string val)
{
    if(val != "")
        m_name = val;
}


/** Access m_availability
 * \return The current value of m_availability
 */
bool Document::get_availability() const
{
    return m_availability;
}

/** Set m_availability
 * \param val New value to set
 */
void Document::set_availability(bool val)
{
    m_availability = val;
}


/** Access m_publication_date
 * \return The current value of m_publication_date
 */
t_date Document::get_publication_date() const
{
    return m_publication_date;
}

/** Set m_publication_date
 * \param val New value to set
 */
void Document::set_publication_date(t_date val)
{
    m_publication_date = val;
}
