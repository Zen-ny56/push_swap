NAME = push_swap

SRCS = $(wildcard src/*.c utils/*.c)

OBJ = ${SRCS:.c=.o}
CH_OBJ = ${OBJ:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iheader -g

RM = rm -rf

all: ${NAME} ${CHECK}
${NAME}: ${OBJ}
		@${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${CHECK}: ${CH_OBJ}
		@${CC} ${CFLAGS} ${CH_OBJ} -o ${CHECK}

clean:
		@${RM} ${OBJ}
		@${RM} ${CH_OBJ}

fclean: clean
		@${RM} ${NAME}
		@${RM} ${CHECK}

re: fclean all

.PHONY: all clean fclean re
