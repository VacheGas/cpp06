NAME = ex03

CXX = c++

SRCS =	$(wildcard *.cpp)

INCLUDE = -I$(INCS_DIR)

FLAGS = -Wall -Wextra -Werror

OBJS 		= 	$(patsubst %.cpp, %.o, $(SRCS))

%.o :	%.cpp 
	@echo "Compiling: $<"
	@$(CXX) $(FLAGS) -c $< -o $@


$(NAME): $(OBJS)
	@$(CXX) -g -fsanitize=address $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(wildcard *.o)"
	@rm -rf $(wildcard *.o)

fclean: clean
	@echo "Cleaning: $(wildcard *.o)"
	@rm -f $(wildcard *.o) $(NAME)

re: fclean all


