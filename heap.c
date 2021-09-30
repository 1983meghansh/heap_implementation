#include<stdio.h>
void insert(int A[],int n)
{
    int i=n,temp;
    temp=A[i];
    while(i>1 && temp>A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}
int Delete(int A[],int n)
{
    int i,j,x,temp,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=val;
    i=1;
    j=2*i;
    while(j<=n-1)
    {
        if(j<n-1 && A[j+1]>A[j])
        j=j+1;
        if(A[i]<A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            j=2*j;
        }
        else
        break;
    }
    return val;
}

int main(){
    int H[]={0,14,15,5,20,30,8,40};
    int i;
    for(i=2;i<=7;i++)
    insert(H,i);
    for(i=7;i>1;i--){
    Delete(H,i);
    }
    for(int j=1;j<=7;j++)
    printf("%d ",H[j]);
    printf("\n");
    return 0;
}