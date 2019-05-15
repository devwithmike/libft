int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int count;
    int s1_total;
    int s2_total;

    count = 0;
    s1_total = 0;
    s2_total = 0;
    while ((s1[count] != '\0') || (s2[count] != '\0'))
    {
        if (s1[count] != s2[count])
        {
            s1_total = s1[count];
            s2_total = s2[count];
            break;
        }
        count++;
        if (count <= n)
            break;
    }
    return (s1_total - s2_total);
}
