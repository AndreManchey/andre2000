#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int indexOf(char c, char *s) 
{
	int i, l = strlen(s);
	for (i = 0; i < l; ++i) {
		if(c == s[i]) return i;
	}
	return -1;
}


int main(void) 
{
	int characters, states, initialState, numberOfFinalStates, *finalStates;
	char characterSet[11] = {'0','1','2','3','4','5','6','7','8','9','.'};
	int i, j, index, currentState;
	char inStr[50], inChr;

	//printf("Enter number of characters in alphabet set: "); 
	//scanf("%d", &characters);
	
	printf("Enter number of states: "); 
	scanf("%d", &states);
	
	
    //initial state final state 
    printf("Enter the initial state : ");
    scanf("%d",&initialState);
    printf("Enter the number of final state : ");
    scanf("%d",&numberOfFinalStates);
    finalStates = calloc(numberOfFinalStates, sizeof(int));
	for (i = 0; i < numberOfFinalStates; ++i) 
	{
		printf("Enter final state %d: ", i + 1);
		scanf("%d", &finalStates[i]);
	}
	
	
    //transition table 
	printf("Enter transition table:\n");
	int transitionTable[states][11];
	for(i = 0; i < states; i++) 
	{
		printf("State %d\n", i);
		for(j = 0; j < 11; j++) 
		{
			printf("\tInput %c: ", characterSet[j]);
			scanf("%d", &transitionTable[i][j]);
		}
	}
	
	
	do {
		currentState = initialState;
		printf("Enter string to check:\n");
		scanf("%s", inStr);
		j = strlen(inStr);
		for (i = 0; i < j; ++i) 
		{
			inChr = inStr[i];
			index = indexOf(inChr, characterSet);
			currentState = transitionTable[currentState][index];
		}

		index = 0;
		for (i = 0; i < numberOfFinalStates; ++i) 
		{
			if(currentState == finalStates[i]) 
			{
				index = 1;
				break;
			}
		}

		if(index == 1) 
			printf("Accepted\n");
		else 
			printf("Not accepted\n");

		printf("Do you want to continue? (y/n)\n"); 
			scanf("%s", &inChr);
	} while(inChr == 'y');
	
	return 0;
	
}
