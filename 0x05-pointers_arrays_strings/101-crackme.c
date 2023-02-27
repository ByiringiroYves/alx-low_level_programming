#include <stdio.h>
#include <string.h>

#define PASSWORD "ThIsIsThEpAsSwOrD"

int main(void) {
  char password[60];
  fgets(password, 60, stdin);

  password[strcspn(password, "\n")] = '\0'; // remove trailing newline

  if (strcmp(password, PASSWORD) == 0) {
    printf("Tada! Congrats\n");
    return 0;
  } else {
    printf("Invalid password\n");
    return 1;
  }
}

