#include "header_newspaper.h"

/** Default Constructor
 */
Newspaper::Newspaper():Document()
{}

/** Parameterized Constructor
 */
Newspaper::Newspaper(std::string _name, bool _availability, t_date _publication_date, int _article_number, std::vector<std::string> _autors_name)
    : Document(_name, _availability, _publication_date), m_article_number(_article_number),m_autors_name(_autors_name)
{}

/** Default Destructor
 */
Newspaper::~Newspaper() {}


/** Access m_article_number
 * \return The current value of m_article_number
 */
int Newspaper::get_article_number()
{
    return m_article_number;
}

/** Set m_article_number
 * \param val New value to set
 */
void Newspaper::set_article_number (int val)
{
    if(val >= 1)
        m_article_number = val;
}


/** Access precise m_autors_name
 * \return The current value of 1 m_autors_name
 */
std::string Newspaper::get_precise_autor_name(int i)
{
    if(i< (int) m_autors_name.size())
        return m_autors_name[i];
    else
        return NULL;
}

/** Access m_autors_name
 * \return The current value of m_autors_name
 */
std::vector<std::string> Newspaper::get_autors_name()
{
    return m_autors_name;
}

/** Set m_autors_name
 * \param val New value to set
 */
void Newspaper::set_autors_name (std::vector<std::string> val)
{
    m_autors_name = val;
}


/** Add an autor to the autors list
*/
void Newspaper::add_autor (std::string val)
{
    m_autors_name.push_back(val);
}


/** Display newspaper info function
 */
void Newspaper::display_data()
{
    std::cout << "Autor: ";

    for(int i=0; i< (int)m_autors_name.size(); i++)
    {
        std::cout << m_autors_name[i] << " ";
    }

    std::cout <<"\nTitle: " << m_name << "\tAvailable: " << m_availability << "\tDate: " << m_publication_date.day << "/" << m_publication_date.month << "/" << m_publication_date.year << "\t Number of articles: " << m_article_number << std::endl;
}

