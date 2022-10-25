#ifndef HEADER_MEMBER_H_INCLUDED
#define HEADER_MEMBER_H_INCLUDED

/// LIBRARIES
#include <iostream>

/// CLASS FOR LIBRARY MEMBERS
class Member
{

private:

    std::string m_ID; //user ID, different value for each members

    std::string m_last_name; //last name
    std::string m_first_name; //first name


    bool m_document_borrowed; //1 if the member has borrowed a document

public:

    /// CONSTRUCTORS
    Member();
    Member(std::string _ID, std::string _last_name, std::string _first_name, bool _document_borrowed);

    /// DESTRUCTORS
    ~Member();

    /// GETTERS
    std::string  get_ID() const;

    std::string get_first_name() const;
    std::string get_last_name() const;

    bool get_document_borrowed() const;

    void set_document_borrowed(bool borrowed);


    ///OPERATORS
    Member & operator = (const Member & original);

    /// DISPLAY
    void display_info();
};

#endif // HEADER_MEMBER_H_INCLUDED
