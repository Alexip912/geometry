#include <math.h>
#include <stdlib.h>

int crossing(int x1, int y1, int x2, int y2, int r1, int r2)
{
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if ((d != 0 && r1 != r2) || d < r1 + r2 || d > abs(r1 - r2)) {
        return 0;
    } else
        return 1;
}