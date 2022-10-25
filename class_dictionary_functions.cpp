#include "header_dictionary.h"

/** Default Constructor
 */
Dictionary::Dictionary() {}

/** Parameterized Constructor
 */
Dictionary::Dictionary(std::string _name, bool _availability, t_date _publication_date, int _article_number, std::vector<std::string> _autors_name)
    : Newspaper(_name, _availability, _publication_date, _article_number, _autors_name), Volume(_name, _availability, _publication_date, " ", "Dictionary")
{}

/** Default Destructor
 */
Dictionary::~Dictionary() {}

/** Display dictionary info function
 */
void Dictionary::display_data_dictionary()
{//specific function needed to avoid the deadly diamond of death
    std::cout << "Autors: ";

    for(int i=0; i< (int)m_autors_name.size(); i++)
    {
        std::cout << m_autors_name[i] << " ";
    }

    std::cout <<"\nTitle: " << Newspaper::m_name << "\tAvailable: " << Newspaper::m_availability << "\tDate: " << Newspaper::m_publication_date.day << "/" << Newspaper::m_publication_date.month << "/" << Newspaper::m_publication_date.year << "\tNumber of definitions: " << m_article_number << "\tType: "<< m_type << std::endl;

}
