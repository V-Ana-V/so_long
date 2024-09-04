#include "so_long.h"

void message(int code)
{
    if (code == 0)
        ft_printf("The number of arguments is not 2!\n");
    else if (code == 1)
        ft_printf("Map format should be .ber!\n");

}

void error_exit(int code)
{
    message(code);
    exit(1);
}