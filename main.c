#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct emp
{
    char name[15];
    int id;
    char dep[15];
    float sal;
};

void depsal(struct emp *ptr,int n);

void main()
{
    struct emp *ptr;
    int n;
    printf("enter no of employees : ");
    scanf("%d",&n);
    printf("enter employee details : ");
    ptr=(struct emp*)malloc(n*(sizeof(struct emp)));
    for(int i=0;i<n;i++)
    {
        printf("%d employee name \n",(i+1));
        scanf("%s",&(ptr+i)->name);
        printf("%d employee id \n",(i+1));
        scanf("%d",&(ptr+i)->id);
        printf("%d employee dep \n",(i+1));
        scanf("%s",&(ptr+i)->dep);
        printf("%d employee sal \n",(i+1));
        scanf("%f",&(ptr+i)->sal);
    }
    
    printf("EMPLOYEE DEATILS ARE : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d employee name is %s \n",i+1,(ptr+i)->name);
        printf("%d employee id is %d \n",i+1,(ptr+i)->id);
        printf("%d employee dep is %s \n",i+1,(ptr+i)->dep);
        printf("%d employee sal is %f \n",i+1,(ptr+i)->sal);
    }
    depsal(ptr,n);
}

void depsal(struct emp *ptr,int n)
{
    float tot=0;
    char d[15];
    printf("ENter the dept to find salary \n");
    scanf("%s",&d);
    
    for (int i=0;i<=n;i++)
    {
        if(strcmp(((ptr+i)->dep),d)==0)
        {
            tot=tot+((ptr+i)->sal);
        }
    }
    printf("Total Salary of dep %s is %f",d,tot);
}



