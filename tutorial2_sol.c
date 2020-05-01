#include <stdio.h>
void tut2_assign(){
  int my_integer = 10;
  float my_float = 3.14;
  double my_double = 3.1415926535;
  int my_integer2 = 20;
  printf("Here is my integer: %d\n\rHere is my float: %0.5f\n\rHere is my double: %0.5lf\n\r\n\r",my_integer,my_float,my_double);

  printf("Here is division: %f\r\nThis is what happens when double gets divided by a float:%lf\r\n\r\n",my_float/my_integer, my_float/my_integer);

  printf("Here is integer division: %d\r\nHere is division of integers: %0.1f\r\n",my_integer2/my_integer,(float)my_integer/my_integer2);
}