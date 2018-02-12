// caractere printabile 32-127
char** citire(int *number_of_expressions, int *number_of_valid_characters, int argc, char** argv)
{
	FILE *fisier;
	int i = 0,aux,j;
	char ch = 0;
	char** lines_matrix;
	char* line;
	int line_dim = 2000, ind_line = 0;
	int nr_lines = 0, nr_alocated = 1000;

	lines_matrix = (char**)calloc(nr_alocated, sizeof(char*));
	line = (char*)calloc(line_dim, sizeof(char));

	int ok = 0;
	int nr_caract_print = 0;

	for(i = 1; i < argc ;i++)
	{
		fisier = fopen(argv[i], "r");
		if(fisier == NULL)
		{
			printf("[Eroare]: Fisierul %s nu poate fi deschis.\n", argv[i]);
			return 0;
		}

		ch = fgetc(fisier);
		
		while(ch != EOF)
		{
			if(nr_lines == nr_alocated)
			{
				nr_alocated = nr_alocated * 2;
				lines_matrix = (char**)realloc(lines_matrix,nr_alocated* sizeof(char*));
			}

			ind_line = 0;
			strcpy(line, "");

			while(ch != '\n')
			{
				ok = 0;
				if(isprint(ch) != 0)
				{
					ok = 1;
					if(ind_line == line_dim)
					{
						line_dim = line_dim*2;
						line = (char*)realloc(line,line_dim* sizeof(char));
					}

					if(isalpha(ch) != 0)
					{
						ch = tolower(ch);
					}

					line[ind_line] = ch;
					ind_line++;
				}

				ch = fgetc(fisier);
			}

			line[ind_line] = '\0';

			aux=0;
			for(j=0;j<strlen(line);j++)
				if(line[j]!=' ')
					aux=1;



			if(ok == 1 && aux==1)
			{
				lines_matrix[nr_lines] = strdup(line);
				nr_lines++;
				nr_caract_print = nr_caract_print + strlen(line);
			}

			ch = fgetc(fisier);
		}

		fclose(fisier);
	}

	
	*number_of_valid_characters = nr_caract_print;
	*number_of_expressions = nr_lines;
	return lines_matrix;

}
