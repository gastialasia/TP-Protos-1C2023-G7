#ifndef EMAIL_H
#define EMAIL_H

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pop3nio.h"

//Estructura para procesar mails al entrar al pasar a TRANSACTION
struct mail_t{
    char * filename;
    char marked_del; //flag para borrar el mail
    size_t size;
};

DIR* open_maildir(struct pop3* p3, char* path);

char* read_mail(DIR* directory, struct pop3* p3, char* path);

void load_mails(struct pop3* p3);

#endif