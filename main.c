/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:06:49 by hlaineka          #+#    #+#             */
/*   Updated: 2019/10/23 13:59:24 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	
	
	//PRINT TESTS
	//ft_putchar & ft_putstr ft_putendl
	char	newline;
	char	*s;

	newline = '\n';
	s = "qwerty";
	ft_putstr(s);
	ft_putchar(newline);
	ft_putendl(s);
	ft_putchar(newline);

	//ft_putnbr
	ft_putendl("putnbr:");
	int		n;
	int 	n2;
	int		n3;
	int		n4;
	int		n5;
	int		n6;

	n = 34567;
	n2 = 0;
	n3 = 1;
	n4 = -1;
	n5 = 2147483647;
	n6 = -2147483648;

	ft_putnbr(n);
	ft_putchar(newline);
	ft_putnbr(n2);
	ft_putchar(newline);
	ft_putnbr(n3);
	ft_putchar(newline);
	ft_putnbr(n4);
	ft_putchar(newline);
	ft_putnbr(n5);
	ft_putchar(newline);
	ft_putnbr(n6);
	ft_putchar(newline);
	ft_putchar(newline);

	//previous but with fd
	ft_putendl("fds:");
	ft_putstr_fd(s, 1);
	ft_putchar_fd(newline, 1);
	ft_putendl_fd(s, 1);
	ft_putnbr_fd(n6, 1);
	ft_putchar_fd(newline, 1);
	ft_putchar(newline);

	
	//ft_itoa
	ft_putendl("ITOA:");
	char *itoa;
	itoa = (char*)malloc(sizeof(char) * 15);

	itoa = ft_itoa(n);
	ft_putstr(itoa);
	ft_putchar(newline);

	itoa = ft_itoa(n2);
	ft_putstr(itoa);
	ft_putchar(newline);

	itoa = ft_itoa(n3);
	ft_putstr(itoa);
	ft_putchar(newline);

	itoa = ft_itoa(n4);
	ft_putstr(itoa);
	ft_putchar(newline);

	itoa = ft_itoa(n5);
	ft_putstr(itoa);
	ft_putchar(newline);


	itoa = ft_itoa(n6);
	ft_putstr(itoa);
	ft_putchar(newline);
	ft_putchar(newline);


           



	//LIB C TESTS
 	//memset
	ft_putendl("memset");
	ft_memset(itoa, '3', 3);
	ft_putstr(itoa);
	ft_putchar(newline);
	ft_putchar(newline);

	//bzero
	ft_putendl("bzero:");
	ft_bzero(itoa, 3);
	ft_putendl(itoa);
	ft_putchar(newline);

//memset
	ft_putendl("memset");
	ft_memset(itoa, '3', 3);
	ft_putstr(itoa);
	ft_putchar(newline);

	ft_putchar(newline);
	//memcpy
	char	*destination;
	destination = (char*)malloc(sizeof(char) * 15);
	ft_putendl("memcpy:");
	memcpy(destination, itoa, ft_strlen(itoa) + 1);
	ft_putendl(destination);
	ft_memset(destination, '-', 15);
	destination[14] = '\0';
	ft_putendl(destination);
	ft_memcpy(destination, itoa, ft_strlen(itoa) + 1);
	ft_putendl(destination);
	ft_putchar(newline);


	//strlen
	ft_putendl("strlen:");	
    ft_putnbr(strlen(s));
	ft_putchar_fd(newline, 1);
    ft_putnbr(ft_strlen(s));
	ft_putchar_fd(newline, 1);
	ft_putchar(newline);


	//ft_strdup
	ft_putendl("strdup:");
	char *new_str; 
	new_str = ft_strdup(s);
	ft_putendl(new_str);
	ft_putchar(newline);



	//strcpy
	ft_putendl("strcpy:");
	ft_strcpy(destination, itoa);
	ft_putendl(destination);
	ft_putchar(newline);

	//strncpy
	ft_putendl("strncpy:");
	char strncpy1[15] = "random string!";
	char *strncpy2;
	strncpy2 = (char*)malloc(sizeof(char) * 15);
	strncpy2 = ft_strncpy(strncpy2, strncpy1, 15);
	ft_putendl(strncpy2);
	char *strncpy3;
	strncpy3 = (char*)malloc(sizeof(char) * 15); 
	strncpy3 = strncpy(strncpy3, strncpy1, 15);
	ft_putendl(strncpy3);
	ft_memset(strncpy2, '-', 15);
	strncpy2[14] = '\0';
	ft_memset(strncpy3, '-', 15);
	strncpy3[14] = '\0';
	strncpy2 = ft_strncpy(strncpy2, strncpy1, 6);
	ft_putendl(strncpy2);
	strncpy3 = strncpy(strncpy3, strncpy1, 6);
	ft_putendl(strncpy3);
	ft_putchar(newline);

	//strcat
	ft_putendl("strcat:");
	char *strcat_dest;
	char *strcat_src1;
	char *strcat_src2;
	char *strcat_src3;
	unsigned int size = 70;

	strcat_dest = (char*)malloc(sizeof(char) * size);
	strcat_src1 = (char*)malloc(sizeof(char) * 10);
	strcat_src2 = (char*)malloc(sizeof(char) * 10);
	strcat_src3 = (char*)malloc(sizeof(char) * 10);

	strcpy(strcat_dest, "This is t");
	strcpy(strcat_src1, "esting if");
	strcpy(strcat_src2, " your str");
	strcpy(strcat_src3, "cat works");

	ft_strcat(strcat_dest, strcat_src1);
	ft_strcat(strcat_dest, strcat_src2);
	ft_strcat(strcat_dest, strcat_src3);

	ft_putendl(strcat_dest);
	ft_putchar(newline);

	//strncat
	ft_putendl("strncat:");
	char *strncat_src;
	strncat_src = (char*)malloc(sizeof(char) * 30);
	strncat_src = " and strncat does not!";
	ft_strncat(strcat_dest, strncat_src, 12);
	ft_putendl(strcat_dest);
	ft_putchar(newline);

	//strlcat
	ft_putendl("strlcat:");
	char *strlcat_src;
	int strlcat_return = 0;
	strlcat_src = (char*)malloc(sizeof(char) * 30);
	strlcat_src = " strlcat, does it work in my code?";
	strlcat_return = ft_strlcat(strcat_dest, strlcat_src, size);
	ft_putnbr(strlcat_return);
	ft_putchar(newline);
	ft_putendl(strcat_dest);
	ft_putchar(newline);
	
	//strchr
	ft_putendl("strchr:");
	char *strchr_src;
	char *strchr_dest;
	strchr_dest = (char*)malloc(sizeof(char) * 30);
	strchr_src = (char*)malloc(sizeof(char) * 30);
	strchr_src = "qwerty123uiopa456sdfgh789";
	strchr_dest = ft_strchr(strchr_src, '3');
	ft_putendl(strchr_dest);
	strchr_dest = ft_strchr(strchr_src, 'v');
	if (strchr_dest == NULL)
		ft_putendl("Not found!");
	strchr_dest = ft_strchr(strchr_src, '\0');
	if (strchr_dest[0] == '\0')
		ft_putendl("string ends with null-character");
	ft_putchar(newline);

	//strrchr
	ft_putendl("strrchr:");
	char *string;
	char *string_dest;
	string_dest = (char*)malloc(sizeof(char) * 30);
	string = (char*)malloc(sizeof(char) * 30);
	string = "qwer3y123uiopa356sdfgh789";
	string_dest = ft_strrchr(string, '3');
	ft_putendl(string_dest);
	string_dest = ft_strrchr(string, 'q');
	ft_putendl(string_dest);
	string_dest = ft_strrchr(string, 'v');
	if (string_dest == NULL)
		ft_putendl("Not found!");
	ft_putendl("nullpointer passed");
	string_dest = ft_strrchr(string, '\0');
	if (string_dest[0] == '\0')
		ft_putendl("string ends with null-character");	
	ft_putchar(newline);

	//strstr
	ft_putendl("strstr:");
	char *compare_with;
	char *found;

	compare_with = (char*)malloc(sizeof(char) * 150);
	found = (char*)malloc(sizeof(char) * 150);
	compare_with = "this is the string where you need to find other string!";
	ft_putendl(compare_with);
	found = ft_strstr(compare_with, "you");
	ft_putendl(found);
	found = ft_strstr(compare_with, "stringit");
	if (found == NULL)
		ft_putendl("stringit not found!");
	ft_putchar(newline);

	//strnstr
	ft_putendl("strnstr");
	found = ft_strnstr(compare_with, "you", 30);
	ft_putendl(found);
	found = ft_strnstr(compare_with, "you", 20);
	if (found == NULL)
		ft_putendl("you not found!");
	found = ft_strnstr(compare_with, "\0", 30);
	ft_putendl(found);
	ft_putchar(newline);	
	

	//memccpy
	ft_putendl("memccpy:");
	ft_bzero(destination, 15);
	memccpy(destination, itoa, '6', ft_strlen(itoa) + 1);
	ft_putendl(destination);
	ft_bzero(destination, 15);
	ft_memccpy(destination, itoa, '6',  ft_strlen(itoa) + 1);
	ft_putendl(destination);
	ft_putchar(newline);

	//memmove
	ft_putendl("memmove:");
	itoa = ft_itoa(n6);
	memmove(itoa, itoa + 2, 10);
	ft_putendl(itoa);
	itoa = ft_itoa(n6);
	memmove(itoa + 2, itoa, 10);
	ft_putendl(itoa);

	
	itoa = ft_itoa(n6);
	ft_memmove(itoa, itoa + 2, 10);
	ft_putendl(itoa);
	itoa = ft_itoa(n6);
	ft_memmove(itoa + 2, itoa, 10);
	ft_putendl(itoa);
	ft_putchar(newline);

	//memchr
	ft_putendl("memchr:");
	itoa = ft_itoa(n6);
	destination = ft_memchr(itoa, '6', 15);
	ft_putendl(destination);	
	destination = ft_memchr(itoa, '9', 15);
	if (destination == NULL)
		ft_putendl("memchr nullpointer");
	else
		ft_putendl("something went wrong");
	ft_putchar(newline);

	
	//memcmp
	ft_putendl("memcmp:");
	char str1[15] = "DWgaOtP12df0";
	char str2[15] = "DWGAOTP12DF0";
	int number = memcmp(str1, str2, 15);
	ft_putnbr(number);
	ft_putchar(newline);
	int number2 = memcmp(str1, str2, 15);
	ft_putnbr(number2);
	ft_putchar(newline);	

	char str3[15] = "qwertyuiop";
	char str4[15] = "qwertyuiop";
	int number3 = memcmp(str3, str4, 11);
	ft_putnbr(number3);
	ft_putchar(newline);
	int number4 = memcmp(str3, str4, 11);
	ft_putnbr(number4);
	ft_putchar(newline);

	char str5[15] = "1337";
	char str6[15] = "7331";
	int number5 = memcmp(str5, str6, 15);
	ft_putnbr(number5);
	ft_putchar(newline);
	int number6 = memcmp(str5, str6, 15);
	ft_putnbr(number6);
	ft_putchar(newline);
	ft_putchar(newline);






	






}
