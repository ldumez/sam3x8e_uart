#include "uart.h"

void write(int data, int offset){
  switch(offset) {
    case 0x0000 : // Control Register
      reg_uart_cr.write(data);
    break;

    case 0x0004 : // Mode Register
      reg_uart_mr.write(data);
    break;

    case 0x0008 : // Interrupt Enable Register
      reg_uart_ier.write(data);
    break;

    case 0x000C : // Interrupt Disable Register
      reg_uart_idr.write(data);
    break;

    case 0x001C : // Transmit Holding Register
      reg_uart_thr.write(data);
    break;

    case 0x0020 : // Baud Rate Generator Register
      reg_uart_brgr.write(data);
    break;

    case default : // Not Applicable => Read-only registers
    // 0x0010 : Interrupt Mask Register
    // 0x0014 : Status Register
    // 0x0018 : Receive Holding Register
    break;
  }
}

/*void read(int offset){
  switch(offset) {
    case 0x0000 : // Control Register
      reg_uart_cr.read();
    break;

    case 0x0004 : // Mode Register
      reg_uart_mr.read();
    break;

    case 0x0008 : // Interrupt Enable Register
      reg_uart_ier.read();
    break;

    case 0x000C : // Interrupt Disable Register
      reg_uart_idr.read();
    break;

    case 0x001C : // Transmit Holding Register
      reg_uart_thr.read();
    break;

    case 0x0020 : // Baud Rate Generator Register
      reg_uart_brgr.read();
    break;

    case default : // Not Applicable => Read-only registers
    // 0x0010 : Interrupt Mask Register
    // 0x0014 : Status Register
    // 0x0018 : Receive Holding Register
    break;
}
}
*/
