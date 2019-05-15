char *ft_strcat(char *dest, const char *src)
{
    int dest_len;
    int src_len;
    int i;

    dest_len = 0;
    src_len = 0;
    i = 0;
    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[src_len] != '\0')
        src_len++;
    while ((i < src_len) && (src[i] != '\0'))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
