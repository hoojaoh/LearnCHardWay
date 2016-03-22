#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 

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
	return 0;
}
