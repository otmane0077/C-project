#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int rep,choix,max=100,min=1,nba=0,i,n=0,nbe,rec;
	char oui;
	printf ("\t \t \t \t\ \t \t \t\ \t \t **JEU DE DEVINETTE**\n");
	printf ("Concept de jeu: \n");
	printf("-->Le joueur devra trouver ce nombre cache par le programme.\n-->Le programme fait des suggestions et vous repondez,\n-->suivant le nombre que vous avez tape est ce qu'il est plus grand,\n-->plus petit ou egal au nombre devine.\n");
	printf("voulez-vous continuer 2=oui/3=non\n -->: ");
	scanf("%d",&rep);
if(rep%2!=0)
{
	system("cls");
	printf(":))");
	exit(EXIT_SUCCESS);
}
else
{
	do{
	srand(time(NULL));//rand pour generer un nb aleatoire positif
	                 
    nba= (rand() % (min-max+ 1)) +min;
	system("cls");
printf("                                                                                            <<MENU>>\n");
printf("1-Facile : 30 nombre d'iteration \n2-Moyenne:: 20 nombre d'iteration\n3-Dificille:: 10 nombre d'iteration\n");
printf("-->veuiller choisir le niveau de difficulte:\n-->");
scanf("%d",&choix);
switch(choix)
{

     case 1:
     	for(i=1;i<=30;i++)
     	{
        printf("entrer un nombre entre 1 et 100: ");
        scanf("%d",&nbe);
        if (nba>nbe)
            printf("Le nombre est plus grand \n");
        else if (nba<nbe)
            printf("Le nombre est plus petit \n");
        else
        {
        printf ("                                                                          Félicitations vous avez obtenu la solution en %d coups !",i);
            n=1;	
		}
            
		}
		if(n==0)
		printf("                                                                             :(( GAME OVER :(( le nombre est:%d ",nba);
		break;
		
	 case 2:
	 	for(i=1;i<=20;i++)
     	{
        printf("entrer un nombre entre 1 et 100: ");
        scanf("%d",&nbe);
        if (nba>nbe)
            printf("Le nombre est plus grand \n");
        else if (nba<nbe)
            printf("Le nombre est plus petit\n");
        else
        {
        	  printf ("                                                                     Félicitations vous avez obtenu la solution en %d coups !",i);
            n=1;
		}
          
		}
		if(n==0)
			printf("                                                              :(( GAME OVER :(( le nombre est:%d ",nba);
		break;
    
     case 3:
     	for(i=1;i<=10;i++)
     	{
        printf("entrer un nombre entre 1 et 100: ");
        scanf("%d",&nbe);
        if (nba>nbe)
            printf("Le nombre est plus grand \n");
        else if (nba<nbe)
            printf("Le nombre est plus petit\n");
        else
           {
            printf ("                                                                           Félicitations vous avez obtenu la solution en %d coups !",i);
            n=1;
        	}
		}
		if(n==0)
		{
				printf("                                                                      :(( GAME OVER :(( le nombre est:%d \n",nba);
		}
	
		break;
		default:printf("erreur \n");
		break;
		}
	printf("pour recommencer oui=2/non=3\n -->");
	scanf("%d",&rec);

}while(rec==2);
system("cls");
	printf(":))");
	exit(EXIT_SUCCESS);
}	
	
	
	
	
	
	
	
	
	
	
	
	
}

