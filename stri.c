#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[1000],str3[1000],str2[1000];
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		{
			str1[i]=="";
		}
	}
	for(i=0;str2[i]!='0';i++)
	{
		if(str2[i]!='a'||str2[i]!='e'||str2[i]!='i'||str2[i]!='o'||str2[i]!='u'||str2[i]!='A'||str2[i]!='E'||str2[i]!='I'||str2[i]!='O'||str2[i]!='U')
		{
			str2[i]="*";
		}
	}
	printf("%s",str1);
	printf("%s",str2);
	printf("%s",strupr(str3));
	return 0;
}
