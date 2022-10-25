#include "header_functions.h"


/// FUNCTION THAT RETURNS T_DATE TYPE
t_date create_date (int day, int month, int year)
{
    t_date new_date;

    //initialization to -1 to avoid problems
    new_date.day = -1;
    new_date.month = -1;
    new_date.year = -1;

    if(day<= 31 && day>0)
    {
        //day check
        if(month<= 12 && month>0)
        {
            //month check
            if(year<= 2022 && year>0)
            {
                //year check
                ///CHANGE VALUE
                new_date.day =day;
                new_date.month = month;
                new_date.year = year;
            }
        }
    }
    ///RETURN NEW DATE TYPE VALUE
    return new_date;
}

///OBJECT PASSING ITSELF TO A NON MEMBER FUNCTION AN MODIFY IT
void modify_member(Member &member_to_modify)
{
    member_to_modify.set_document_borrowed(!member_to_modify.get_document_borrowed());
}

///NON MEMBER OPERATOR
bool operator == (const Member & first_member, const Member & second_member)
{
    if(first_member.get_ID() == second_member.get_ID())
    {
        return true;
    }
    else
    {
        return false;
    }
}
