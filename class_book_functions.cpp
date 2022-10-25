#include "header_book.h"

/** Default Constructor
 */
Book::Book() {}

/** Modified Constructor
 */
Book::Book(const Book& to_copy, t_date _publication_date)
{
    m_name = to_copy.get_name();
    m_autor = to_copy.get_autor();
    m_availability= to_copy.get_availability();
    m_type= to_copy.get_type();
    m_publication_date = _publication_date;
    m_page_number= to_copy.get_page_number();
}

/** Parameterized Constructor
 */
Book::Book(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type, int page_number)
    : Volume(_name, _availability, _publication_date, _autor, _type), m_page_number(page_number)
{}

/** Default Destructor
 */
Book::~Book() {}

/** Access m_page_number
 * \return The current value of m_page_number
 */
int Book::get_page_number() const
{
    return m_page_number;
}

/** Set m_page_number
 * \param val New value to set
 */
void Book::set_page_number(int val)
{
    if(val>0)
        m_page_number = val;
}


/** Display book info function
 */
void Book::display_info()
{
    Volume::display_data();
    std::cout << "Page number: " << m_page_number << std::endl;
}


bool Book::operator == (Book a)
{
    if((Book::m_autor == a.get_autor()) && (Book::m_availability== a.get_availability()) && (Book::m_name== a.get_name()) && (Book::m_page_number == a.get_page_number()) && (Book::m_type == a.get_type()))
        return true;
    else
        return false;

}

Book Book::operator + (Book a)
{
    bool available = false;
    std::string autor = a.get_autor();
    std::string type = a.get_type();


    if((Book::m_availability== 1) || (a.get_availability()==1))
        available = true;
    if(Book::m_autor != a.get_autor())
    {
        autor = autor + "\t" + Book::m_autor;
    }

    if(Book::m_type != a.get_type())
    {
        type = type + "\t" + Book::m_type;
    }

    return Book((Book::m_name + "\t" +a.get_name()), available, a.get_publication_date(), autor, type, (Book::m_page_number + a.get_page_number()));
}


