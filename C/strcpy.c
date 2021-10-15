#include <stdio.h>
#include <string.h>

int main() {

char strdata1[50], strdata2[50];

printf("Enter a string: ");

fgets(strdata1, 50, stdin);

printf("The original string value: %s", strdata1);

strcpy(strdata2, strdata1);

printf("The copied string value: %s", strdata2);

return 0;
}
