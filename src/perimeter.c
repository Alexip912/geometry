int perimeter(int radius)
{
    double p = 3.14;
    if (radius > 0) {
        int per = p * radius * 2;
        return per;
    } else {
        return 1;
    }
}