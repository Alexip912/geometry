float perimeter(int radius)
{
    double p = 3.14;
    if (radius > 0) {
        return p * radius * 2;
    } else {
        return 1;
    }
}