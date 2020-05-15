int area(int radius)
{
    double p = 3.14;
    if (radius > 0) {
        int pl = p * radius * radius;
        return pl;
    } else {
        return 1;
    }
}