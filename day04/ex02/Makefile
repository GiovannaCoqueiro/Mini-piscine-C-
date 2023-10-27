NAME = ex01
FILES = srcs/Main.cpp \
		srcs/Secretary.cpp \
		srcs/NeedMoreClassRoomForm.cpp \
		srcs/NeedCourseCreationForm.cpp \
		srcs/SubscriptionToCourseForm.cpp \
		srcs/Headmaster.cpp \
		srcs/Form.cpp \
		srcs/CourseFinishedForm.cpp
OBJS = $(FILES:.c=.o)
INC = $(INCLUDE)/Courses $(INCLUDE)/enum $(INCLUDE)/Forms $(INCLUDE)/People $(INCLUDE)/Rooms
INCLUDE = -I./include
RM = rm -f
CC = c++
FLAGS = -Wall -Wextra -Werror -g $(INC)
VALGRIND = valgrind --quiet --leak-check=full --show-leak-kinds=all --track-origins=yes --tool=memcheck
GREEN = \033[1;32m
RED = \033[0;36m
BLUE = \033[0;31m
NO_COLOR = \033[0m

all: $(NAME)
	@echo "$(GREEN)SUCCESS!!$(NO_COLOR)"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

run: all
	@./$(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)BUILD DIRECTORY CLEAN!$(NO_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BLUE)BINARY DESTROYED!$(NO_COLOR)"

re: fclean all

.PHONY: all ren val clean fclean re