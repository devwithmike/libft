void *ft_memset(void *str, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *((char *)str + i) = c;
        i++;
    }
}
