NAME = push_swap

LIBFTNAME = libft.a
LIBFTPATH = ./libft/

SRCS = srcs/main.c \
		srcs/argv_parsing.c \
		srcs/argv_check.c \
		srcs/algo.c \
		srcs/free.c \
		srcs/algo_spe.c \
		srcs/swap_sa.c \
		srcs/swap_ra.c \
		srcs/swap_rb.c \
		srcs/swap_rr.c \
		srcs/swap_rra.c \
		srcs/swap_rrb.c \
		srcs/swap_rrr.c \
		srcs/swap_pa.c \
		srcs/swap_pb.c \
		srcs/swap_ss.c \
		srcs/swap_sb.c

CFLAGS =-Wall -Werror -Wextra
DEBUG = -g -O0

OBJS = $(*.o)

all: $(NAME)

${NAME}:
	make -C ${LIBFTPATH}
	mv $(LIBFTPATH)${LIBFTNAME} ${LIBFTNAME}
	${CC} ${CFLAGS} ${DEBUG} ${SRCS} ${LIBFTNAME} -o ${NAME}

clean:
	rm -rf *.o

fclean:clean
	rm -rf $(MLXNAME) $(LIBFTNAME) $(OBJ) $(NAME) 

re: fclean all