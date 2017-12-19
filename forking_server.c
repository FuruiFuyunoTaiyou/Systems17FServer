#include "pipe_networking.h"
#include <signal.h>

void process(char *s);
void subserver(int from_client);

static void sighandler(int signo) {
  if (signo == SIGINT) {
    remove("luigi");
    exit(0);
  }
}

int main() {
  signal(SIGINT, sighandler);

  int from_client;
  
  from_client = server_setup();
  
  
  
}

void subserver(int from_client) {
  
}

void process(char * s) {
  while(*s){
    *s = toupper((unsigned char)*s);
    s++;
  }
}
