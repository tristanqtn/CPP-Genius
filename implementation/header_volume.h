#ifndef HEADER_VOLUME_H_INCLUDED
#define HEADER_VOLUME_H_INCLUDED

/// LIBRARIES
#include "header_document.h"

/// DERIVED CLASS FROM DOCUMENT //1
class Volume : public Document
{
protected :

    std::string m_autor; //autor's name
    std::string m_type; //type of literature


public :

    /// CONSTRUCTOR
    Volume();
    Volume(std::string _name, bool _availability, t_date _publication_date, std::string _autor, std::string _type);

    /// DESTRUCTOR
    ~Volume();

    /// GETTERS
    std::string get_autor() const;
    std::string get_type() const;

    /// SETTERS
    void set_autor(std::string val);
    void set_type(std::string val);

    /// POLYMORPHIC DISPLAY FUNCTION
    void display_data();
};

#endif // HEADER_VOLUME_H_INCLUDED
