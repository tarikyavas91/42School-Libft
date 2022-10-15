#include "libft.h"
#include <stdio.h>
#include <fcntl.h> 
// gcc -Wall -Wextra -Werror srcs/*.c srcs/extra/*.c srcs/bonus/*.c .main/*.c -I incs -o tt.exe // -Wall -Wextra -Werror s
// gcc -Wall -Wextra -Werror srcs/bonus/*.c srcs/*.c .main/*.c -I incs -o tt.exe
char ft_double(unsigned int i, char c);
void ft_double_pri(unsigned int i, char *c);
void free_print(void *content);
void ft_putstr(char *str);
void	*ft_return(void *content);
int main(void)
{
	printf("/////**** ILK BOLUM ****\\\\\\\\\\ \n\n");
	/*   ft_isalpha   */
	printf("\n *** ft_isalpha *** \n");
	printf("input: 95(-) --> output: %d\n", ft_isalpha('-'));
	printf("input: 65(A) --> output: %d\n", ft_isalpha('A'));
	/*   ft_isdigit   */
	printf("\n\n *** ft_isdigit *** \n");
	printf("input: 50(2) --> output: %d\n", ft_isdigit('2'));
	printf("input: 112(p) --> output: %d\n", ft_isdigit('p'));
	/*   ft_isalnum   */
	printf("\n\n *** ft_isalnum *** \n");
	printf("input: 65(A) --> output: %d\n", ft_isalnum('A'));
	printf("input: 51(3) --> output: %d\n", ft_isalnum('3'));
	printf("input: 10(\\n) --> output: %d\n", ft_isalnum('\n'));
	/*   ft_isascii   */
	printf("\n\n *** ft_isascii *** \n");
	printf("input: 106(j) --> output: %d\n", ft_isascii('j'));
	printf("input: 260 --> output: %d\n", ft_isascii(260));
	/*   ft_isprint   */
	printf("\n\n *** ft_isprint *** \n");
	printf("input: 38(&) --> output: %d\n", ft_isprint('&'));
	printf("input: 7(\\a) --> output: %d\n", ft_isprint('\a'));
	/*   ft_strlen   */
	printf("\n\n *** ft_strlen *** \n");
	char dizi_len[] = "AhmetMehmet";
	printf("input: \"%s\" --> output: %zu\n", dizi_len, ft_strlen(dizi_len));
	/*   ft_memset   */
	printf("\n\n *** ft_memset *** \n");
	char dizi_set[] = "Merhaba yeni dunya";
	printf("input: \"%s\" --> output: ", dizi_set);
	ft_memset(dizi_set, 'a', 8);
	printf("\"%s\" \n", dizi_set);
	/*   ft_bzero   */
	printf("\n\n *** ft_bzero *** \n");
	printf("Gönderilen dizide NULL ile doldurduğundan okuma yapılamıyor.Kodları görselleştiren sitelerden yardım alabilirsiniz.");
	/*   ft_memcpy   */
	printf("\n\n *** ft_memcpy *** \n");
	char dizi_memcpy[7] = "aabbcc";
	printf("Dizinin ilk hali: %s -->", dizi_memcpy);
	ft_memcpy(dizi_memcpy + 2, dizi_memcpy, 4);
	printf("dizinin ilk 4 karakteri 2. karakterden sonrasına kopyalama: %s\n", dizi_memcpy);
	/*   ft_memmove   */
	printf("\n\n *** ft_memmove *** \n");
	char dizi_memmove[7] = "aabbcc";
	printf("Dizinin ilk hali: %s -->", dizi_memmove);
	ft_memcpy(dizi_memmove + 2, dizi_memmove, 4);
	printf("dizinin ilk 4 karakteri 2. karakterden sonrasına kopyalama: %s\n", dizi_memmove);
	/*   ft_strlcpy   */
	printf("\n\n *** ft_strlcpy *** \n");
	char dizi_strlcpy_src[] = "Merhaba yeni dunya";
	char dizi_strlcpy_dest[] = "Mehmetsssssss";
	printf("src dizisi \"%s\", dest dizisi \"%s\" \n", dizi_strlcpy_src, dizi_strlcpy_dest);
	printf("ft_strlcpy sonucu: %zu\n", ft_strlcpy(dizi_strlcpy_dest, dizi_strlcpy_src, 8));
	printf("8 karakter kopyalandı yeni dest dizisi \"%s\"\n", dizi_strlcpy_dest);
	/*   ft_strlcat   */
	printf("\n\n *** ft_strlcat *** \n");
	char dizi_strlcat_src[] = "Ahmet";
	char dizi_strlcat_dest[] = "Mehmet";
	printf("src dizisi \"%s\", dest dizisi \"%s\" \n", dizi_strlcat_src, dizi_strlcat_dest);
	printf("ft_strlcat sonucu: %zu\n", ft_strlcat(dizi_strlcat_dest, dizi_strlcat_src, 9));
	printf("src nin 2 karakter destin arkasına kopyalandı.\"%s\"\n", dizi_strlcat_dest);
	/*   ft_toupper   */
	printf("\n\n *** ft_toupper *** \n");
	printf("input: a --> output: %c\n", ft_toupper('a'));
	printf("\n\n *** ft_tolower *** \n");
	printf("input: A --> output: %c\n", ft_tolower('A'));
	/*   ft_strchr   */
	printf("\n\n *** ft_strchr *** \n");
	char dizi_strchr[] = "Karakabak";
	printf("Dizi : \"%s\" --> ilk \"a\" 'dan sonrası : %s\n", dizi_strchr, ft_strchr(dizi_strchr, 'a'));
	/*   ft_strrchr   */
	printf("\n\n *** ft_strrchr *** \n");
	char dizi_strrchr[] = "Karakabak";
	printf("Dizi : \"%s\" --> son \"a\" 'dan sonrası : %s\n", dizi_strrchr, ft_strrchr(dizi_strrchr, 'a'));
	/*   ft_strncmp   */
	printf("\n\n *** ft_strncmp *** \n");
	char dizi_ncmp_1[] = "Ahmet";
	char dizi_ncmp_2[] = "Ahmyt";
	printf("dizi1: \"%s\", dizi2: \"%s\" --> ilk 4 harf karsilastirilmasi %d\n", dizi_ncmp_1, dizi_ncmp_2, ft_strncmp(dizi_ncmp_1, dizi_ncmp_2, 4));
	/*   ft_memchr   */
	printf("\n\n *** ft_memchr *** \n");
	char dizi_memchr[] = "Karakabak";
	printf("Dizi : \"%s\" --> son \"a\" 'dan sonrası : %s\n", dizi_memchr, (char *)ft_memchr(dizi_memchr, 'a', 5));
	/*   ft_memcmp   */
	printf("\n\n *** ft_memcmp *** \n");
	char dizi_memcmp_1[] = "Ahmet";
	char dizi_memcmp_2[] = "Ahmyt";
	printf("dizi1: \"%s\", dizi2: \"%s\" --> ilk 4 harf karsilastirilmasi %d\n", dizi_memcmp_1, dizi_memcmp_2, ft_memcmp(dizi_memcmp_1, dizi_memcmp_2, 4));
	/*   ft_strnstr   */
	printf("\n\n *** ft_strnstr *** \n");
	char dizi_strnstr_dizi1[] = "Bilgisayar";
	char dizi_strnstr_find1[] = "gi";
	printf("dizi : \"%s\", aranan \"%s\" dizinin ilk 6 karakterinde arama sonucu %s : \n", dizi_strnstr_dizi1, dizi_strnstr_find1, ft_strnstr(dizi_strnstr_dizi1, dizi_strnstr_find1, 6));
	printf("dizi : \"%s\", aranan \"%s\" dizinin ilk 4 karakterinde arama sonucu %s : \n", dizi_strnstr_dizi1, dizi_strnstr_find1, ft_strnstr(dizi_strnstr_dizi1, dizi_strnstr_find1, 4));
	/*   ft_atoi   */
	printf("\n\n *** ft_atoi *** \n");
	char dizi_atoi[] = "  -1566aaa";
	printf("string ifade : \"%s\", sayı hali : %d", dizi_atoi, ft_atoi(dizi_atoi));

	/*   ft_calloc   */
	printf("\n\n *** ft_calloc *** \n");
	char *dizi_calloc;
	dizi_calloc = ft_calloc(1, 6);
	dizi_calloc = "Ahmet";
	printf("diziye calloc ile 6 boyut yazılıp içine \"%s\" yazıldı, \n", dizi_calloc);

	/*   ft_strdup   */
	printf("\n\n *** ft_strdup *** \n");
	char dizi_strdup[] = "Ahmet";
	printf("dizi : \"%s\" ft_strdup fonksiyonu : \"%s\" \n", dizi_strdup, ft_strdup(dizi_strdup));

	printf("\n\n/////**** EXTRA BOLUM ****\\\\\\\\\\ \n\n");
	/*   ft_substr   */
	printf("\n\n *** ft_substr *** \n");
	char dizi[] = "substr function Implementation";
	char *dest = ft_substr(dizi, 7, 12);
	printf("ilk dizi : \"%s\", 7 ile 19 arası olan dizi\"%s\"\n", dizi, dest);
	/*   ft_strjoin   */
	printf("\n\n *** ft_strjoin *** \n");
	char dizi_join1[] = "substr function";
	char dizi_join2[] = "Implementation";
	char *dest_join = ft_strjoin(dizi_join1, dizi_join2);
	printf("dizi1 : \"%s\" ve dizi2 : \"%s\"\nbirleşmiş hali \"%s\"\n", dizi_join1, dizi_join2, dest_join);
	/*   ft_strtrim   */
	printf("\n\n *** ft_strtrim *** \n");
	char dizi_strtrim1[] = "cbabqbc";
	char dizi_strtrim2[] = "xavocadoyz";
	printf("dizi : \"%s\" , atılacaklar \"bc\"  -->%s\n", dizi_strtrim1, ft_strtrim(dizi_strtrim1, "bc"));
	printf("dizi : \"%s\" , atılacaklar \"xyz\"  -->%s\n", dizi_strtrim2, ft_strtrim(dizi_strtrim2, "xyz"));
	/*   ft_split   */
	printf("\n\n *** ft_split *** \n");
	char **a_split;
	char *dizi_split;
	dizi_split = "marhaba.selamlar.mmm";
	a_split = ft_split(dizi_split, '.');
	// a = ft_split("marhaba.selamlar.mmm", '.');
	printf("orginal dizi \"%s\"\n", dizi_split);
	printf("nokta(.) 'dan ayrilan parca 1 : \"%s\"\n", a_split[0]);
	printf("nokta(.) 'dan ayrilan parca 2 : \"%s\"\n", a_split[1]);
	printf("nokta(.) 'dan ayrilan parca 3 : \"%s\"\n", a_split[2]);
	/*   ft_itoa   */
	printf("\n\n *** ft_itoa *** \n");
	char *dizi_itoa;
	int sayi_itoa = -528;
	dizi_itoa = ft_itoa(sayi_itoa);
	printf("girlilen sayi: %d, stringe cevrilen sayi \"%s\"\n", sayi_itoa, dizi_itoa);
	/*   ft_strmapi   */
	printf("\n\n *** ft_strmapi *** \n");
	char dizi_strmapi_a[] = "kkkkk";
	char *dizi_strmapi_b;
	dizi_strmapi_b = ft_strmapi(dizi_strmapi_a, ft_double);
	printf("dizinin orginali : \"%s\" \n", dizi_strmapi_a);
	printf("dizide çift indislere 1 ekleyip tek indislere 1 çıkatrışmışı : \"%s\" \n", dizi_strmapi_b);
	/*   ft_striteri   */
	printf("\n\n *** ft_striteri *** \n");
	char *dizi_striteri;
	dizi_striteri = "abc";
	printf("orginal dizi\"%s\"\n", dizi_striteri);
	printf("dizinin ft_striterli hali : ");
	ft_striteri(dizi_striteri, ft_double_pri);
	printf("\n");
	/*   ft_putchar_fd   */
	printf("\n\n *** ft_putchar_fd *** \n");
	char c_putchar = 'k';
	int f_putchar = open("s1.txt", 1);
	if (f_putchar == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.\nDosyaya yazılan karakter \"%c\"", c_putchar);
	ft_putchar_fd(c_putchar, f_putchar);
	/*   ft_putstr_fd   */
	printf("\n\n *** ft_putstr_fd *** \n");
	char s_putstr[] = "Ahmet";
	int f_putstr = open("s2.txt", 1);
	if (f_putstr == -1)
		printf("Dosya açılamadı lütfen s2.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s2.txt içersine bakınız.\nDosyaya yazılan karakter \"%s\"", s_putstr);
	ft_putstr_fd(s_putstr, f_putstr);
	/*   ft_putendl_fd   */
	printf("\n\n *** ft_putendl_fd *** \n");
	char s_putendl[] = "asdu";
	int f_putendl = open("s3.txt", 1);
	if (f_putendl == -1)
		printf("Dosya açılamadı lütfen s3.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s3.txt içersine bakınız.\nDosyaya yazılan karakter \"%s\"", s_putendl);
	ft_putstr_fd(s_putendl, f_putendl);
	/*   ft_putnbr_fd   */
	printf("\n\n *** ft_putnbr_fd *** \n");
	int sayi_putnbr = -597;
	int f_putnbr = open("s4.txt", 1);
	if (f_putnbr == -1)
		printf("Dosya açılamadı lütfen s4.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s4.txt içersine bakınız.\nDosyaya yazılan karakter %d", sayi_putnbr);
	ft_putnbr_fd(sayi_putnbr, f_putnbr);

	printf("\n\n/////**** BONUS BOLUM ****\\\\\\\\\\ \n\n");
	/*   ft_lstnew   */
	printf("\n\n *** ft_lstnew *** \n");
	char str_lstnew[] = "selam merhaba byy";
	t_list *elem_lstnew;
	elem_lstnew = ft_lstnew((void *)str_lstnew);
	printf("Liste adresi : %p , liste elemanı \"%s\"\n", elem_lstnew, (char *)elem_lstnew->content);

	/*   ft_lstadd_front   */
	printf("\n\n *** ft_lstadd_front *** \n");
	char strs_lstfront[] = "selam";
	t_list *first_listfront;
	t_list *list_listfront;

	first_listfront = ft_lstnew((void *)strs_lstfront);
	list_listfront = ft_lstnew((void *)strs_lstfront);
	printf("\nfirst eleman adresi: %p\n", first_listfront);
	printf("\nlist'in eleman adresi: %p\n", list_listfront);
	ft_lstadd_front(&list_listfront, first_listfront);
	printf("\nlist'in liste başı elaman adresi %p\n", list_listfront);
	printf("\nlistin sonraki yani fonksiyondan önceki adresi, arık kendisi next te oldu : %p\n", list_listfront->next);
	printf("\nfirs'ün next adresi: %p\n", first_listfront->next);

	/*   ft_lstsize   */
	printf("\n\n *** ft_lstsize *** \n");
	t_list *list_lstsize;
	list_lstsize = NULL;
	ft_lstadd_front(&list_lstsize, ft_lstnew("S1"));
	ft_lstadd_front(&list_lstsize, ft_lstnew("S2"));
	printf("liste elemanları: \"%s\", \"%s\"\n", (char *)list_lstsize->content, (char *)list_lstsize->next->content);
	printf("Liste eleman sayısı : %d", ft_lstsize(list_lstsize));

	/*   ft_lstlast   */
	printf("\n\n *** ft_lstlast *** \n");
	t_list *list_lstlast;
	list_lstlast = NULL;
	ft_lstadd_front(&list_lstlast, ft_lstnew("S1"));
	ft_lstadd_front(&list_lstlast, ft_lstnew("S2"));
	printf("liste elemanları; Birincsi :\"%s\", İkincisi :\"%s\"\n", (char *)list_lstlast->content, (char *)list_lstlast->next->content);
	printf("Listenin son elmanı : %s", (char *)ft_lstlast(list_lstlast)->content);

	/*   ft_lstadd_back   */
	printf("\n *** ft_lstadd_back *** \n");
	char strs_lstback[] = "selam";
	t_list *first_listback;
	t_list *list_listback;

	first_listback = ft_lstnew((void *)strs_lstback);
	list_listback = ft_lstnew((void *)strs_lstback);
	printf("\nfirst eleman adresi: %p\n", first_listback);
	printf("\nlist'in eleman adresi: %p\n", list_listback);
	ft_lstadd_back(&list_listback, first_listback);
	printf("\nlist'in liste başı elaman adresi %p\n", list_listback);
	printf("\nlistin sonraki yani fonksiyondan önceki adresi, arık kendisi next te oldu : %p\n", list_listback->next);
	printf("\nfirs'ün next adresi: %p\n", first_listback->next);

	/*   ft_lstdelone   */
	printf("\n *** ft_lstdelone *** \n");
	t_list *list_lstdelone;
	list_lstdelone = NULL;
	ft_lstadd_front(&list_lstdelone, ft_lstnew("S1"));
	ft_lstadd_front(&list_lstdelone, ft_lstnew("S2"));
	ft_lstdelone(list_lstdelone, free_print);

	/*   ft_lstclear   */
	printf("\n *** ft_lstclear *** \n");
	t_list *list_lstclear;
	list_lstclear = NULL;
	ft_lstadd_front(&list_lstclear, ft_lstnew("S1"));
	ft_lstadd_front(&list_lstclear, ft_lstnew("S2"));
	printf("list adresi : %p\n", list_lstclear);
	printf("list->next adresi : %p\n", list_lstclear->next);
	ft_lstclear(&list_lstclear, free_print);
	printf("list adresi : %p\n", list_lstclear);

	/*   ft_lstiter   */
	printf("\n\n *** ft_lstiter *** \n");
	t_list *list_lstiter;
	list_lstiter = NULL;
	ft_lstadd_back(&list_lstiter, ft_lstnew("hello "));
	ft_lstadd_back(&list_lstiter, ft_lstnew("world"));
	printf("Fonksiyondan çıkan yazı:\n");
		 ft_lstiter(list_lstiter, (void (*)(void *))ft_putstr);

	/*   ft_lstmap   */
	printf("\n\n *** ft_lstmap *** \n");
	t_list *list_lstmap;
	list_lstmap = NULL;
	ft_lstadd_back(&list_lstmap, ft_lstnew("hello "));
	ft_lstadd_back(&list_lstmap, ft_lstnew("world"));
	printf("Fonksiyondan çıkan yazı:\n");
		 ft_lstmap(list_lstmap, (void *)ft_putstr, free_print);

	printf("\n\n *** ft_lstmap_2 *** \n");
	t_list *list_mmap; 
	t_list *list_mmap_copy;
	list_mmap = ft_lstnew("list");
	list_mmap_copy = ft_lstmap(list_mmap, ft_return,free_print);
	printf("\nap_2%s", list_mmap_copy->content);
	return (0);
}

char ft_double(unsigned int i, char c)
{
	if (i % 2)
		return (c + 1);
	else
		return (c - 1);
}

void ft_double_pri(unsigned int i, char *c)
{
	if (i % 2)
		printf(" ç_%c", *c);
	else
		printf(" t_%c", *c);
	printf("--");
}

void free_print(void *content)
{
	content = "a";
	printf("free_print fonksiyonu liste atanan eleman eleman %s\n", (char *)content);
}

void ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	*ft_return(void *content)
{
	return (content);
}