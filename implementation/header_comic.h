#ifndef HEADER_COMIC_H_INCLUDED
#define HEADER_COMIC_H_INCLUDED

///LIBRARIES
#include "header_volume.h"

/// DERIVED CLASS FROM VOLUME //1
class Comic : public Volume
{
private :

    std::string m_cartoonist; //name of the comic's cartoonist

public :

    /// CONSTRUCTORS
    Comic();
    Comic(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type, std::string _cartoonist);

    /// DESTRUCTOR
    ~Comic();

    /// GETTERS
    std::string get_cartoonist() const;

    /// SETTERS
    void set_cartoonist(std::string val);

    /// DISPLAY
    void display_info();

};

#endif // HEADER_COMIC_H_INCLUDED
