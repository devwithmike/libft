int ft_strcmp(char *s1, char *s2)
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
    }
    return (s1_total - s2_total);
}
