#ifndef HEADER_DICTIONARY_H_INCLUDED
#define HEADER_DICTIONARY_H_INCLUDED

/// LIBRARIES
#include "header_newspaper.h"
#include "header_volume.h"

/// DERIVED CLASS FROM NEWSPAPER AND VOLUME //1
// multiple inheritance => deadly diamond
class Dictionary : public Newspaper, public Volume
{

public :

    /// CONSTRUCTORS
    Dictionary();
    Dictionary(std::string _name, bool _availability, t_date _publication_date, int _article_number, std::vector<std::string> _autors_name);

    ///DESTRUCTOS
    ~Dictionary();

    /// DISPLAY
    void display_data_dictionary(); //method create to display the infos and prevent from deadly diamond
};

#endif // HEADER_DICTIONARY_H_INCLUDED
