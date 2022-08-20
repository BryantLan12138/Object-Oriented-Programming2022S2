extern int *readNumbers();
extern void printNumbers(int *array,int length);

int main(){
    int A[]={0,1,1,8,9,9,9,8,8,1,9,9,9,1,1,9,7,2,5,3};
    printNumbers(A,20);
    
    int *B=readNumbers();
    printNumbers(B,10);

    return 0;
}