int ft_strlen(char *str);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*
int main(void)
{
    char *name;
    name[] = "devin";
    ft_strlen(name);
}
*/