//Code Optimization Technique
#include<stdio.h>
#include<string.h>
struct op
{
char l;
char r[20];
}
op[10],pr[10];
void main()
{
int a,i,k,j,n,z=0,m,q;
char *p,*l;
char temp,t;
char *tem;
/*
printf("Enter the Number of Values:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("left: ");
scanf(" %c",&op[i].l);
printf("right: ");
scanf(" %s",&op[i].r);
}
*/
n=3;
op[0].l='a';
strcpy(op[0].r,"10");
//op[0].r="10";
op[1].l='b';
strcpy(op[1].r,"c+d");
//op[1].r="c+d";
op[2].l='b';
strcpy(op[2].r,"c+d");
//op[2].r="c+d";
//op[3].l='e';
//strcpy(op[3].r,"f+g");
printf("Intermediate Code\n") ;
for(i=0;i<n;i++)
{
printf("%c = ",op[i].l);
printf("%s\n",op[i].r);
}
for(i=0;i<n-1;i++)
{
temp=op[i].l;
for(j=0;j<n;j++)
{
p=strchr(op[j].r,temp);
if(p)
{
pr[z].l=op[i].l;
strcpy(pr[z].r,op[i].
r);
z++;
}
}
}
pr[z].l=op[n-1].l;
strcpy(pr[z].r,op[n-1].r);
z++;
printf("\nAfter Dead Code Elimination\n");
for(k=0;k<z;k++)
{
printf("%c = ",pr[k].l);
printf("%s\n",pr[k].r);
}
}

