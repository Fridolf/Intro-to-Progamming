#include <stdio.h>
#include "objects.h"
#include "misc.h"

static void moveObject(const char *noun, OBJECT *from, OBJECT *to)
{
	OBJECT *obj = parseObject(noun);
	if (obj == NULL)
	{
		printf("That item doesn't exist.\n");
	}
	else if (from != obj->location)
	{
		printf("Don't even try it.\n");
	}
	else if (to == NULL)
	{
		printf("There is no one here to give that to.\n");
	}
	else
	{
		obj->location = to;
		printf("Alright.\n");
	}
}

void executeGet(const char *noun)
{
	moveObject(noun, player->location, player);
}

void executeDrop(const char *noun)
{
	moveObject(noun, player, player->location);
}

void executeGive(const char *noun)
{
	moveObject(noun, player, personHere());
}

void executeAsk(const char *noun)
{
	moveObject(noun, personHere(), player);
}

void executeInventory(void)
{
	if (listObjectsAtLocation(player) == 0)
	{
		printf("You don't have anything.\n");
	}
}