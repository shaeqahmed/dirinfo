#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>

int getdirinfo(const char *name, int n){
  DIR* dir = opendir(name);
 // if (errno) printf("Error #%d, %s\n", errno, strerror(errno));
  struct dirent* dirc; struct stat data;
  int size = 0;
  if (n==0) printf("---------------------DIRECTORY-----------------------\n");
  while (dirc = readdir(dir)) {
    (opendir(dirc->d_name)) ? ( 
       (strcmp(".",dirc->d_name) != 0 && strcmp(dirc->d_name, "..") != 0)? printf("  %*s", (n*4), " "),printf("Directory: %s\n", dirc->d_name), getdirinfo(dirc->d_name,n+1) : 1
    ) : ( 
      stat(dirc->d_name, &data), 
      size += data.st_size, 
      printf("  %*s|", (n*4), " "),
      printf("File: %s\n", dirc->d_name) 
    );
  }
  if (n == 0) printf("  |Size of Directory: %d bytes\n",size);
  return size;
}
int main() {
  getdirinfo(".", 0);
  return 0;
}
