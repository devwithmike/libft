int ft_isdigit(int ch)
{
    if ((ch > 47) && (ch < 58))
    {
        return ch;
    }
    else
    {
        return 0;
    }
}
