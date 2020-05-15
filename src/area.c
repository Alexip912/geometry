float area(int radius)
{
    double p = 3.14;
    if (radius > 0) {
        return p * radius * radius;
    } else {
        return 1;
    }
}