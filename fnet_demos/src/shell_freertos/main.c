
#include "fapp.h"

/********************************************************************/

int main (void)
{
    /* Board-specific HW initialization. Default serial port initialization. Interrupt enabling. */
    fapp_hw_init();

    /* Run application. */
    fapp_main_freertos();

    return(0);
}
