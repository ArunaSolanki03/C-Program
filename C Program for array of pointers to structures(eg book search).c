#include <stdio.h>
#include <stdlib.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    int searchID,i;
    int found;
    struct Book b1={101,"C Programming","Dennis Ritchie"};
    struct Book b2={102,"Data Structure","Mark Weiss"};
    struct Book b3={103,"Operating Systems","Silberschatz"};

    struct Book*books[3]={&b1,&b2,&b3};
    printf("Enter Book ID to search:");
    scanf("%d",&searchID);
    for(i=0;1<3;i++)
    {

        if(books[i]->id==searchID)
        {
            printf("\nBook Found:\n");
            printf("ID:%d\n",books[i]->id);
            printf("Title:%s\n",books[i]->title);
            printf("Author:%s\n",books[i]->author);
            found=1;
            break;
        }
    }
    if(!found)
        printf("\nBook Not Found!\n");
    return 0;
}
