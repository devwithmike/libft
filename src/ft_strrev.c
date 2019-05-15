char *ft_strrev(char *str)
{
    int count;
    int len;
    int ascii;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    count = 0;
    while (count < len / 2)
    {
        ascii = str[count];
        str[count] = str[len - count - 1];
        str[len - count - 1] = ascii;
        count++;
    }
    return (str);
}
