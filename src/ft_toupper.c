int ft_toupper(int ch)
{
    if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
    {
        if ((ch > 96) && (ch < 123))
        {
            return ch - 32;
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
