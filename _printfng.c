int printDecimal(int d)
{
    int count = 0;
    char c;
    int divisor = 1;
    int tmp;

    if (d < 0)
    {
        write(1, "-", 1);
        count += 1;
        d = -d;
    }

    while (d / divisor >= 10)
        divisor *= 10;

    while (divisor != 0)
    {
        tmp = d / divisor;
        d = d % divisor;
        c = tmp + '0';
        write(1, &c, 1);
        count += 1;
        divisor /= 10;
    }

    return count;
}
