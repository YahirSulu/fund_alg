#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct USER {
    unsigned long int id;
    char* name;
    char* password;
    char* info;
    user* nextUser;
}user;

user* createUser(char* name, char* password, char* info){
    user* newUserNode = (user*)malloc(sizeof(user));
    newUserNode->id = rand()%200000;
    newUserNode->name = name;
    newUserNode->password = password;
    newUserNode->info =  info;
    newUserNode->nextUser = NULL;
    return newUserNode;
}

void addUser(user** userList, user* aUserToadd){
    if ( *userList == NULL) {
        return;
    }
    if ( (*userList)->nextUser == NULL ) {
        (*userList)->nextUser =  aUserToadd;
    };
}

