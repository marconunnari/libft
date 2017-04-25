char	*ft_strappend(char *str, char c)
{
	char	*cs;

	cs = ft_strnew(1);
	cs[0] = c;
	return (ft_strmerge(str, cs));
}
