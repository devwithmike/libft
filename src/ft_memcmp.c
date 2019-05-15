int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;
    int s1_total;
    int s2_total;

    i = 0;
    s1_total = 0;
    s2_total = 0;
    while (i < n)
    {
        if (*((char *)str1 + i) != *((char *)str2 + i))
        {
            s1_total = *((char *)str1 + i);
            s2_total = *((char *)str2 + i);
            break;
        }
        i++;
    }
    return (s1_total - s2_total);
}
