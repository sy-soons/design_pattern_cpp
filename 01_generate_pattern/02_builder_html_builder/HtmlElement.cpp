#include "HtmlElement.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string HtmlElement::get_name() const
{
    return name;
}

string HtmlElement::get_text() const
{
    return text;
}

string HtmlElement::str(int index) const
{
    ostringstream oss;
    string tab_space = "";
    for(int i = 0; i < index; i++)
    {
        tab_space += " ";
    }

    oss << tab_space
        << "\<" << get_name() << "\>";
    oss << get_text();
    oss << "\<\/" << get_name() << "\>";
    
    return oss.str();
}

