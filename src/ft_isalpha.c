int ft_isalpha(int ch)
{
    if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
    {
        return ch;
    }
    else
    {
        return 0;
    }
}
