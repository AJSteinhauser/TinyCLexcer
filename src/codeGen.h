
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


void gen_labels();

void gen_inital(){
    char* header = "global _main\n\nsection .text:\n";
     printf("%s",header);
}

void gen_function(BINARY_TREE node){
    printf("_%s\n", symbol_table[node->item]->identifier);
}


void parseThrough(BINARY_TREE root){
    if (root == NULL){return;}
    if (root->ident == FUNCTION_DEFINITION){
        gen_function(root);
    }
    printf("L:%s\nR:%s\nM:%s\n", root->left,root->right,root->middle);
    parseThrough(root->left);
    parseThrough(root->middle);
    parseThrough(root->right);
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
    char* dataSection = "section .data";
    for (int i = 0; i < dataTableSize; i++){
        char* value;
        if (data_table[i]->str!= NULL){
            int newLength = 100 + strlen(dataSection);
            char *buffer = malloc(newLength);
            sprintf(buffer,"%s\n\tmessage%i %s\n\tmessage_length%i equ $-message%i\n\n", dataSection,i,data_table[i]->str,i,i);
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
