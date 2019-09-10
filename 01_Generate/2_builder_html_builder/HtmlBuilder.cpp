#include "HtmlBuilder.h"
#include <iostream>

using namespace std;

HtmlBuilder::HtmlBuilder(const string& name)
{
    root = HtmlElementList(name);
}

void HtmlBuilder::add_child(const string& name, const string& text)
{
    root.emplace_back(name, text);
}

string HtmlBuilder::str(int index) const
{
    return root.str(index);
}