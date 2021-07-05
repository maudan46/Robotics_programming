  
#include <stdio.h>

int main()
{
	int length;
	int counter;   

	struct mailing {
		char first[30];
		char last[30];
		char email[40];
	};

	struct mailing list[] = {
		{
			"Mauricio",
			"Zaldívar",              //Data of the first person
			"maudan2002@gmail.com"
		},
		{
			"Krizia",
			"Aguilar",               //Data of the second person
			"kriziaguilar@gmail.com",
		},
    {
			"Omar",
			"Urrea",               //Data of the second person
			"Omarurrea@gmail.com",
		},
	};

	length = sizeof(list) / sizeof(list[0]);

  //assignation of the data
	for (counter = 0; counter < length; ++counter) {
		printf("%d. \n", (counter + 1));
		printf("First name: %s\n", list[counter].first);
		printf("Last name: %s\n", list[counter].last);
		printf("Email: %s\n", list[counter].email);

		printf("\n");
	}

	return 0;
}
