#include<stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

	for(i = 0; i < argc; i++){
		printf("arg %d : %s \n", i, argv[i]);
	}

	char *states[] = {
		NULL, "Oregon", "Washington", "Texas"};
	int num_states = 4;
        // states[1] = argv[2]; // if there is no argv[2] , then messy code
        // argv[1] = states[3]; // doesn't matter, we can can change argv
	for(i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}
        printf("another argv: %s\n", argv[1]);

        char *arg[] = {"ABC", "DEF", "OPQ"};
        printf("%s\t%s\t%s\n", arg[0], arg[1], arg[2]);
        printf("%d\n", *arg[0]);
        printf("%c\t%c\t%c\n", *arg[0], *arg[1], *arg[2]);
        printf("%d\t%d\t%d\n", arg[0][1], arg[1][2], arg[2][0]);
        //        printf("%d\t%d\t%d\n", *arg[0][1], *arg[1][2], *arg[2][0]); // error
	return 0;
}
