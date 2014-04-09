s/*
 * shm-client - client program to demonstrate shared memory.
 */

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <ctype.h>
#define SHMSZ     27

main()
{
    int shmid,i;
    key_t key;
    char *shm, *s,*addr;

    /*
     * We need to get the segment named
     * "5678", created by the server.
     */
   // key = 5678;
 if ((key = ftok("server.c", 'R')) == -1) {
        perror("ftok");
        exit(1);
    }

    /*
     * Locate the segment.
     */
    if ((shmid = shmget(key, SHMSZ, 0666)) < 0) {
        perror("shmget");
        exit(0);
    }

    /*
     * Now we attach the segment to our data space.
     */
    if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) {
        perror("shmat");
        exit(1);
    }

    /*
     * Now read what the server put in the memory.
     */
s=shm;
if(*s=='\0')
printf("enter some data in shared memory segment through a process \"server.c\"\n");else{
 for (i = 0; s[i]; i++)
  s[i] = toupper(s[i]);
    printf("%s\n",s);

    /*
     * Finally, change the first character of the 
     * segment to '*', indicating we have read 
     * the segment.
     */
      while(*shm!='\0')
    {*shm = '*';
shm++;}
//shmdt(shm);
    exit(0);
}}















#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024  /* make it a 1K shared memory segment */

int main(int argc, char *argv[])
{
    key_t key;
    int shmid;
    char *data;
    int mode;

    if (argc > 2) {
        fprintf(stderr, "usage: shmdemo [data_to_write]\n");
        exit(1);
    }

    /* make the key: */
    if ((key = ftok("server.c", 'R')) == -1) {
        perror("ftok");
        exit(1);
    }

    /* connect to (and possibly create) the segment: */
    if ((shmid = shmget(key, SHM_SIZE, 0644 | IPC_CREAT)) == -1) {
        perror("shmget");
        exit(1);
    }

    /* attach to the segment to get a pointer to it: */
    data = shmat(shmid, (void *)0, 0);
    if (data == (char *)(-1)) {
        perror("shmat");
        exit(1);
    }
  *data='\0';
    /* read or modify the segment, based on the command line: */
    if (argc == 2) {
        printf("writing to segment: \"%s\"\n", argv[1]);
        strncpy(data, argv[1], SHM_SIZE);
    } else
        printf("segment contains: \"%s\"\n", data);

    /* detach from the segment: */
  //  if (shmdt(data) == -1) {
 //       perror("shmdt");
 //       exit(1);
//    }
  if(*data=='*')
  printf("%s\n",data);

    return 0;
}
