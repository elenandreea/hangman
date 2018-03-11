

void hidden(char *sir,char *ascuns)
{
	char aux[200];
	int i,k;
	// Print the first and the last letter of each word (depending on the length)
	char *p = strtok(sir," ");
	while (p)
	{
		strcpy(aux,p);
		p = strtok(NULL," ");
		switch(strlen(aux))
		{
			case 1:
				strcat(ascuns,"_");
				strcat(ascuns," ");
				break;
			case 2:				
				aux[1] = '_';
				strcat(ascuns,aux);
				strcat(ascuns," ");
				break;
			default:
				for(i = 1; i < strlen(aux)-1; i++)
					aux[i] = '_';
				strcat(ascuns,aux);
				strcat(ascuns," ");
				break;
		}
			
	}
	
	ascuns[strlen(ascuns)-1] = '\0';

	// Print duplicate letters
	for (i = 0; i < strlen(ascuns); i++)
	{
		if (ascuns[i] != '_')
		{
			for (k = 0; k < strlen(ascuns); k++)
			{
				if(sir[k] == ascuns[i])
				{
					ascuns[k] = sir[k];
				}
			}

		}
	}
}

