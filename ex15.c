#include <stdio.h>

int main(int argc, char *argv[])
{
  // create two arrays we care about
  int ages[] = {23, 53, 12, 59, 3};
  char *names[] = {
    "Alan", "Frank",
    "Mary", "John", "Lisa"
  };

  // safely get the size of ages
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way using indexing
  for(i = 0; i < count; i++) {
    printf("%s is %d years old.\n",
           names[i], ages[i]);
  }

  printf("------\n");

  // setup the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;


  // seecond way using pointers
  for(i = 0; i < count; i++) {
    printf("%s is %d years old in world.\n",
           *(cur_name + i), *(cur_age + i));
  }

  printf("------\n");

  // third way, pointers are just arrays
  for(i = 0; i < count; i++) {
    printf("%s lives %d years.\n",
           cur_name[i], cur_age[i]);
  }

  printf("------\n");
  // fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages;
      (cur_age - ages) < count;
      cur_name++, cur_age++)
    {
      printf("%s has %d ages.\n",
             *cur_name, *cur_age);
    }

  printf("------\n");
  // size of pointer and array
  printf("size of pointer: %ld\n", sizeof(cur_age));
  printf("size of array: %ld\n", sizeof(ages));
  printf("------\n");
  //  cur_age = (int *)names;
  //  printf("%d\n", cur_age[0]);
  printf("------\n");
  for(i = 0; i < count; i++) {
    printf("address of int array: %p\n", &ages[i]);
  }
  printf("------\n");
  for(i = 0; i < count; i++) {
    printf("address of char array: %p\n", &names[i]);
  }
  printf("------\n");
  for(i = 0; i < count; i++) {
    printf("address of int pointer: %p\n", &cur_age[i]);
  }
  printf("------\n");
  for(i = 0; i < count; i++) {
    printf("address of char pointer: %p\n", &cur_name[i]);
  }
  printf("------\n");
  printf("char pointer address: %p\n", cur_name);
  printf("char array address: %p\n", names);
  return 0;
}
