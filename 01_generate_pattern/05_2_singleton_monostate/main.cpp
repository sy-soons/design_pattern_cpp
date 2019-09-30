#include "Printer.h"
#include <iostream>

int main()
{
    std::cout << "===== main =====" << std::endl;

    Printer printer;
    std::cout << "printer id: " << printer.get_id() << std::endl;
    printer.set_id(5);
    std::cout << "printer id: " << printer.get_id() << std::endl;
    
    return 0;
}