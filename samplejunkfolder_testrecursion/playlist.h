#ifndef PLAY_LIST_H
#define PLAY_LIST_H
#include "song_node.h"

song_node *table[26];

void add_song(char name[], char artist[]); 
song_node * search(char name[], char artist[]); 
song_node * search_by_artist(char artist[]); 
void print_by_artist(char artist[]);
void print_entries(char letter);
void print_album(); 
void shuffle(int i);
void delete_song(char name[], char artist[]); 
void delete_playlist(); 

#endif
