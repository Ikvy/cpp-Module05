SRCS	= main.cpp \
		  Bureaucrat.cpp

OBJS	=  ${SRCS:.cpp=.o}

NAME	= ex00
CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
		${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
