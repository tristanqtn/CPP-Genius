#include "header_library.h"
#include "header_functions.h"

/** Default Constructor
 */
Library::Library()
{
    m_number_member = 0; //initialize number of members to 0
    m_members_list = new Member * [100]; //dynamic allocation of a 100 width array of object members pointer
    //std::cout << "Empty dynamic array created" << std::endl;
    //initialize all pointers to NULL
    for(int i=0; i<100; i++)
    {
        m_members_list[i] = NULL;

    }
}

/** Default Destructor
 */
Library::~Library()
{
    //std::cout << "Destructor called" << std::endl;
    //free and delete all the pointers in dynamic members list
    for(int i=0; i<m_number_member; i++)
    {
        if(m_members_list[i] != NULL) //check if the pointer is used
        {
            delete(m_members_list[i]); //delete pointers and allocated space
            //std::cout << "Member deleted to avoid memory leak" << std::endl;
        }
    }
    delete m_members_list;
    //std::cout << "All memory has been cleaned, object Library destroyed" << std::endl;
}

/// Automatic creation of the members list
void Library::create_members_list ()
{
    Member * new_member_1 = new Member("M000001", "Johnson", "Steeve", 0);
    m_members_list[0] = new_member_1;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_2 = new Member("M000002", "Carl", "Ben", 0);
    m_members_list[1] = new_member_2;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_3 = new Member("M000003", "Little", "Jack", 0);
    m_members_list[2] = new_member_3;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_4 = new Member("M000004", "Garcia", "Maria", 0);
    m_members_list[3] = new_member_4;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_5 = new Member("M000005", "Clarkson", "Emily", 0);
    m_members_list[4] = new_member_5;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_6 = new Member("M000006", "O'Sullivan", "Jim", 0);
    m_members_list[5] = new_member_6;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_7 = new Member("M000007", "Sidorof", "Lara", 0);
    m_members_list[6] = new_member_7;
    //std::cout << "Member added to the list" << std::endl;

    Member * new_member_8 = new Member("M000008", "Leaf", "Peter", 0);
    m_members_list[7] = new_member_8;
    //std::cout << "Member added to the list" << std::endl;

    m_number_member = 8;
}

/// Automatic creation of newspapers shelf
void Library::create_newspaper_shelf ()
{
    m_newspaper_shelf.push_back(Newspaper("New York Times", 1, create_date(17, 05, 2022), 8, {"James", "Tiller", "Cook", "Johnson", "Henry"}));
    m_newspaper_shelf.push_back(Newspaper("New York Times", 1, create_date(10, 06, 2022), 8, {"James", "Tiller", "Cook", "Johnson", "Clarke"}));

    m_newspaper_shelf.push_back(Newspaper("Le Parisien", 1, create_date(12, 10, 2022), 8, {"Simon", "Jean", "Martin"}));

    m_newspaper_shelf.push_back(Newspaper("The Daily State", 1, create_date(30, 06, 2021), 11, {"James", "Tiller", "Cook", "Johnson", "Henry"}));

    m_newspaper_shelf.push_back(Newspaper("The Guardian", 1, create_date(06, 02, 2022), 10, {"Simon", "O'connell", "Ring", "Collins", "Rose"}));

}

/// Automatic creation of dictionaries shelf
void Library::create_dictionary_shelf ()
{
    m_dictionary_shelf.push_back(Dictionary("Cambridge", 1, create_date(02, 01, 2017), 135000, {"Ying", "Cormac"}));
    m_dictionary_shelf.push_back(Dictionary("Cambridge", 1, create_date(02, 01, 2018), 155000, {"Ying", "Cormac"}));

    m_dictionary_shelf.push_back(Dictionary("Robert & Collins", 1, create_date(06, 06, 2012), 200000, {"Erling", "Peter"}));
    m_dictionary_shelf.push_back(Dictionary("Robert & Collins", 1, create_date(06, 06, 2014), 212000, {"Erling", "Peter"}));

}

/// Automatic creation of comics shelf
void Library::create_comic_shelf ()
{
    m_comic_shelf.push_back(Comic("Tintin and the Dark Island", 1, create_date(15, 4, 1937), "Herge", "Investigation", "Studio Herge"));

    m_comic_shelf.push_back(Comic("Asterix Gladiator", 1, create_date(9, 4, 1964), "Goscinny", "Historical story", "Uderzo"));
    m_comic_shelf.push_back(Comic("Asterix at the olympic games", 1, create_date(15, 2, 1968), "Goscinny", "Historical story", "Uderzo"));
    m_comic_shelf.push_back(Comic("Asterix in Corsica", 1, create_date(31, 5, 1973), "Goscinny", "Historical story", "Uderzo"));

}

/// Automatic creation of books shelf
void Library::create_book_shelf ()
{
    m_book_shelf.push_back(Book("Waiting for Godot", 1, create_date(5, 1, 1953), "Samuel Beckett", "Tragicomedy", 255));
    m_book_shelf.push_back(Book("The Unnamable", 1, create_date(17, 6, 1958), "Samuel Beckett", "Trilogy", 567));

    m_book_shelf.push_back(Book("Bel-Ami", 1, create_date(8, 10, 1885), "Guy de Maupassant", "Novel", 80));
}

/// Display all datas concerning every types of documents
void Library::display_all_documents()
{
    //NEWSPAPERS
    std::cout << std::endl <<  " +------------------------------------- NEWSPAPERS" << std::endl;
    for(size_t i=0; i<m_newspaper_shelf.size(); i++)
    {
        m_newspaper_shelf[i].display_data();
        std::cout << std::endl;
    }
    //DICTIONARIES
    std::cout << std::endl << " +------------------------------------- DICTIONARIES" << std::endl;
    for(size_t i=0; i<m_dictionary_shelf.size(); i++)
    {
        m_dictionary_shelf[i].display_data_dictionary();
        std::cout << std::endl;
    }
    //COMICS
    std::cout << std::endl << " +------------------------------------- COMICS" << std::endl;
    for(size_t i=0; i<m_comic_shelf.size(); i++)
    {
        m_comic_shelf[i].display_data();
        std::cout << std::endl;
    }
    //BOOKS
    std::cout << std::endl << " +------------------------------------- BOOKS" << std::endl;
    for(size_t i=0; i<m_book_shelf.size(); i++)
    {
        m_book_shelf[i].display_data();
        std::cout << std::endl;
    }

}

/// Display all datas concerning members
void Library::display_all_members()
{
    for(int i=0; i<m_number_member; i++)
    {
        m_members_list[i]->display_info();
        std::cout << std::endl;
    }
}

/// SETUP function to load all members and documents
void Library::setup_library()
{
    //creating member list
    Library::create_members_list();
    //filling all shelves
    Library::create_book_shelf();
    Library::create_comic_shelf();
    Library::create_dictionary_shelf();
    Library::create_newspaper_shelf();
}

/// ALGO - BUBBLE SORT USING LAST NAME
void Library::testing_algorithm()
{   //going trough the dynamic array
    for (int i=0; i<m_number_member; i++)
        for (int j=0; j<m_number_member-i-1; j++)
            if (strcmp(m_members_list[j]->get_last_name().c_str(),m_members_list[j + 1]->get_last_name().c_str()) > 0)
                //if not in alphabetical order
                std::swap(m_members_list[j], m_members_list[j+1]); //swap with each others
}

///STATIC CAST
void Library::testing_static_casts()
{
    //let's convert an int into a long
    std::cout << "Type of number member :" <<typeid(m_number_member).name() << std::endl;
    long c = static_cast<long> (m_number_member);
    std::cout << "Type of c :" <<typeid(c).name() << std::endl;

}

///DYNAMIC CAST
void Library::testing_dynamic_casts()
{
    //let's convert a book into a volume
    Book my_book ("Become a C++ god", 1, create_date(17, 02, 1999), "Derek Molloy", "Computer Science", 400);

    my_book.display_info();
    std::cout << "Type of my_book :" <<typeid(my_book).name() << std::endl;

    Volume *my_volume= dynamic_cast<Volume*>(&my_book);
    std::cout << "Type of my_volume :" <<typeid(my_volume).name() << std::endl;

    my_volume->display_data();

}

///NON MEMBER OPERATOR
void Library::testing_non_member_operators()
{
    ///UNDO COMMENTS TO MAKE IT WORK PROPERLY !
//    if(m_members_list[0] == m_members_list[0]) //should lead to warning because comparing the same object !
//        std::cout << "identical member" << std::endl;
//    else
//        std::cout << "different member" << std::endl;

    if(m_members_list[0] == m_members_list[2])
        std::cout << "identical member" << std::endl;
    else
        std::cout << "different member" << std::endl;
}

///VARIOUS CASTS
void Library::testing_all_casts()
{
    std::cout << "+---------------- STATIC CAST" << std::endl;
    Library::testing_static_casts();

    std::cout << std::endl << std::endl << "+---------------- DYNAMIC CAST" << std::endl;
    Library::testing_dynamic_casts();
}

///ASSIGMENT OPERATOR
void Library::testing_assignment_operator()
{
    Member member_1("M0622", "Clarke", "Jimmy", 0);
    Member member_2("M0932", "Olliver", "Sonia", 1);
    Member member_3("M0039", "Field", "Bruno", 0);

    member_1.display_info();
    member_2.display_info();
    member_3.display_info();

    member_1 = member_2 = member_3;

    member_1.display_info();
    member_2.display_info();
    member_3.display_info();
}

/// DIVERSE OPERATORS '+' / '=='
void Library::testing_overloaded_operators()
{

    Book opus_1 ("The Fellowship of the Ring", 1, create_date(29, 7, 1954), "Tolkien", "Adventure", 1200);
    Book opus_2 ("The Two Towers", 1, create_date(11, 11, 1954), "Tolkien", "Adventure", 980);
    Book opus_3 ("The Return of the King", 1, create_date(20, 10, 1955), "Tolkien", "Adventure", 2500);

    Book trilogy(opus_3+(opus_2 + opus_1));
    trilogy.display_info();

    std::cout << std::endl << std::endl << "Comparing the trilogy with the trilogy" << std::endl;

    if(trilogy == trilogy)
        std::cout << "identical books" << std::endl;
    else
        std::cout << "different books" << std::endl;

    std::cout << std::endl << std::endl << "Comparing the opus 1 with the trilogy" << std::endl;

    if(opus_1 == trilogy)
        std::cout << "identical books" << std::endl;
    else
        std::cout << "different books" << std::endl;

}

///EXPERIMENT COPY CONSTRUCTOR
void Library::testing_copy_constructor()
{
    Book waiting_for_godot ("Waiting for Godot", 1, create_date(5, 1, 1953), "Samuel Beckett", "Tragicomedy", 255);
    std::cout << "+---------------- ORIGINAL" << std::endl;
    waiting_for_godot.display_info();

    std::cout << std::endl << std::endl;
    Book reprint(waiting_for_godot, create_date(10, 7, 1978));
    std::cout << "+---------------- REPRINT" << std::endl;
    reprint.display_info();
}

///DYNAMIC BINDING
void Library::testing_dynamic_binding()
{
    Newspaper new_york_times("New York Times", 1, create_date(17, 05, 2022), 8, {"James", "Tiller", "Cook", "Johnson", "Henry"});
    Volume web_app_guide("Web App Developement Guide", 0, create_date(5, 7, 2003), "Smith", "Educational");

    std::cout << "+---------------- NEwSPAPER" << std::endl;
    new_york_times.display_data();

    std::cout << std::endl << std::endl << "+---------------- VOLUME" << std::endl;
    web_app_guide.display_data();
}

///VALUE & REFERENCE PASSING
void Library::testing_value_reference_passing()
{
    Book my_example("The Book", 1, create_date(10,4,1999), "Original Author", "Humor", 160);
    std::cout << "+----------- ORIGINAL" << std::endl;
    my_example.display_info();
    passing_value(my_example);
    std::cout << "+----------- PASSING BY VALUE" << std::endl;
    my_example.display_info();
    passing_reference(my_example);
    std::cout << "+----------- PASSING BY REFERENCE" << std::endl;
    my_example.display_info();
}

//REFERENCES
void passing_reference(Book &example)
{
    example.set_autor("My new author");
    example.set_type("Crime");
}
//VALUE
void passing_value (Book example)
{
    example.set_autor("My new author");
    example.set_type("Crime");
}

///SMART POINTER
void Library::testing_smart_pointers()
{
    std::unique_ptr<Member> p1(new Member("M042892", "Jacobs", "David", false));

    p1->display_info();
    std::cout << std::endl<<  "Object p1 location : " <<p1.get()<< std::endl;

    std::cout << std::endl <<"+------------------- OBJECT MOVED" << std::endl;
    std::unique_ptr<Member> p2 = move(p1);

    std::cout << std::endl<<  "Object p1 location : " <<p1.get()<< std::endl;

    p2->display_info();
    std::cout << std::endl<<  "Object p2 location : " <<p2.get() << std::endl << std::endl;
}

///OBJECT PASSING ITSELF
void Library::testing_object_passing_itself()
{
    Member example ("M000008", "Leaf", "Peter", 0);
    example.display_info();
    modify_member(example);
    example.display_info();
}

///CONSTANT REFERENCE
void Library::testing_const_reference()
{
    const Member example ("M0003908", "Mickael", "Sidney", 0);

    std::cout << "Member ID: " << example.get_ID() << std::endl;
}

//void borrow_book (const Member &target)
//{
//    target.set_document_borrowed(true);
//}


///STATIC STATE

int Library::m_next_member_number = 9;
