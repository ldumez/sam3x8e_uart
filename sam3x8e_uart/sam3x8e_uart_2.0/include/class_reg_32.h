#ifndef class_reg_32_h
#define class_reg_32_h
#include <iostream>
class class_reg_32
{
  public:
    class_reg_32();
    class_reg_32(int mask);
    class_reg_32(int mask, int reg_value);

    virtual int read();
    virtual void write(int reg_value);

    void reset();

    virtual int get_reg_value() = 0;
    virtual void set_reg_value(int data) = 0;

  private:
    int reg_value;
    int mask;

};

#endif
