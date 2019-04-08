#include <stdio.h>
#include <string.h>
#include "objects.h"
#include "misc.h"

struct location {
	const char *description;
	const char *tag;
};
const char *locs[] = {
	"Main Hall", "Headmaster's office",
	"Lounge", "Classroom"
};

#define numberOfLocations = (size of(locs) / sizeof(*locs))

static unsigned locationOfPlayer = 0;

void executeLook(const char *noun)
{
	if (noun != NULL && strcmp(noun, "around") == 0)
	{
		printf("You are in %s. \n", player->location->description);
		listObjectsAtLocation(player->location);
	}
	else
	{
		printf("What you see is what you get. \n");
	}
}

void executeGo(const char *noun)
{
	OBJECT *obj = parseObject(noun);
	if (obj == NULL)
	{
		printf("That place doesn't exist...yet.\n");
	}
	else if (obj == player->location)
	{
		printf("You must be joking right?\n");
	}
	else
	{
		printf("Alright then.\n");
		player->location = obj;
		executeLook("around");
	}
}