#include"headers6.h"

int main()
{
    int service;
   printf("\n please choose a service \n 1- exception number \n 2- calculator or cinema tickets \n 3- power \n 4- seq star \n 5- stars \n 6- swap var \n 7- swap arrays \n 8- flip array \n 9-array entry \n 10-battery statement \n 11- Fibonacci series program \n");

   scanf("%i",&service);

   choose_service(service);

    return 0;
}
