#include <stdio.h>
#include "objects.h"

OBJECT objs[] = {
	{"Entrance", "foyer" , NULL },
	{"Main Hall", "hall" , NULL },
	{"a silver coin", "cent", foyer}
	{"a piece of paper", "dollar", hall}
	{"a shadow guard", "guard", hall}
	{"yourself", "yourself", foyer}
	{"An entrance to Main Hall", "hall entrance", hall}

};