#include <stdio.h>

int main() {
    char sexo, corOlhos, corCabelos;
    int idade;
    double salario;
    int totalHabitantes = 0;
    int mulheresComRestricoes = 0;

    printf("Cadastro de habitantes (Para encerrar, insira uma idade de -1):\n");

    while (1) {
        printf("Informe o sexo (m/f): ");
        scanf(" %c", &sexo);

        if (sexo == 'm' || sexo == 'f') {
            printf("Informe a cor dos olhos (a/v/c/p): ");
            scanf(" %c", &corOlhos);

            if (corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p') {
                printf("Informe a cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &corCabelos);

                if (corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r') {
                    printf("Informe a idade: ");
                    scanf("%d", &idade);

                    if (idade == -1) {
                        break; // Fim da pesquisa
                    }

                    if (idade >= 10 && idade <= 100) {
                        printf("Informe o salário: ");
                        scanf("%lf", &salario);

                        if (salario >= 0) {
                            totalHabitantes++;

                            if (sexo == 'f' && idade >= 18 && idade <= 35 && corOlhos == 'c' && corCabelos == 'c') {
                                mulheresComRestricoes++;
                            }
                        } else {
                            printf("Salário não pode ser negativo. Tente novamente.\n");
                        }
                    } else {
                        printf("Idade deve estar entre 10 e 100 anos. Tente novamente.\n");
                    }
                } else {
                    printf("Cor dos cabelos inválida. Tente novamente.\n");
                }
            } else {
                printf("Cor dos olhos inválida. Tente novamente.\n");
            }
        } else {
            printf("Sexo inválido. Tente novamente.\n");
        }
    }

    if (totalHabitantes > 0) {
        double porcentagem = (double)mulheresComRestricoes / totalHabitantes * 100.0;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2lf%%\n", porcentagem);
    } else {
        printf("Nenhum habitante cadastrado.\n");
    }

    return 0;
}
