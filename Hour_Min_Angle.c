#include<stdio.h>

int main()
{
	int h,m,i,j;
	int angle;
	printf("\nEnter the time hour : ");
	scanf(" %d",&h);
	printf("\nEnter minute : ");
	scanf(" %d",&m);
	
	printf("\n %d : %d",h,m);
	
	if(m==0 && h>=6)
	 m=60;
	
	if(m<=30)
	{
		//a=t*30 & b=m*6	a=b-a;	
		if(h==12 )
		{
			angle=m*6;
		}
		else
		{
		    i=m*6;
		    j=h*30;
		    
		     if(i>j)
		       angle=i-j;
		     else
			   angle=j-i;  
		  
		    //angle=(m*6)-(h*30);  
        }
		
		printf("\nAngle of ( %d : %d ) is----> %d",h,m,angle);
       
	}
	else
	{
		    i=m*6;
		    j=h*30;
		    
			     if(i>j)
			       angle=i-j;
			     else
				   angle=j-i;
		    
			
			//angle=(m*6)-(h*30);
		    
		printf("\nAngle of ( %d : %d ) is----> %d",h,m,angle);
	}
	
	return 0;
}
