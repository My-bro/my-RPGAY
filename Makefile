##
## EPITECH PROJECT, 2023
## B-MUL-200-PAR-2-1-myrpg-alexandre.molina
## File description:
## Makefile
##

BASIC_LIB =     lib/lib_basic/str_function/my_strlen.c\
                lib/lib_basic/str_function/my_strcmp.c\
                lib/lib_basic/str_function/buffer_maker.c\
                lib/lib_basic/pars_function/pars_the_path_init.c\
                lib/lib_basic/pars_function/cdstl_2.c \
                lib/lib_basic/pars_function/pars_the_path.c\
                lib/lib_basic/linked_list_function/add_node.c\

RPG_LIB =       lib/lib_rpg/lib_sprite/set_sprite.c\
                lib/lib_rpg/lib_sprite/check_event.c\
                lib/lib_rpg/lib_sprite/check_event_axis.c\
                lib/lib_rpg/lib_sprite/init_clock.c\
                lib/lib_rpg/lib_sprite/init_values.c\
                lib/lib_rpg/lib_sprite/move_sprite.c\
                lib/lib_rpg/lib_sprite/check_direction_input.c\
                lib/lib_rpg/lib_view/set_came.c\
                lib/lib_rpg/lib_view/init_view_struct.c\
                lib/lib_rpg/lib_view/move_view.c\
                lib/lib_rpg/lib_colision/check_colision.c\
                lib/lib_rpg/lib_colision/get_pixel_colision.c\
                lib/lib_rpg/lib_colision/reset_colision.c\
                lib/lib_rpg/lib_config_file/init_sprite_config.c\
                lib/lib_rpg/lib_config_file/draw_config_file.c\
                lib/lib_rpg/lib_config_file/init_door_config.c\
                lib/lib_rpg/lib_record/record_mic.c\
                lib/lib_rpg/lib_music/init_music.c\
                lib/lib_rpg/lib_winopen/draw_every_layer.c\
                lib/lib_rpg/lib_winopen/init_every_struct.c\
                lib/lib_rpg/lib_winopen/move_case.c\
                lib/lib_rpg/lib_winopen/reset_direction_bool.c\
                lib/lib_rpg/lib_winopen/correction_position.c\
                lib/lib_rpg/lib_winopen/winopen.c\
                lib/lib_rpg/lib_door/check_door_case.c\
                lib/lib_rpg/lib_door/teleport_door_sprite.c\
                lib/lib_rpg/lib_door/teleport_door_cam.c\
                main.c

OBJ = $(BASIC_LIB:.c=.o) $(RPG_LIB:.c=.o)

NAME = prog

CFLAGS = -Wno-deprecated-declarations

CPPFLAGS = -iquote Include

LDFLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -lm

all:    $(NAME)

$(NAME) :       $(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ) *~

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
