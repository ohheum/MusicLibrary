#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct song Song;
typedef struct snode SNode;
typedef struct artist Artist;

struct song {
	Artist *artist;
	char *title;
	char *path;
	int index;
};

struct snode {
	struct snode *next, *prev;
	Song *song;
};

struct artist {
	char *name;
	struct artist *next;
	SNode *head, *tail;
};

void initialize();
void add_song(char *artist, char *title, char *path);
void status();
void load(FILE *fp);
void search_song(char *artist, char *title);
void search_song(char *artist);
void play(int index);
void save(FILE *fp);
void remove(int index);

#endif   // LIBRARY_H