#ifndef HEADER_NEWSPAPER_H_INCLUDED
#define HEADER_NEWSPAPER_H_INCLUDED

/// LIBRARIES
#include "header_document.h"

/// DERIVED CLASS FROM DOCUMENT //1
class Newspaper : public Document
{
protected :

    int m_article_number; //number of articles in the newspaper

    std::vector<std::string> m_autors_name; //vector containing all the autor's name

public :

    /// CONSTRUCTORS
    Newspaper();
    Newspaper(std::string _name, bool _availability, t_date _publication_date, int _article_number, std::vector<std::string> autors_name);

    /// DESTRUCTOR
    ~Newspaper();

    /// GETTERS
    int get_article_number ();

    std::string get_precise_autor_name (int i);
    std::vector<std::string> get_autors_name ();


    /// SETTERS
    void set_article_number (int val);
    void set_autors_name (std::vector<std::string> val);

    ///METHODS
    void add_autor (std::string val);

    /// POLYMORPHIC DISPLAY FUNCTION
    void display_data();

};

#endif // HEADER_NEWSPAPER_H_INCLUDED
