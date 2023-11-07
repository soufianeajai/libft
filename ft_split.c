/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajaite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:14:43 by sajaite           #+#    #+#             */
/*   Updated: 2023/11/05 17:48:46 by sajaite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

// calculate the len of a word until the delimiter.
static int	len_word(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

// extract words until the next delimiter.
static char	*extract_word(char const *s, char c)
{
	int		len;
	char	*word;
	int		i;

	i = 0;
	len = len_word(s, c);
	word = malloc(len + 1);
	if (!word)
		return (0);
	while (i < len)
		word[i++] = *s++;
	word[i] = 0;
	return (word);
}

// calculate the number of words separated by the delimiter(c) in my string(s).
static int	nbr_words(char const *s, char c)
{
	int	nbr;

	nbr = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			nbr++;
		while (*s && *s != c)
			s++;
		if (*s)
			s++;
	}
	return (nbr);
}

static void	free_splited(char **splited_s, char const *s, int i)
{
	if (*s && !splited_s[i])
	{
		while (--i >= 0)
		{
			free(splited_s[i]);
			splited_s[i] = 0;
		}
		free (splited_s);
		splited_s = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**splited_s;
	int		nbr;

	if (!s)
		return (0);
	i = 0;
	nbr = nbr_words(s, c);
	splited_s = (char **)malloc(sizeof(char *) * (nbr + 1));
	if (!splited_s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
			splited_s[i] = extract_word(s, c);
		free_splited(splited_s, s, i);
		while (*s && *s != c)
			s++;
		if (i < nbr)
			i++;
	}
	splited_s[i] = 0;
	return (splited_s);
}
/*
int main() {
    char const *s = " 0 1  22   333    4444     ";
  	char c = ' ';

    char **words = ft_split(s, c);
	if (!words)
	{
		printf("%s", "enter a valid paramater");
		return (1);
	}
	while (*words)
		printf("%s--", *words++);
}
*/
