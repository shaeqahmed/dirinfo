#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  printf("\n");
  DIR* dir = opendir(".");
  if (errno) printf("Error #%d, %s\n", errno, strerror(errno));
  struct dirent* dirc; struct stat data;
  int size = 0;
  while (dirc = readdir(dir)) {
    (opendir(dirc->d_name)) ? ( 
      printf("Directory: %s\n", dirc->d_name) 
    ) : ( 
      stat(dirc->d_name, &data), 
      size += data.st_size, 
      printf("     File: %s\n", dirc->d_name) 
    );
  }
  printf("\nSize of Directory: %d bytes\n",size);
  return 0;
}
