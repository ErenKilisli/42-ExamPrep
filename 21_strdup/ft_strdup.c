/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:48:08 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/22 17:01:02 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)

{
	char	*dest;
	int		i;
	int		srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	dest =(char *)malloc(sizeof(char) * (srclen + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);		
}

// #include <stdio.h>
// int main(void)

// {
// 	char	*str = "TestEren123";
// 	char	*dup_str;

// 	dup_str = ft_strdup(str);
// 	printf("%s\n", str);
// 	printf("%s\n", dup_str);
// 	free(dup_str); 

// 	char	*str1 = "  --123  ";
// 	dup_str = ft_strdup(str1);
// 	printf("%s\n", str1);
// 	printf("%s\n", dup_str);
// 	free(dup_str);

// 	return (0);
// }