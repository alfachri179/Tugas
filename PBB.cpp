#include <stdio.h>

int getPbb(int a,int b){
    int tamp,sisa;
do{
    tamp=a/b;
    tamp=tamp*b;
    sisa=a-tamp;
    a=b;
    if(sisa==0){
        return b;
    }
    b=sisa;
}while(sisa!=0);
}
int main(){
    int a,b;
cout<<"Masukan A: ";cin>>a;
cout<<"Masukan B: ";cin>>b;
printf("PBB = %d",getPbb(a,b));
}
