char *ft_strdup(char *src)
{
    int i;
    char *str;

    i = 0;
    if (src == NULL)
        return (NULL);
    while (src[i] != '\0')
    {
        i++;
    }
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
    {
        errno = ENOMEM;
        return (NULL);
    }
    ft_strcpy(str, src);
    return (str);
}
