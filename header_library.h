#ifndef HEADER_LIBRARY_H_INCLUDED
#define HEADER_LIBRARY_H_INCLUDED

/// LIBRARIES
#include "header_document.h"
#include "header_volume.h"
#include "header_newspaper.h"
#include "header_dictionary.h"
#include "header_comic.h"
#include "header_book.h"
#include "header_member.h"
#include "header_functions.h"

#include <memory>
#include<string.h>


class Library
{

private:

    /// VECOTRS CONTAINING ALL DOCUMENTS
    std::vector <Newspaper> m_newspaper_shelf;
    std::vector <Dictionary> m_dictionary_shelf;
    std::vector <Comic> m_comic_shelf;
    std::vector <Book> m_book_shelf;

    Member ** m_members_list; //dynamic array of pointers on Member objects

    int m_number_member; //number of member

public:

    /// CONSTRUCTOR
    Library();

    /// DESTRUCTOR
    ~Library();

    /// SETUP FUNCTIONS
    void setup_library(); //initialize all states of the library

    void create_members_list (); //initialize the members list
    void create_newspaper_shelf (); //initialize the newspapers shelf
    void create_dictionary_shelf (); //initialize the dictionaries shelf
    void create_comic_shelf (); //initialize the comics shelf
    void create_book_shelf (); //initialize the books shelf

    void testing_algorithm();
    void testing_static_casts();
    void testing_dynamic_casts();
    void testing_destructors();
    void testing_non_member_operators();
    void testing_dynamic_binding();
    void testing_copy_constructor();
    void testing_value_reference_passing();
    void testing_overloaded_operators();
    void testing_assignment_operator();
    void testing_all_casts();
    void testing_smart_pointers();
    void testing_object_passing_itself();
    void testing_const_reference();

    ///STATIC STATE
    static int m_next_member_number;

    /// DISPLAY
    void display_all_members(); //display members profil
    void display_all_documents(); //display all documents data

};

#endif // HEADER_LIBRARY_H_INCLUDED
