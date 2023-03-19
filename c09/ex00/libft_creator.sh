#!/bin/sh

cc -c -Wall -Wextra -Werror -pedantic ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c
# -c permet de creer uniquement les fichiers objets .o (automatiquement cree lorsqu on compile avec gcc et qui disparaissent une fois le programe compile) et de stopper la compilation a cette etape, soit il compile et assemble sans lier
# -pedantic permet de generer un warning si le code ne respecte pas les C standards ( par exemple mettra un warning si on essaie de creer un tableau d int de taille 0, car les standards C disent qu un tableau ne peut avoir une taille 0)
ar -rcs libft.a *.o
# ar est une commande de shell qui permet de creer un fichier archive (les librairies statiques sont des fichiers archives)
# -c est le flag aui demande de creer la librairie si elle n'existe pas
# -r est le flag aui demande d inserer les fichiers objets ou s'ils existent deja de remplacer les anciens par les nouveaux
# -s est un flag aui aurait pu etre remplacer par la commande ranlib + nom de la lib qui permet de creer ou de mettre a jour l index de la librairie que le compilateur utilisera pour aller chercher si le code de la fonction est existant.
