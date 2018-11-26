NAME = libfts.a

SRC_PATH = libfts_src

OBJ_PATH = libfts_obj

SRC = ft_bzero.o\
	  ft_puts.o\
	  ft_strcat.o\
	  ft_isalpha.o\
	  ft_isdigit.o\
	  ft_isalnum.o\
	  ft_isascii.o\
	  ft_isprint.o\
	  ft_toupper.o\
	  ft_tolower.o\
	  ft_strlen.o\
	  ft_memset.o\
	  ft_memcpy.o\
	  ft_strdup.o\
	  ft_cat.o\
	  ft_strjoin.o\
	  ft_strchr.o\
	  ft_putnbr.o\
	  itoa.o\
	  ft_strsplit.o\

CC = nasm -f macho64

SRC_O = $(addprefix $(OBJ_PATH)/,$(SRC))

all: $(NAME)

$(NAME): $(addprefix $(OBJ_PATH)/,$(SRC))
	ar rc $(NAME) $(SRC_O)

$(OBJ_PATH)/%.o:$(SRC_PATH)/%.s
	$(CC) $< -o $@

clean:
	rm -f test
	rm -f basic_test.o
	rm -f $(addprefix $(OBJ_PATH)/,$(SRC))

fclean: clean
	rm -f $(NAME)

re: fclean all

lib: all
	gcc -c -g asm_test/basic_test.c -o basic_test.o
	gcc -g basic_test.o $(NAME) -o test

.PHONY: $(NAME) all %.o clean fclean re flag EXEC