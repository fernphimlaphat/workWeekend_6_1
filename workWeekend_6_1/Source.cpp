#include<stdio.h>
#include<ctype.h>
#include<string.h>

void Code(char name[100]) {

	int i = 0, j;

		for (j = 1; j <= strlen(name); j++)
		{
			
		}

		while (i < j)
		{
			name[i] = toupper(name[i]);

			if (name[i] >= 'A' && name[i] <= 'M')
			{
				printf("%c", name[i] + 13);

			}
			else if (name[i] >= 'N' && name[i] <= 'Z')
			{
				printf("%c", name[i] - 13);

			}

			i++;
		}

	
}




int main() {


	char name[100];
	scanf("%[^\n]",name);
	Code(name);

	
		
	

	

}