

#define SYMBOL_TABLE_SIZE 	50
#define SYMBOL_LENGTH 		15

#include <string.h>

char* tokenString;
int tokenInt;
float tokenFloat;

struct treeNode{//Jk i made it trinary instead : )
	int item;
	int ident;
	struct treeNode *left;
	struct treeNode *middle;
	struct treeNode *right;
};

typedef struct treeNode TREE_NODE;
typedef TREE_NODE *BINARY_TREE;

BINARY_TREE newNode(int, int, BINARY_TREE, BINARY_TREE, BINARY_TREE);
int addDataObject_str(char* obj);
void print_tree(BINARY_TREE b);


struct symbolNode{
	char* identifier;
};

typedef struct symbolNode SYMBOL_NODE;
typedef SYMBOL_NODE *SYMBOL_NODE_PTR;

SYMBOL_NODE_PTR symbol_table[SYMBOL_TABLE_SIZE];
int symbolTableSize = 0;

struct dataNode{
    char *str;
    int intV;
    float floatV;
};

typedef struct dataNode DATANODE;
typedef DATANODE *DATA_NODE_PTR;

DATA_NODE_PTR data_table[SYMBOL_TABLE_SIZE];
int dataTableSize = 0;

int addSymbol(char* obj){
	 //symbol_table[symbolTableSize] = (SYMBOL_NODE_PTR)malloc(sizeof(SYMBOL_NODE_PTR)); 
	// symbol_table[symbolTableSize]->identifier = obj;
	//printf("%s",obj);
	 symbolTableSize++;
	 return symbolTableSize-1;
}

void printAllSymbols(){
	//for (int i = 0; i < symbolTableSize; i++){
	//	printf("%s\n",symbol_table[i]->identifier);
	//}
}

int addDataObject_str(char* obj){
    data_table[dataTableSize] = (DATA_NODE_PTR)malloc(sizeof(DATA_NODE_PTR)); 
    data_table[dataTableSize]->str = strdup(obj);
    dataTableSize++;
    return dataTableSize-1;
}

int addDataObject_int(char* obj){
    data_table[dataTableSize] = (DATA_NODE_PTR)malloc(sizeof(DATA_NODE_PTR)); 
	int value = (atoi(obj));
	if (value == 0){
		value = -2148;
	}
    data_table[dataTableSize]->intV = value;

    dataTableSize++;
    return dataTableSize-1;
}


int addDataObject_float(char* obj){
    data_table[dataTableSize] = (DATA_NODE_PTR)malloc(sizeof(DATA_NODE_PTR)); 
    //data_table[dataTableSize]->floatV = atof(obj);
    dataTableSize++;
    return dataTableSize-1;
}

char* itoa(int val){
	int base = 10;
	static char buf[32] = {0};
	int i = 30;
	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];
	return &buf[i+1];
}


enum ParseTreeNodeType{
	PROGRAM = 0, 
	FUNCTION_DEFINITION_LIST = 1,
	FUNCTION_DEFINITION = 2,
	FUNCTION_BODY = 3,
	FUNCTION_STATEMENT_LIST = 4,
	VARIABLE_DEFINITION_LIST = 5,
	VARIABLE_DEFINITION = 6,
	FUNCTION_PARAMETER_LIST = 7,
	FUNCTION_PARAMETER = 8,
	RETURN_TYPE = 9,
	STATEMENT = 10,
	EMPTY_STATEMENT = 11,
	BLOCK_STATEMENT = 12,
	STATEMENT_LIST = 13,
	RETURN_STATEMENT = 14,
	WHILE_STATMENT = 15,
	IF_STATEMENT = 16,
	ASSIGNMENT_STATEMENT = 17,
	EXPRESSION = 18,
	COMPARISON_EXPRESSION = 19,
	ADDITIVE_EXPRESSION = 20,
	MULTIPLICATIVE_EXPRESSION = 21,
	UNARY_EXPRESSION = 22,
	FUNCTION_CALL = 23,
	FUNCTION_ARG_LIST = 24,
	PRIMARY_EXPRESSION = 25,
	CONSTANT = 26
};



