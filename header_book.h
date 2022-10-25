#ifndef HEADER_BOOK_H_INCLUDED
#define HEADER_BOOK_H_INCLUDED

/// LIBRARIES
#include "header_volume.h"

/// DERIVED CLASS FROM VOLUME //1
class Book : public Volume
{

private:

    int m_page_number; //number of pages in book

public :

    /// CONSTRUCTORS
    Book();
    Book(const Book& to_copy, t_date _publication_date);
    Book(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type, int page_number);

    /// DESTRUCTORS
    ~Book();

    /// GETTERS
    int get_page_number() const;

    /// SETTERS
    void set_page_number(int val);

    ///OPERATORS
    bool operator == (Book a);
    Book operator + (Book a);


    /// DISPLAY
    void display_info();

};
#endif // HEADER_BOOK_H_INCLUDED
