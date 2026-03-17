#include <stdio.h>
#include <locale.h> //Para leitura de acentos corretamente
#include <string.h> //Precisa para o fgets do nome da cidade com o strcspn
 
int main() {
	
	setlocale(LC_ALL, "Portuguese");
	// Para localidade em português para mostrar os acentos das palavras
	
  	char estado1;
  	char cCarta1[4];
	char cidade1[30];
	unsigned long int populacao1;
	float area1;
	float pib1;
	int nPTuristico1;
	float dPopulacional1;
	float pPerCapita1;
	//Acima as variáveis para a Carta 1
	
	char estado2;
  	char cCarta2[4];
	char cidade2[30];
	unsigned long int populacao2;
	float area2;
	float pib2;
	int nPTuristico2;
	float dPopulacional2;
	float pPerCapita2;
	//Acima as variáveis para a Carta 2
	
	
	printf("Criando cartas do Super Trunfo de países!\n");
	printf("Para a carta número 1 vamos começar a inserir os dados\n");
	printf("Insira a letra de um estado de A a H: ");
	scanf(" %c", &estado1);
	//Acima começaremos a inserir a letra do estado
	//%c indica ser um unico caractere e em seguida há o "&" que vai gravar o dado na variavel estado
	printf("Insira o numero da carta de 01 a 04 junto da letra do estado já inserida: ");
	scanf(" %s", cCarta1);
	//Acima será o codigo da carta que deve ser inserido entre 01 a 04
	//%s indica ser uma string pois precisará colocar tanto letra quanto numero junto
	getchar();
	//Acima é o getchar utilizado antes do fgets para não ler o Enter
	printf("Insira o nome da cidade: ");
	fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
	//Acima é o codigo da cidade e no formato de fgets pois poderá ser um nome composto para pegar o espaço
	printf("Insira o número de habitantes da cidade: ");
	scanf(" %lu", &populacao1);
	//Acima deverá ser  inserido o tanto de habitantes e %lu indica que deve ser um numero inteiro sem sinal
	printf("Insira a área da cidade em quilômetros quadrados: ");
	scanf(" %f", &area1);
	//Acima é deve ser inserido a area da cidade em float com %f
	printf("Insira o PIB(Produto Interno Bruto) da cidade: ");
	scanf(" %f", &pib1);
	//Acima é o PIB da cidade em float com %f
	printf("Insira a quantidade de pontos turísticos da cidade: ");
	scanf(" %d", &nPTuristico1);
	//Acima deve ser a quantidadede pontos turistico com numero inteiro %d
	printf("\n");

	dPopulacional1 = (float)populacao1 / area1;
	//Aqui foi colocado o float na população para vir o resultado em float, ela foi declarada como int lá em cima por isso foi colocado assim
	pPerCapita1 = (pib1 * 1000000000) / populacao1;
	//Como o PIB é por bilhão multipliquei por esse numero para mostrar o resultado corretamente ao inves de ser zerado igual estava mostrando antes
	//Acima será calculado a Densidade Populacional e o PIB per Capita da Carta 1

	//Apenas para pular uma linha para começar a inserir os dados da segunda carta
	printf("Agora vamos inserir os dados da segunda carta\n");
	printf("Insira a letra de um estado de A a H: ");
	scanf(" %c", &estado2);
	printf("Insira o numero da carta de 01 a 04 junto da letra do estado já inserida: ");
	scanf(" %s", cCarta2);
	getchar();
	printf("Insira o nome da cidade: ");
	fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
	printf("Insira o número de habitantes da cidade: ");
	scanf(" %lu", &populacao2);
	printf("Insira a área da cidade em quilômetros quadrados: ");
	scanf(" %f", &area2);
	printf("Insira o PIB(Produto Interno Bruto) da cidade: ");
	scanf(" %f", &pib2);
	printf("Insira a quantidade de pontos turísticos da cidade: ");
	scanf(" %d", &nPTuristico2);
	printf("\n");

	dPopulacional2 = (float)populacao2 / area2;

	pPerCapita2 = (pib2 * 1000000000) / populacao2;

	//Acima será calculado a Densidade Populacional e o PIB per Capita da Carta 2

	//Espaço para pular e começar a mostrar na tela os valores inseridos
	printf("Aqui estão os valores inseridos das respectivas cartas\n");
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", cCarta1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("População: %lu\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", nPTuristico1);
	//Inserindo dados do nivel aventureiro da carta 1
	printf("Densidade Populacional: %f hab/km²\n", dPopulacional1);
	printf("PIB per Capita: %f reais", pPerCapita1);
	printf("\n");
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", cCarta2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("População: %lu\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	//Area e PIB decidi colocar .2f para que seja mais facil de visualizar os valores
	printf("Número de Pontos Turísticos: %d\n", nPTuristico2);
	//Inserindo dados do nivel aventureiro da carta 2
	printf("Densidade Populacional: %f hab/km²\n", dPopulacional2);
	printf("PIB per Capita: %f reais\n", pPerCapita2);

	printf("Agora vamos comparar as cartas!\n");
    printf("O atributo a ser escolhido será população.\n");
    if(populacao1 > populacao2) {
        printf("A Carta 1(%s) é a vencedora com uma população de %lu de habitantes!\n", cidade1, populacao1);
    } else {
        printf("A Carta 2(%s) é a vencedora com uma população de %lu de habitantes!\n", cidade2, populacao2);
    }
	//Inserindo a comparação entre as cartas, nesse caso escolhi comparar o atributo população, mas poderia ser qualquer outro atributo como área, PIB, pontos turísticos, etc. O importante é mostrar a comparação entre os atributos das cartas para mostrar qual é a melhor carta de acordo com o atributo escolhido.
	return 0;
	
	 
}
