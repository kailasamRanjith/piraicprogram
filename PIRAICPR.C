#include<stdio.h>
#include<conio.h>
struct application
{
char title[50];
char* author[50];
int year,price,version;
};
int comparator(const void* p,const void* q)
{
return strcmp(((struct application*)p)->author,((struct application*)q)->author);
}
int main()
{
struct application l[100];
char a_author[50],name[10],temp[10],str[10];
int i,j,k,big[10],t,a_year,m=0,n,bigyear[10];
i=j=k=0;

clrscr();

while(j!=6)
{
printf("\n 1.Add software application details");
printf("\n 2.Display the details of application by given author");
printf("\n 3.Sort the details of application in incresed order of price");
printf("\n 4.Display the details of application by given year");
printf("\n 5.Sort the details of application in incresed order author ");
printf("\n 6.exit");
printf("\n Enter one of above=");
scanf("%d",&j);

switch(j)
{
case 1:
     i=k;
   printf("Enter the Applicatin Name =");
   scanf("%s",l[i].title);

   printf("Enter the Author Of Application =");
   scanf("%s",l[i].author);

   printf("Enter Application Version =");
   scanf("%d",&l[i].version);

   printf("Enter Application Publishing year =");
   scanf("%d",&l[i].year);

   printf("Enter the book price=");
   scanf("%d",&l[i].price);
  // printf("i=%d",i);
    k++;
   // printf("k=%d",k);

   break;

case 2:

       printf("Enter the author name=");
       scanf("%s",a_author);
       for(i=0;i<k;i++)
       {
	 if(strcmp(a_author,l[i].author)==0)
	 {
	 printf("\nName=%s\tAuthor=%s\tVersion=%d\tYear=%d\tPrice=%d",l[i].title,l[i].author,l[i].version,l[i].year,l[i].price);
	 }
       }

       break;

    case 3:

	for(i=0;i<k;i++)
	 {
	big[m]=l[i].price;
       //	printf("incres =%d",big[m]);
	m++;
	}

	 for(m=0;m<k;m++)
	  {
	  for(n=m+1;n<k;n++)
	    {
	     if(big[m]>big[n])
	      {
	       t=big[m];
	       big[m]=big[n];
	       big[n]=t;
	 }
	 }
	}

	for(m=0;m<k;m++)
	 {
	// printf("l=%d",big[m]);
	 for(i=0;i<k;i++)
	  {
	  if(big[m]==l[i].price)
	  printf("\nName=%s\tAuthor=%s\tVersion=%d\tYear=%d\tPrice=%d",l[i].title,l[i].author,l[i].version,l[i].year,l[i].price);
	}
       }

	break;

   case 4:

	printf("Enter the Year=");
       scanf("%d",&a_year);
       for(i=0;i<k;i++)
       {
	 if(l[i].year==a_year)
	  {
	  printf("\nName=%s\tAuthor=%s\tVersion=%d\tYear=%d\tPrice=%d",l[i].title,l[i].author,l[i].version,l[i].year,l[i].price);
	  }
       }

       break;

   case 5:


       qsort(l,k,sizeof(struct application),comparator);
       for(i=0;i<k;i++)
       {
	printf("\nName=%s\tAuthor=%s\tVersion=%d\tYear=%d\tPrice=%d",l[i].title,l[i].author,l[i].version,l[i].year,l[i].price);
       }

     break;

   case 6:
   exit (0);
   }
   }
   return(0);
   }



