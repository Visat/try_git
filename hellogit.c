#include <stdio.h>

//#define SWITCH 1

int main(int argc, char* argv[])
{
    printf("Hello Git!\n");


#ifdef SWITCH

    printf("\nSwitch On.\n");

#endif
   
    return 0;
}

