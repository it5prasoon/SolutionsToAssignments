#include<stdio.h>
#include<stdlib.h>
int a[20];
int m,n,p,ELEM,i,j,key,POS,temp;
void create();
void display();
void insert();
void del();
int main()
{
        char choice;
        do{
                printf("Menu\n");
                printf("1.Create\n");
                printf("2.Display\n");
                printf("3.Insert\n");
                printf("4.Delete\n");
                printf("5.Exit\n");
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:         create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        insert();
                                        break;

                        case 4:
                                        del();
                                        break;
                        case 5:
                                        exit(0);
                                        break;
                        default:
                                        printf("\nInvalid choice:\n");
                                        break;
                }
        }while(choice!=4);
return 0;
}
void create()
{
        printf("\nEnter the size of the array elements:\t");
        scanf("%d",&n);
        printf("\nEnter the elements for the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
}
void display()
{
        int i;
        printf("\nThe array elements are:\n");
        for(i=0;i<n;i++){
                 printf("%d\t",a[i]);
         }
         printf("\n");
 }
void insert()
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d",&POS);
    printf("\nEnter the element to be inserted :\t");
    scanf("%d",&ELEM);
    for(i=n-1;i>=POS;i--)
        {
                a[i+1]=a[i];
        }
        a[POS]=ELEM;
        n=n+1;
}


void del()
{
        printf("\nEnter the position of the element to be deleted:\t");
        scanf("%d",&POS);
        ELEM=a[POS];
        for(i=POS;i<n-1;i++)
        {
                a[i]=a[i+1];
        }
        n=n-1;
        printf("\nThe deleted element is =%d",ELEM);
}
