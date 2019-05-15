int ft_isalnum(int ch)
{
    if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)) || ((ch > 47) && (ch < 58)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
