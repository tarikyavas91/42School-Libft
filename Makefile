# Folders and Names
NAME		= libft.a
SRCSDIR		= srcs
OBJSDIR		= objs
INCLUDES	= incs

SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
					ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
					ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 
OBJS		= $(SRCS:%.c=$(OBJSDIR)/%.o)
	

BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c 
BONUS_OBJS		= $(BONUS:%.c=$(OBJSDIR)/%.o)
# Compiler options
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Bağlama \033[4;1;34m$@\033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[4;1;32m\033[47mBaşarılı!\033[0m 😊"

$(OBJS): $(OBJSDIR)/%.o:%.c
	@mkdir -p $(@D)
	@echo "derleniyor \033[1;31m$<\033[0m"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	@echo "Bağlama \033[4;1;34m$@\033[0m"
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "\033[4;1;32m\033[47mBaşarılı!\033[0m 😊"

$(BONUS_OBJS): $(OBJSDIR)/%.o:%.c
	@mkdir -p $(@D)
	@echo "derleniyor \033[1;31m$<\033[0m"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

#test1: 
#	@echo "Test Dosyası Oluşturuluyor."
#	@$(CC) $(CFLAGS) -I$(INCLUDES) $(TEST) -o main
#	@echo "Test Dosyası Oluşturuldu."

.PHONY: all clean fclean re bonus