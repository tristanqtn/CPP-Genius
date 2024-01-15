#ifndef HEADER_FUNCTIONS_H_INCLUDED
#define HEADER_FUNCTIONS_H_INCLUDED

#include "header_library.h"


void passing_value(Book example);
void passing_reference(Book &example);

void modify_member(Member &member_to_modify);

bool operator == (const Member & first_member, const Member & second_member);

void borrow_book(const Member &target);
#endif // HEADER_FUNCTIONS_H_INCLUDED
