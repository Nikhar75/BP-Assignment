//Book Management System In C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
  char bookName[50];
  char author[30];
  int pages;
  float price;
}

int main()
{
  struct library l[100];
  char arNm[30], bookNm[100];
  int i, j, keepcount;
  i = j = keepcount = 0;

  while (j != 6)
  {
    printf("1. Enter 1 to add book information\n");
    printf("2. Enter 2 to display book information\n");
    printf("3. Enter 3 to list all books of given author\n");
    printf("4. Enter 4 to list the title of specified book\n");
    printf("5. Enter 5 to list the count of books in the library\n");
    printf("6. Enter 6 Exit");

    printf("\n\n Select the one option form above number : ");
    scanf("%d", &j);

    switch (j)
    {
    // Add the book details
    case 1:

      printf("Enter the book name = ");
      scanf("%s", l[i].bookName);

      printf("Enter author name = ");
      scanf("%s", l[i].author);

      printf("Enter the pages of book = ");
      scanf("%d", &l[i].pages);

      printf("Enter the price of book = ");
      scanf("%f", &l[i].price);
      keepcount++;

      break;

    case 2:
      printf("you have entered the following information -\n");
      for (i = 0; i < keepcount; i++)
      {
        printf("\t Book Name = %s\n", l[i].bookName);

        printf("\t Author Name = %s\n", l[i].author);

        printf("\t Pages = %d\n", l[i].pages);

        printf("\t Price = %f\n\n", l[i].price);
      }
      break;

    case 3:
      printf("Enter author name : ");
      scanf("%s", arNm);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(arNm, l[i].author) == 0)
          printf("%s %s %d %f", l[i].bookName, l[i].author, l[i].pages, l[i].price);
      }
      break;

    case 4:
      printf("Enter book name : ");
      scanf("%s", bookNm);
      for (i = 0; i < keepcount; i++)
      {
        if (strcmp(bookNm, l[i].bookName) == 0)
          printf("%s \t %s \t %d \t %f", l[i].bookName, l[i].author, l[i].pages, l[i].price);
      }
      break;

    case 5:
      printf("\n No of books in library : %d", keepcount);
      break;
    case 6:
      exit(0);
    }
  }
  return 0;
}
