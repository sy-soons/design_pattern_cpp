#ifndef __PRINTER_H__
#define __PRINTER_H__

class Printer
{
 public:
    Printer();
    int get_id() const;
    void set_id(int value);

 private:
    // private static variable
    // https://stackoverflow.com/questions/185844/how-to-initialize-private-static-members-in-c
    static int id;
};

#endif