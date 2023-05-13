#include<stdio.h>
#include<string.h>

struct staff{
    char name[50];
    char gender[10];
    char type[50];
    int age;
    char designation[100];
    int joined;
}a[100];

int main()
{
	char Name[50],Gender[20],Age[30],Type[10],Designation[10];
    int i,n,join,choice,d,Join,c=0;
    printf("Enter the no of staff: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the name of the staff: ");
        scanf("%s",a[i].name);
        printf("\n Enter the gender of the staff: ");
        scanf("%s",a[i].gender);
        printf("\n Enter the age of the staff:");
        scanf("%d",&a[i].age);
        printf("\n Enter the type of staff (teaching or non_teaching): ");
        scanf("%s",a[i].type);
        printf("\n Enter the designation:(teaching-(asstprof,assocprof,prof) non_teaching-(technician,attender)) ");
        scanf("%s",a[i].designation);
        printf("\n Enter the present year: ");
        scanf("%d",&a[i].joined);
    }
    do{
	
    printf("\n1. Starting salary\n2. After increment for teaching staff\n3. After increment for non-teaching staff\n 4.Add staff,\n 5.search staff by name \n 6.EXIT \n");
    printf("\nEnter the choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
           {
		   
                if(strcmp(a[i].type,"teaching")==0)
                {
                    if(strcmp(a[i].designation,"asstprof")==0)
                    {
                        printf("\nThe starting salary of assistant professor %s is 57400.\n", a[i].name);
                    }
                    else if(strcmp(a[i].designation,"assocprof")==0)
                    {
                        printf("\nThe starting salary of associate professor %s is 131400.\n", a[i].name);
                    }
                    else if(strcmp(a[i].designation,"prof")==0)
                    {
                        printf("\nThe starting salary of professor %s is 144000.\n", a[i].name);
                    }
                    else
                    {
                        printf("\nInvalid staff name.\n");
                    }
                }
                else if(strcmp(a[i].type,"non_teaching")==0)
                {
                    if(strcmp(a[i].designation,"technician")==0)
                    {
                        printf("\nThe starting salary of technician %s is 21500.\n", a[i].name);
                    }
                    else if(strcmp(a[i].designation,"attender")==0)
                    {
                        printf("\nThe starting salary of attender %s is 15000.\n", a[i].name);
                    }
                    else
                    {
                        printf("\nInvalid staff name.\n");
                    }
                }
            }
            break;
            case 2:
        	for(i=0;i<n;i++)
            {
                if(strcmp(a[i].type,"teaching")==0)
                {
                		printf("___TEACHING STAFF__");
                    if(strcmp(a[i].designation,"asstprof")==0)
                    {
                    
			            printf("\n Enter the year of joining");
			            scanf("%d",&join);
                        c=a[i].joined-join;
                        if(5<c && c<10)
                        {
                        	printf("The salary of %s",a[i].name);
                        	printf("\n The salary of after increment of assistant professor is %d",57400+(57400*5)/100);
                        
						}
						else if  (c<5)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of assistant  professor is %d",57400+(57400*3)/100);
                        
						}
						else if (c>10)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of assistant  professor is %d",57400+(57400*17)/100);
                        
						}
					}
					else if(strcmp(a[i].designation,"assocprof")==0)
					{
					printf("\n Enter the year of joining");
			            scanf("%d",&join);
                        c=a[i].joined-join;
                        if(5<c && c<10)
                        {
                        	printf("The salary of %s",a[i].name);
                        	printf("\n The salary of after increment of associate professor is %d",131400+(131400*6)/100);
                        
						}
						else if  (c<5)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of associate  professor is %d",131400+(131400*4)/100);
                        
						}
						else if (c>10)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of associate  professor is %d",131400+(131400*18)/100);
                        
						}	
					}
					 else if(strcmp(a[i].designation,"prof")==0)
					 {
					printf("\n Enter the year of joining");
			            scanf("%d",&join);
                        c=a[i].joined-join;
                        if(5<c && c<10)
                        {
                        	printf("The salary of %s",a[i].name);
                        	printf("\n The salary of after increment of professor is %d",144000+(144000*6)/100);
                        
						}
						else if  (c<5)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of   professor is %d",144000+(144000*4)/100);
                        
						}
						else if (c>10)
						{
							printf("The salary of %s",a[i].name);
							printf("\n The salary of after increment of   professor is %d",144000+(144000*18)/100);
                        
						}	
					}}break;
					}
					 
					
        case 3:
        	{
        			for(i=0;i<n;i++)
            {
                if(strcmp(a[i].type,"non_teaching")==0)
                {
                		printf("\n__NON TEACHING STAFF__\n");
                	if(strcmp(a[i].designation,"technician")==0)
                	{
                	
                		printf("\n Enter the year of joining");
			            scanf("%d",&Join);
                        d=a[i].joined-join;
                        if(5<d && d<10)
                        {
                        	printf("\n The salary of %s",a[i].name);
                        	printf("\n The salary of after increment of technician is %d",21500+(21500*5)/100);
                        
						}
						else if  (d<5)
						{
							printf("\n The salary of %s",a[i].name);
							printf("\n The salary of after increment of technician is %d",21500+(21500*3)/100);
                        
						}
						else if (d>10)
						{
							printf("\n The salary of %s",a[i].name);
							printf("\n The salary of after increment of technician is %d",21500+(21500*14)/100);
                        
						}
					}
				 else if(strcmp(a[i].designation,"attender")==0)
                    {
                    		printf("\n Enter the year of joining");
			            scanf("%d",&Join);
                        d=a[i].joined-join;
                        if(5<d && d<10)
                        {
                        	printf("\n The salary of %s",a[i].name);
                        	printf("\n The salary of after increment of attender is %d",15000+(15000*5)/100);
                        
						}
						else if  (d<5)
						{
							printf("\n The salary of %s",a[i].name);
							printf("\n The salary of after increment of attender is %d",15000+(15000*3)/100);
                        
						}
						else if (d>10)
						{
							printf("\n The salary of %s",a[i].name);
							printf("\n The salary of after increment of attender is %d",15000+(15000*14)/100);
                        
						}
                	
        }}}}
            break;
            case 4:
            	{
            	printf("\n Total no of employes is %d",n);
				for(i=0;i<n;i++)
				{
					printf("\n Enter the staff name");
					scanf("%s",Name);
					printf("\n Enter Age of the staff ");
					scanf("%d",&Age);
					printf("\n Enter the gender of the staff ");
					scanf("%d",Gender);
					printf("\n Enter the type of job ");
					scanf("%s",Type);
					printf("\n Enter the destination of the job ");
					scanf("%s",Designation);
					n++;
					printf("\n New total no of staff is %d ",n);
					
					}	
				}
				break;
			case 5:
				{
					printf("enter the name of the employee");
					scanf("%s",Name);
					for(i=0;i<n;i++)
					{
						if(strcmp(Name,a[i].name)==0)
						{
					printf("\n Name of the staff is %s",a[i].name);
					printf("\n Age of the staff is %d",a[i].age);
					printf("\n Gender of the staff is %s",a[i].gender);
					printf("\n type of job is %s",a[i].type);
					printf("\n destination of the job is %s",a[i].designation);
					
						}
					}
				}
				break;
        }
    }while(choice!=6);
    printf("\n My task is completed");

    return 0;
	}
