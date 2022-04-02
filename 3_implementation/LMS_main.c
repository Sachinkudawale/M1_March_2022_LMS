#include"library_Managment_system.h"

int main()
{
    
    int id,choice,success; 
    
    char name[20],authorname[20];
    
        

    printf("\n  MAIN MENU ");
    printf("\n 1. Add Books");
    printf("\n 2. Delete books");
    printf("\n 3. View Books");
    printf("\n 4. Search book");
    printf("\n 5. Issue books");
    printf("\n 6. Close Application");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nBookId: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nBook name:");
        
	scanf("%19s",name);
       printf("Authorname: ");
        fflush(stdin);
        
	scanf("%19s",authorname);
        success=addition(id,name,authorname);
        break;
        case 2:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=deletebook(id);
        break;
        case 3:
        success=viewbook();
        break;
        case 4:
        printf("\nBookId:");
        scanf("%d",&id);
        success=searchbook(id);
        break;
        case 5:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=issuebook(id);
        break;
        case 6:
        printf("\n");
        exit(1);
        default:
        printf("\nInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}
