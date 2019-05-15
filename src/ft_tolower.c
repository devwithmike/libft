int ft_tolower(int ch)
{
    if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
    {
        if ((ch > 64) && (ch < 91))
        {
            return ch + 32;
        }
        else
        {
            return ch;
        }
    }
    else
    {
        return ch;
    }
}
