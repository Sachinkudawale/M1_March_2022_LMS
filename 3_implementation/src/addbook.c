#include"library_Managment_system.h"

test_values addition(int id,char name[],char author[])
{
    
    
    
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","ab+");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        book *newbook = NULL;
        newbook = malloc(sizeof(book));
		
        newbook->book_id = id;
        strcpy(newbook->book_name,name);
        
    

    strcpy(newbook->author_name,author);
    
    fwrite(newbook,sizeof(book),1,fp);
    fclose(fp);
    free(newbook);
    
    
    return pass;
    }

}
