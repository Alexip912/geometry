#include "area.h"
#include "crossing.h"
#include "perimeter.h"
#include "fname.h"
#include "ctest.h"

CTEST(name, circle)
{
    char fig[] = "circle";
    int a = figure_name(fig);
    ASSERT_EQUAL(0, a);
    char fig2[] = "circle ";
    a = figure_name(fig2);
    ASSERT_EQUAL(0, a);
    char fig3[] = " ";
    a = figure_name(fig3);
    ASSERT_EQUAL(1, a);
    char fig4[] = "";
    a = figure_name(fig4);
    ASSERT_EQUAL(1, a);
    char fig5[] = "asdfasdg";
    a = figure_name(fig5);
    ASSERT_EQUAL(1, a);
    char fig6[] = "83274";
    a = figure_name(fig6);
    ASSERT_EQUAL(1, a);
}

CTEST(area, Area)
{
    int a = area(5);
    ASSERT_EQUAL(78, a);
    a = area(0);
    ASSERT_EQUAL(1, a);
}

CTEST(perim, perimeter)
{
    int a = perimeter(5);
    ASSERT_EQUAL(31, a);
    a = perimeter(0);
    ASSERT_EQUAL(1, a);
}

CTEST(cross, crossing)
{
    int a = crossing(2, 3, 2, 4, 3, 5);
    ASSERT_EQUAL(0, a);
    a = crossing(1, 1, 4, 2, 2, 3);
    ASSERT_EQUAL(0, a);
    a = crossing(-2, 0, 1, 2, 5, 5);
    ASSERT_EQUAL(0, a);
    a = crossing(2, 1, 2, 3, 4, 5);
    ASSERT_EQUAL(0, a);
    a = crossing(1, 2, -1, 2, 4, 4);
    ASSERT_EQUAL(0, a);
    a = crossing(1, 1, 3, 3, 4, 1);
    ASSERT_EQUAL(0, a);
}
