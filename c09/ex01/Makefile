OBJS = $(SRC:.c=.o)
SRC	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INC_DIR	= includes
NAME	= libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

#Explication:
# La regle all appelle la regle NAME qui appelle la regle OBJS, la variable OBJS etant definie ainsi(cf premiere lg) elle appelle implicitement la regle %.o:%.c est executera la commande de la regle pour chaque fichier .c
# $@ = nom de la regle(target name) soit ce qui se trouve avant le :
# $< = nom de la premiere dependance de la regle soit la premiere dependance apres le :
# $^ = toutes les dependances de la regle soit tout ce qui est apres le :


# le flag -c avec gcc permet de creer uniquement les fichiers objets .o (automatiquement cree lorsqu on compile avec gcc et qui disparaissent une fois le programe compile) et de stopper la compilation a cette etape, soit il compile et assemble sans lier
# le flag -I avec gcc permet d inclure les fichiers contenus dans le directory qui suit le flag


# ar est une commande de shell qui permet de creer un fichier archive (les librairies statiques sont des fichiers archives)
# -c est le flag qui demande de creer la librairie si elle n'existe pas
# -r est le flag qui demande d inserer les fichiers objets ou s'ils existent deja de remplacer les anciens par les nouveaux
# -s est un flag qui aurait pu etre remplacer par la commande ranlib + nom de la lib qui permet de creer ou de mettre a jour l index de la librairie que le compilateur utilisera pour aller chercher si le code de la fonction est existant.


# la commande ar -t + librairie  permet de savoir quels sont les fichiers objets contenus par cette derniere


# le flag -f avec rm permet d ignorer si le fichier n est pas present et donc de ne pas avoir de message d erreur dans le cas ou ce dernier est absent


# cc -Wall -Wextra -Werror main.c -L. -lft
# -L. : -L le flag indiquant le chemin ou se trouvfe la library (libft.a) soit . c est a dire le dossier courant
# -lft : l pour le prefixe lib, ft car apres le prefixe lib on l a appele ft, et le .a est sous entendu

# attention -L. et -lft doivent se trouver apres test.c pour que la compilation reussisse

# On peut utiliser la commande " ar -t nom_de_la_library.a " pour avoir la liste des fichiers objets inclus dans la library
