#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "playlist.h"

int main(){ 
  //new table of linked list  
  printf("Starting a sick playlist!!\n");
  printf("-------------------------------\n");
  add_song("like a rolling stone","bob dylan");
  add_song("satisfaction","rolling stones");
  add_song("imagine","john lennon");
  add_song("what's going on","marvin gaye");
  add_song("respect","aretha franklin");
  add_song("good vibrations","beach boys");
  add_song("johnny b. goode","chuck berry");
  add_song("hey jude","beatles");
  add_song("all star","smash mouth");
  add_song("smells like teen spirit","nirvana");
  add_song("what'd i say", "ray charles");
  add_song("my generation","who");
  add_song("a change is gonna come","same cooke");
  add_song("yesterday","beatles");
  add_song("london calling","the clash");
  add_song("i want to hold your hand","beatles");
  add_song("purple haze","jimmy hendrix");
  add_song("hound dog","elvis presley");
  add_song("in my life","beatles");
  add_song("here come dat boi","a e s t h e t i c");
  add_song("people got ready","depression");
  add_song("god only knows","beach boys");
  add_song("bo diddley","bo diddley");
  add_song("california girls","beach boys");
  add_song("superstition","stevie wonder");
  print_album();
  printf("-------------------------------\n");
  
  //song search function
  printf("searching for a song...:\n");
  print_song(search("california girls","beach boys"));
  printf("-------------------------------\n");
  
  //search by artist function
  printf("searching for artist...:\n");
  print_song(search_by_artist("beatles"));
  printf("-------------------------------\n");
  
  //print entries under certain letter
  char letter = 'b';
  printf("printing all entries under %c...:\n",letter);
  print_entries(letter);
  printf("-------------------------------\n");
  
  //print all songs by artist
  char artist[] = "beatles";
  printf("printing all songs by %s...:\n",artist);
  print_by_artist(artist);
  printf("-------------------------------\n");
  
  //shuffle function
  printf("testing shuffle...:\n");
  shuffle(10);
  printf("-------------------------------\n");
  
  char song[] = "in my life";
  char art[] = "beatles";
  //testing delete song function
  printf("testing delete song...: %s by %s\n",song,art);
  delete_song("in my life","beatles");
  printf("-------------------------------\n");
  
  //testing free nodes function
  printf("freeing nodes...:\n");
  delete_playlist();
  printf("-------------------------------\n");
  
  //song_node structure
  //////////////////////////////////////////////////////////////  
  srand(time(NULL));
  //new linked list
  song_node * song_list = (song_node *)malloc(sizeof(song_node));
  //initialize album
  strcpy(song_list->name, "coderpad");
  strcpy(song_list->artist, "zcoderman");
  song_list->next = NULL;
  //testing insert_order function
  song_list = insert_order(song_list, "youngmoney","shaeq");
  song_list = insert_order(song_list, "blues", "anthony");
  song_list = insert_order(song_list, "chill", "shadman");
  song_list = insert_order(song_list, "cat", "mouse");
  printf("original album:\n");
  print_list(song_list);
  printf("-------------------------------\n");
  
  //testing size function
  printf("size of album:\n");
  printf("%i\n",size(song_list));
  printf("-------------------------------\n");
  //testing random song function
  printf("pointer to a random song:\n");
  print_song(random_song(song_list));
  printf("-------------------------------\n");
  printf("another pointer to a random song:\n");
  print_song(random_song(song_list));
  printf("-------------------------------\n");
    
  //testing song search function
  printf("searching for a song...:\n");
  print_song(song_search(song_list,"youngmoney"));
  printf("-------------------------------\n");
  printf("searching for another...:\n");
  print_song(song_search(song_list,"chill"));
  printf("-------------------------------\n");
  
  //testing song search by artist function
  printf("searching for first song by artist...:\n");
  print_song(song_search_by_artist(song_list,"anthony"));
  printf("-------------------------------\n");
  printf("searching for another song by artist...:\n");
  print_song(song_search_by_artist(song_list,"shaeq"));
  printf("-------------------------------\n");
  
  //testing remove song function
  printf("removing a song...:\n");
  print_list(remove_song(song_list,"shadman"));
  printf("-------------------------------\n");
  printf("removing another song...:\n");
  print_list(remove_song(song_list,"chill"));
  printf("-------------------------------\n");
  
  //testing free list function
  printf("freeing album...:\n");
  song_list = free_list(song_list);
  printf("%s",song_list);

  return 0;
}
