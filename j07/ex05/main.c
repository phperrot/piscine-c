char		**ft_split_whitespaces(char *str);

void ft_print_words_tables(char **tab);

int	main(void)
{
	char *str;

	str = "       \n      bonjour comment ca va   ";

	ft_print_words_tables(ft_split_whitespaces(str));

	return (0);
}
