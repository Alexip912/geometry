#include <string.h>

char figure_name(char figure[])
{
    if (strncmp(figure, "circle", 6) == 0) {
        return 0;
    } else
        return 1;
}
