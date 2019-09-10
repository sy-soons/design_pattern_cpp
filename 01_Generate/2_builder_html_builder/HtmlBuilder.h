#include "HtmlElementList.h"
#include <vector>
#include <string>

class HtmlBuilder
{
public:
    HtmlBuilder(const string& name);

    void add_child(const string& name, const string& text);
    string str(int indent = 0) const;
    
private:
    HtmlElementList root;
};

