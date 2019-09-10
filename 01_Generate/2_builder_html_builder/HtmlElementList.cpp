#include "HtmlElementList.h"

HtmlElementList::HtmlElementList()
    :root_name("ul"),
    root_text("")
{
    root_name = "ul";
    root_text = "";
}

HtmlElementList::HtmlElementList(const string& str_root_name)
    :root_name(str_root_name),
    root_text("")
{
}

void HtmlElementList::emplace_back(const string& name, const string& text)
{
    elements.emplace_back(name, text);
}

string HtmlElementList::str(int index) const
{
    
    string html_str = "";
    html_str = html_str + "\<" + root_name + "\>"+"\n";
    for(auto it = elements.begin(); it != elements.end(); it++)
    {
        html_str = html_str + it->str(index) + "\n";
    }
    html_str = html_str + "\<\/" + root_name + "\>";

    return html_str;
}

string HtmlElementList::get_root_name() const
{
    return root_name;
}

string HtmlElementList::get_root_text() const
{
    return root_text;
}
