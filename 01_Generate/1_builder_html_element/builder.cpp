#include <iostream>
#include <string>
#include <sstream>
#include "HtmlElementList.h"

using namespace std;

int main()
{
    string words[] = {"hello", "world"};
    HtmlElementList list("ul");
    for (auto w: words)
        list.emplace_back("li", w);

    printf("%s\n", list.str(4).c_str());
    return 0;
}
