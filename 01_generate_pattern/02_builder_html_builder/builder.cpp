#include <iostream>
#include <string>
#include <sstream>
#if(0) //simple builder
#include "HtmlBuilder.h"
#else
#include "HtmlBuilder2.h"
#endif

using namespace std;

int main()
{
    string words[] = {"hello", "world"};
    HtmlBuilder builder("ul");

#if(1)//simple builder
    for (auto w: words)
        builder.add_child("li", w);
#else//fluent interface builder
    builder.add_child("li", "hello").add_child("li", "world");
#endif

    printf("%s\n", builder.str(4).c_str());
    return 0;
}