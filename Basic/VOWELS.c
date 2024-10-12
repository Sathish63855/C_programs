#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[80],ch;
	int v=0,c=0,sp=0,w=1,i;
	printf("Enter the string : ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		ch=str[i];
		switch(tolower(ch))
		{
			case 'a' :v++;
				    break;
			case 'e' :v++;
				   	break;
			case 'i' :v++;
					break;
			case 'o' :v++;
					break;
			case 'u' :v++;
					break;
			case ' ' :sp++;
					break;
			default:c++;
					break;
		}
		if(str[i]==' ' && str[i+1]!=' ')
			w++;
		}
		printf("\n\nThe Entered String is '%s'",str);
		printf("\n\nNumber of vowels     = %d",v);
		printf("\n\nNumber of consonants = %d",c);
		printf("\n\nNumber of spaces     = %d",sp);
		printf("\n\nNumber of words      = %d",w);
		getch();
	
	}
	
