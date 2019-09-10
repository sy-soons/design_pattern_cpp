#include "HtmlBuilder2.h"
#include <iostream>
using namespace std;

HtmlBuilder::HtmlBuilder(const string& name)
{
    root = HtmlElementList(name);
}

HtmlBuilder& HtmlBuilder::add_child(const string& name, const string& text)
{
    root.emplace_back(name, text);
    return *this;
}

// HtmlBuilder* HtmlBuilder::add_child(const string& name, const string& text)
// {
//     root.emplace_back(name, text);
//     return this;
// }

string HtmlBuilder::str(int index) const
{
    return root.str(index);
}

