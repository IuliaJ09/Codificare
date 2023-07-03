#include <stdio.h>
#include <stdlib.h>
int main()
{
	int k,i;
	char aux,sir[250];
	FILE *g,*f;
	f = fopen("abmin.txt", "rt");
	g = fopen("abmout.txt", "wt");
	printf("k=");
	scanf("%d", &k);
	printf("caracterul=");
	getchar();
	scanf("%c", &aux);
	if (f == NULL || g == NULL)
	{
		printf("Nu s-au creat fisierele");
		exit(0);
	}
	while (!feof(f))
	{
		fscanf(f, "%s", sir);
		//printf("%s", sir);
		if (sir[0] >= 'A' && sir[0] <= 'Z')
		{
			for (i = 0; i < k; i++)
				fprintf(g, "%c", aux);
			fprintf(g, " ");
		}
		else
			fprintf(g, " %s ", sir);
			
	}
	fclose(f);
	fclose(g);
	return 0;
}