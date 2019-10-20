#include <iostream>
#include "Widget.h"
#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include "TextField.h"

int main()
{
    Widget* aWidget = new BorderDecorator(
                        new ScrollDecorator(
                            (Widget *) new TextField(80, 24)));
    
    aWidget->draw();
    delete aWidget;
    return 0;
}
