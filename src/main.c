#include "fname.h"
#include "area.h"
#include "perimeter.h"
#include "crossing.h"
#include <stdio.h>

int main()
{
    char figure[30];
    int x1, y1, x2, y2;
    int r1, r2;
    float s1, s2, p1, p2;
    printf("Название фигуры - ");
    scanf("%s", figure);
    int flag = figure_name(figure);
    if (flag == 0) {
        printf("Введите координаты первой окружности - ");
        if (scanf("%d", &x1) != 1) {
            printf("Надо вводить число");
            return 0;
        }
        if (scanf("%d", &y1) != 1) {
            printf("Надо вводить число");
            return 0;
        }
        printf("Введите радиус первой окружности: ");
        if (scanf("%d", &r1) != 1) {
            printf("Надо вводить число");
            return 0;
        } else {
            s1 = area(r1);
            p1 = perimeter(r1);
        }
        printf("Введите координаты второй окружности - ");
        if (scanf("%d", &x2) != 1) {
            printf("Надо вводить число");
            return 0;
        }
        if (scanf("%d", &y2) != 1) {
            printf("Надо вводить число");
            return 0;
        }
        printf("Введите радиус первой окружности: ");
        if (scanf("%d", &r2) != 1) {
            printf("Надо вводить число");
            return 0;
        } else {
            s2 = area(r2);
            p2 = perimeter(r2);
        }
    } else {
        printf("Доступные названия фигур: circle");
        return 0;
    }
    int check = crossing(x1, x2, y1, y2, r1, r2);
    if (check != 0) {
        printf("\n<<Окружности не пересекаются>>\n");
    } else
        printf("\n<<Окружности не пересекаются>>\n");
    printf("Площадь первой окружности: %0.2f\n", s1);
    printf("Периметр первой окружности: %0.2f\n\n", p1);
    printf("Площадь второй окружности: %0.2f\n", s2);
    printf("Периметр второй окружности: %0.2f\n", p2);
    return 0;
}
