#ifndef HEADER_DOCUMENT_H_INCLUDED
#define HEADER_DOCUMENT_H_INCLUDED

/// LIBRARIES
#include <iostream>
#include <vector>


/// DATE STRUCTURE
typedef struct Date
{
    int day;
    int month;
    int year;
} t_date;



/// INDEPENDANT FUNCTION //1
t_date create_date(int day, int month, int year); //usefull fonction to create a t_date structure


/// PURE VIRTUAL DOCUMENT CLASS - ABSTRACT //3
class Document
{
protected :

    std::string m_name; //document name

    bool m_availability; //is the document available in our library

    t_date m_publication_date; //publication date of the document


public :

    /// CONSTRUCTORS
    Document();
    Document(std::string _name, bool _availability, t_date _publication_date);

    /// DESTRUCTOR
    ~Document();

    /// GETTERS
    std::string get_name() const;
    bool get_availability() const;
    t_date get_publication_date() const;

    /// SETTERS
    void set_name(std::string val);
    void set_availability(bool val);
    void set_publication_date(t_date val);

    /// VIRTUAL DISPLAY FUNCTION
    virtual void display_data() = 0; //virtual display function transforming this class in an abstract class
};

#endif // HEADER_DOCUMENT_H_INCLUDED
