#include "HtmlElement.h"
#include <vector>
#include <string>

class HtmlElementList
{
public:
    HtmlElementList();
    HtmlElementList(const string& str_root_name);
    void emplace_back(const string& name, const string& text);
    string str(int indent = 0) const;
    string get_root_name() const;
    string get_root_text() const;

private:
    vector<HtmlElement> elements;
    string root_name;
    string root_text;
};