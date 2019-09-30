#include "Printer.h"

// initialize private static member variable 
// https://stackoverflow.com/questions/185844/how-to-initialize-private-static-members-in-c
int Printer::id = 0;

Printer::Printer()
{
}

int Printer::get_id() const
{
    return id;
}

void Printer::set_id(int value)
{
    id = value;
}