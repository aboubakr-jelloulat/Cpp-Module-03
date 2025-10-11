NAME = clapTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJDIR = build

SRC = main.cpp ClapTrap.cpp

OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@
	@echo  "\nCreated executable '$(NAME)'"


# Prerequisites: %.cpp, Makefile, *h
# Order-only prerequisite: $(OBJDIR)

$(OBJDIR)/%.o: %.cpp Makefile *h | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re