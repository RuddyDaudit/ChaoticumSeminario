void addBlock(int data);
void verifyChain();
void alterNthBlock(int n,int newData);
void hackChain();
int hashCompare(unsigned char *str,unsigned char *str2);
void hashPrinter(unsigned char hash[],int length);
unsigned char* toString(struct blockchain b);
void printBlock (struct blockchain *b);
void printAllBlcoks();