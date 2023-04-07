#define PI 3.14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
#include "extApi.h"
}

typedef struct{
    char nome[50];
    char numero[6];
}Candidato;



    void padrão(int clientID, int handler, simxChar *handlerName) {
        simxFloat vet[3] = { -PI / 4, 0, -PI / 12 };
        int juntas[3] = { 2, 3, 1 };
        for (int i = 0; i < 3; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) {
                extApi_sleepMs(500);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);
        }
    }

    void padrãoc(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[3] = { 0, 0, 0 };
        int juntas[3] = { 2, 1, 3 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 1) {
                extApi_sleepMs(1000);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);
        }
    }

    void confirma(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 8.2 , -PI / 3.87, -PI / 35, -PI / 3.59 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) {
                extApi_sleepMs(500);
            }
            else if (i == 3) {
                extApi_sleepMs(400);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);
            
        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
 
    }

    void botao0(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 10.8, -PI / 4, -PI / 30, -PI / 3.78 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 3) extApi_sleepMs(500);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(250);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao1(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 16 , -PI /4 , PI / 40, -PI / 3.8 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) {
                extApi_sleepMs(500);
            }
            else if (i == 3) {
                extApi_sleepMs(500);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao2(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 12, -PI / 4, PI / 27, -PI / 3.7 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) {
                extApi_sleepMs(700);
            }
            else if (i == 3) {
                extApi_sleepMs(500);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao3(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 9.8, -PI / 4, PI / 17, -PI / 3.55 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) {
                extApi_sleepMs(700);
            }
            else if (i == 3) {
                extApi_sleepMs(500);
            }
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao4(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 16, -PI / 4, 0,-PI / 3.9 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao5(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 12, -PI / 3.87, PI / 60, -PI / 3.73 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(125);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao6(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 9, -PI / 3.73, PI / 33, -PI / 3.59 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 3) extApi_sleepMs(500);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao7(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 15.7, -PI / 4, -PI / 60, -PI / 3.86 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 2) extApi_sleepMs(250);
            if (i == 3) extApi_sleepMs(250);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(250);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao8(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 11.2, -PI / 4, -PI / 100, -PI / 3.77 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            if (i == 3) extApi_sleepMs(500);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

    void botao9(int clientID, int handler, simxChar* handlerName) {
        simxFloat vet[4] = { -PI / 8.6, -PI / 3.8, PI / 70, -PI / 3.6 };
        int juntas[4] = { 1, 2, 3, 2 };
        for (int i = 0; i < 4; i++) {
            sprintf(handlerName, "/base_link_respondable[0]/joint_%d", juntas[i]);
            simxGetObjectHandle(clientID, handlerName, &handler, (simxInt)simx_opmode_oneshot_wait);
            simxSetJointTargetPosition(clientID, handler, vet[i], (simxInt)simx_opmode_oneshot_wait);

        }
        extApi_sleepMs(500);
        padrão(clientID, handler, handlerName);
        extApi_sleepMs(250);
    }

int main(int argc, char* argv[])
{
    int handler = 0;
    simxChar handlerName[150];
    Candidato *candidatos = NULL;
    int qntdc = 0;
    FILE *arq;

    //conecta com o coppelia
    int clientID = simxStart((simxChar*)"127.0.0.1", 19999, true, true, 2000, 5);

    extApi_sleepMs(500);

    //verifica conexao com simulador
    if (clientID == -1) {
        printf("Erro conectando ao Coppelia!\n");
        return 0;
    }
    else {
        printf("Conectado ao Coppelia!\n");
    }

    arq = fopen("canditatos.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        exit(1);
     }

    while (!feof(arq)) {
        candidatos = (Candidato*) realloc(candidatos, (qntdc + 1) * sizeof(Candidato));
        
        if (candidatos == NULL)
            exit(1);
        
        fscanf(arq, " %s %s\n", candidatos[qntdc].nome ,candidatos[qntdc].numero);
        padrão(clientID, handler, handlerName);
        
        if(qntdc == 0)
            extApi_sleepMs(5500);
        
        for (int i = 0; i < (strlen(candidatos[qntdc].numero) + 1); i++) {
            char  atual = candidatos[qntdc].numero[i];
            switch (atual)
                {
                case '0':
                    botao0(clientID, handler, handlerName);
                    break;
                case '1':
                    botao1(clientID, handler, handlerName);
                    break;
                case '2':
                    botao2(clientID, handler, handlerName);
                    break;
                case '3':
                    botao3(clientID, handler, handlerName);
                    break;
                case '4':
                    botao4(clientID, handler, handlerName);
                    break;
                case '5':
                    botao5(clientID, handler, handlerName);
                    break;
                case '6':
                    botao6(clientID, handler, handlerName);
                    break;
                case '7':
                    botao7(clientID, handler, handlerName);
                    break;
                case '8':
                    botao8(clientID, handler, handlerName);
                    break;
                case '9':
                    botao9(clientID, handler, handlerName);
                    break;
                case '\0':
                    confirma(clientID, handler, handlerName);
                    printf("%s\n", candidatos[qntdc].nome);
                    break;

                default:
                    printf("algarismo não identificado\n");
                    break;
            }
        }
        qntdc++;
    }
    padrãoc(clientID, handler, handlerName);
    fclose(arq);

    for (int i = 0; i < qntdc; i++) {
        free(candidatos[i].nome);
        free(candidatos[i].numero);
    }
    qntdc = 0;
    free(candidatos);

// Fecha a conexao
    simxFinish(clientID);

    return(0);
}