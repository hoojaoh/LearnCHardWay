#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Person_print(struct Person *who)
{
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
 }

int main(int argc, char *argv[])
{
  // make two people structures
  struct Person *joe = Person_create("Joe Alex", 32, 63, 140);
  struct Person *frank = Person_create("Frank Blank", 20, 62, 180);
  // print them out and where they are in memory
  printf("Joe is at memory loacation %p: \n", joe);
  Person_print(joe);

  printf("Frank is at memory location %p: \n", frank);
  Person_print(frank);

  //  struct Person *null = NULL; --> this will lead a segement fault
  //  Person_print(null);
  // make everyone age 20 years and print them agein
  joe->age += 20;
  joe->height -= 2;
  joe->weight += 50;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  // destroy them both so we clean up
  Person_destroy(joe);
  Person_destroy(frank);

}
