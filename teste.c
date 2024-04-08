int main() {
    int a = 10; // Declaração de uma variável 'a' e atribuição do valor 10 a ela.
    int b, c; // Declaração das variáveis 'b' e 'c'. Nenhum valor foi atribuído a elas ainda.

    // %p é o formato para impressão de endereços de memória. %d é o formato para impressão de inteiros.

    // Impressão dos endereços de memória e valores das variáveis 'a', 'b' e 'c'.
    printf("&a = %p, a = %d\n", &a, a); // O endereço de memória de 'a' e o valor de 'a'.
    printf("&b = %p, b = %d\n", &b, b); // O endereço de memória de 'b' e o valor de 'b'.
    printf("&c = %p, c = %d\n\n", &c, c); // O endereço de memória de 'c' e o valor de 'c'.

    b = 20; // Atribuição do valor 20 à variável 'b'.
    c = a + b; // Atribuição da soma de 'a' e 'b' à variável 'c'.
    
    // Impressão dos endereços de memória e valores das variáveis 'a', 'b' e 'c' após as operações.
    printf("&a = %p, a = %d\n", &a, a); // O endereço de memória de 'a' e o valor de 'a'.
    printf("&b = %p, b = %d\n", &b, b); // O endereço de memória de 'b' e o valor de 'b'.
    printf("&c = %p, c = %d\n\n", &c, c); // O endereço de memória de 'c' e o valor de 'c'.
    
    return 0; // O programa termina com sucesso.
}

& <- para retorno de endereço de memória
* <- para retorn de conteúdo de endereço de memória

messi = 10;
jaiminho = &messi;

jaiminho armazena o endereço de memória de messi, que no endereço de messi tem o valor 10, então o conteudo (*) de jaiminho é 10


o que o jaiminho esta guardando é o endereço de messi
então se eu pegar o conteudo de jaiminho, eu vou ter o conteudo de messi

*jaiminho