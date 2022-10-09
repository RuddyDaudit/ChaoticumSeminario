#include "string.h"
#include "crypto.h"
#include <stdlib.h>
#include "stdio.h"
#include "blockchain.h"

struct blockchain
{
	unsigned char prevHash[256];
	int blockData;
	struct blockchain *link;	
}*head;

//SHA256(src,size,destination)
//src et destination sont des unsigned char*

void addBlock(int data){
	if(head==NULL){
		head = malloc(sizeof(struct blockchain));
		sha256("",sizeof(""),head->prevHash);
		head->blockData = data;
		return;
	}
	struct blockchain *currentBlock = head;
	while(currentBlock->link)
		currentBlock=currentBlock->link;
	struct blockchain *newBlock = malloc(sizeof(struct blockchain));
	currentBlock->link=newBlock;
	newBlock->blockData=data;
	sha256(toString(*currentBlock),sizeof(*currentBlock),newBlock->prevHash); 
}

void verifyChain(){
	if (head==NULL)
	{
		printf("La blockchain est vide.");
		return;
	}
	struct blockchain *curr = head->link,*prev = head;
	int cpt = 1;
	while(curr){
		printf("%d\t[%d]\t",cpt++,curr->blockData);
		hashPrinter(SHA256(toString(*prev),sizeof(*prev),NULL),256);
		printf(" - ");
		hashPrinter(curr->prevHash,256);
		if (hashCompare(SHA256(toString(*prev),sizeof(*prev),NULL),curr->prevHash))
			printf("Vérificaton Réussie\n");
		else
			printf("Vérifiaction Failed\n");
		prev=curr;
		curr=curr->link;
	}
}

void alterNthBlock(int n,int newData){
		int cpt = 0;
		struct blockchain *curr = head;
		if(curr == NULL){
			printf("Nth block n'existe pas\n");
			return;
		}
		while(cpt!=n){
			if (curr->link==NULL && cpt!=n)
			{
			printf("Nth block n'existe pas\n");
			return;		
			}
			else if(cpt==n)
				break;
			curr=curr->link;
			cpt++;
		}
		printf("Before: ");
			printBlock(curr);
		curr->blockData=newData;
		printf("\nAfter: ");
			printBlock(curr);
		printf("\n");
}

void hackChain(){
		struct blockchain *curr=head,*prev;
		if (curr == NULL)
		{
			printf("NULL");
			return;
		}
		while(1){
			prev=curr;
			curr=curr->link;
			if(curr==NULL)
				return;
			if (!hashCompare(sha256(toString(*prev),sizeof(*prev),NULL),curr->prevHash));
			{
				hashPrinter(
					SHA256(toString(*prev),sizeof(*prev),curr->prevHash),256);
				printf("\n");
			}
		}
}

unsigned char* toString(struct blockchain b){
	unsigned char *str=malloc(sizeof(unsigned char)*sizeof(b));
	memcpy(str,&b,sizeof(b));
	return str;
}

void hashPrinter(unsigned char hash[],int length){
	for (int i = 0; i < length; i++)
	{
		printf("%02x",hash[i]);
	}
}

int hashCompare(unsigned char *str,unsigned char *str2){
	for (int i = 0; i < 256;i++)
	{
		if (str[i]!=str2[i])
		{
			return 0;
		}
		return i;
	}
}

void printBlock (struct blockchain *b){
	printf("%p]t",b);
	hashPrinter(b->prevHash,sizeof(b->prevHash));
	printf("\t[%d]\t",b->blockData);
	printf("%p\n",b->link);
}

void printAllBlcoks(){
	struct blockchain *curr=head;
	int cpt = 0;
	while(curr){
		printBlock(curr);
		curr = curr->link;
	}
}

void main(int argc, char const *argv[])
{
	int c,n,r;
	printf("valkyrieNatsykellySihamWorkiyamiryamMarineAnnaelleSarah");
	while(1){
		printf("Choice: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				printf("Enter data: ");
				scanf("%d",&n);
				addBlock(n);
				break;
			case 2:
				printf("Combien de block à entrer ?: ");
				scanf("%d",&n);
				for (int i = 0; i < n; ++i)
				{
					r  = rand()%(n*10);
					printf("Entering: %d\n",r);
					addBlock(r);
				}
				break;
			case 3:
				printf("Which block to alert ?: ");
				scanf("%d",&n);
				printf("Entrer value: ");
				scanf("%d",&r);
				alterNthBlock(n,r);
				break;
			case 4:
				printAllBlcoks();
				break;
			case 5:
				verifyChain();
				break;
			case 6:
				hackChain();
				break;
			default:
				printf("Wrong choice!\n");
				break;
		}
	}
	
}
//gcc blockchain.c -o blockchain.c.o -lcrypto
// ./blockchain.c.o