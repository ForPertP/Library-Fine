int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 > y2) return 10000;
    
    if (y1 == y2 && m1 > m2) return (m1-m2) * 500;
    
    if (y2 == y1 && m2 == m1 && d1 > d2) return (d1-d2) * 15;

    return 0;
}

int libraryFine1(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 < y2) return 0;
    if (y1 > y2) return 10000;

    if (m1 < m2) return 0;
    if (m1 > m2) return (m1-m2) * 500;

    if (d1 > d2) return (d1-d2) * 15;
    
    return 0;
}
