int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;

	i = -1;
	while (tab[++i] != '\0')
		if (f(tab[i]) == 1)
	return (i);
}
