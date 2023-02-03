double dist2D(double *mat, double *rez, int vel)
{
    double x_prev = 0, y_prev = 0, x, y, d;
    double ret = 0;

    for (int i = 0; i < vel; i++)
    {
        //*(rez + i) = 0;

        x = *(mat + 2 * i + 0);
        y = *(mat + 2 * i + 1);

        d = sqrt(pow(x - x_prev, 2) + pow(y - y_prev, 2));

        *(rez + i) = d;

        x_prev = x;
        y_prev = y;

        ret += d;
    }

    return ret;
}
