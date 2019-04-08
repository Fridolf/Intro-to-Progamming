typedef struct object {
	const char *description;
	const char *tag;
	struct object *location;
	struct object *destination
} OBJECT;

extern OBJECT objs[];

#define foyer		(objs + 0)
#define hall		(objs + 1)
#define dollar		(objs + 2)
#define cents		(objs + 3)
#define guard		(objs + 4)
#define player		(objs + 5)
#define exitFoyer	(objs + 6)
#define intoFoyer	(objs + 7)
#define intoHall	(objs + 8)
#define exitHall	(objs + 9)

#define endOfObjs	(objs + 10)