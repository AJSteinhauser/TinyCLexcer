
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

void gen_labels();

void gen_inital(){
    char* header = "global _main\n\nsection .text:\n";
     printf("%s",header);
}

void gen_function(BINARY_TREE node){
    printf("Generating function...");
}


void parseThrough(BINARY_TREE root){
    if (root == NULL){return;}
    //printf("%d", root->ident);
    //if (root->ident == FUNCTION_DEFINITION){
   //     gen_function(root);
    //}
    parseThrough(root->right);
    parseThrough(root->middle);
    parseThrough(root->left);
}

void gen_everything(BINARY_TREE root){
    gen_inital();
    parseThrough(root);
	gen_labels();
}

void gen_returnStatement(){
    char* commands = "mov eax, 0x1\nmov ebx, 0\nint 0x80";
}

void gen_labels(){
    char* dataSection = "section .data:";
    for (int i = 0; i < dataTableSize; i++){
        char* value;
        if (data_table[i]->str!= NULL){
            int newLength = 100 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\n\tmessage%i: db %s\n\tmessage_length%i equ $-message%i\n\n", dataSection,i,data_table[i]->str,i,i);
            dataSection = buffer;
            continue;
        }        
        if (data_table[i]->intV != 0){
            int value = data_table[i]->intV;
            if (data_table[i]->intV == -2148){value = 0;}
            int newLength = 100 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\tint%i\tdq\t%i\n",dataSection,i,value);
            dataSection = buffer;
            continue;
        }
        if (data_table[i]->floatV){
            printf("%f\n\nTESTING2\n",data_table[i]->floatV);
        }
    }
    printf("%s",dataSection);
}
