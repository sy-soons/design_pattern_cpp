
#include <string>
#include <vector>

using namespace std;

class HtmlElement
{
public:
    HtmlElement(){};
    HtmlElement(const string& name, const string& text)
        :name(name), text(text) { };

    string get_name() const;
    string get_text() const;
    string str(int indent = 0) const;

private:
    string name;
    string text;
};

