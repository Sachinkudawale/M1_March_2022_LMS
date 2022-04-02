
#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * structure for Book Record
 */
typedef struct library
{
    int book_id;
    char book_name[50];
    char author_name[50];
}book;

/**
 * return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 *  function to find a book by its id
 * param id 
 * return test_values 
 */
test_values searchbook(int id);

/**
 * function to add new books to the library
 * 
 * test_values 
 */
test_values addition(int id,char name[],char author[]);

/**
 *  funtion to denote discarded books
 * 
 * param id 
 * return test_values 
 */
test_values deletebook(int id);

/**
 *  function to view all the books
 * 
 * return  test_values 
 */
test_values issuebook(int id);

/**
 * function to issue the books
 * 
 * return test_values 
 */
test_values viewbook(void);

#endif
