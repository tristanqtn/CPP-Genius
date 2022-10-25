#include "header_member.h"

/** Default Constructor
 */
Member::Member() {}

/** Parameterized Constructor
 */
Member::Member(std::string _ID, std::string _last_name, std::string _first_name, bool _document_borrowed)
    :m_ID(_ID), m_last_name(_last_name), m_first_name(_first_name), m_document_borrowed(_document_borrowed)
{}

/** Default Destructor
 */
Member::~Member() {}

/** Access m_ID
 * \return The current value of m_ID
 */
std::string  Member::get_ID() const
{
    return m_ID;
}

/** Access m_first_name
 * \return The current value of m_first_name
 */
std::string Member::get_first_name() const
{
    return m_first_name;
}

/** Access m_last_name
 * \return The current value of m_last_name
 */
std::string Member::get_last_name() const
{
    return m_last_name;
}

/** Access m_document_borrowed
 * \return The current value of m_document_borrowed
 */
bool Member::get_document_borrowed() const
{
    return m_document_borrowed;
}

void Member::set_document_borrowed(bool borrowed)
{
    m_document_borrowed = borrowed;
}

/** Display member info function
 */
void Member::display_info()
{
    std::cout << " +------------------------------------- " << m_ID << std::endl;
    std::cout << "First Name: " << m_first_name << "         Last Name: " << m_last_name << std::endl;
    std::cout << "Book borrowed: ";
    if(m_document_borrowed == false)
        std::cout << "no";
    else
        std::cout << "yes";

    std::cout << std::endl;
}


Member & Member::operator = (const Member & original){
	if (this!= &original){   // make sure we are not copying from itself
		m_first_name = original.get_first_name();
		m_last_name = original.get_last_name();
		m_ID= original.get_ID();
		m_document_borrowed = original.get_document_borrowed();
	}
	return *this;    // return the reference (value of pointer this)
}



