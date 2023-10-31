#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Códigos retirados e/ou inspirados em https://github.com/flgorgonio/linguasolta/blob/main/util.c

//Verifica se o caractere é um número
int ehNum(char a){
    if (a >= '0' && a <= '9') {
        return 1;
    } else {
        return 0;
    }
}

//Verifica se o caractere é uma letra
int ehLetra(char a){
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

//Verifica se o parâmetro é um nome válido
int validaNome(char* nome){
    int i;
    for(i = 0; i < strlen(nome); i++){
        if (!ehLetra(nome[i])) {
            return 0;
        }
    }
    return 1;
}

//Verifica se o parâmetro é um email válido
int validaEmail(char* mail){
    int arrobas = 0;
    int i;
    for(i = 0; i < strlen(mail); i++) {
        if(mail[i] == '@') {
            int j;
            int pontos = 0;
            arrobas++;
            if (arrobas == 0 || arrobas > 1) {
                return 0;
            }
            for(j = i + 1; j < strlen(mail); j++) {
                if(!ehLetra(mail[j])) {
                    if(mail[j] == '.') {
                        pontos++;
                        if(pontos == 0 || pontos > 2) {
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                }
            }
        }
    }

    return 1;
}

//Verifica se o parâmetro é um telefone válido
int validaTel(char* tel){
    int i;
    if(strlen(tel) < 9 || strlen(tel) > 11){
        return 0;
    }

    for(i = 0; i < strlen(tel); i++){
        if(!ehNum(tel[i])){
            return 0;
        }
    }

    return 1;
}

//Baseado em código gerado por IA chatGPT
int validaCPF(char* cpf){
    //Verifica se o cpf tem 11 dígitos
    if(strlen(cpf) != 11){
        return 0;
    }

    //Verifica se o cpf só tem números
    int i;
    for(i = 0; i < 11; i++){
        if(!ehNum(cpf[i])){
            return 0;
        }
    }

    //Calcula o primeiro dígito verificador
    int soma = 0;
    int j;
    for (j = 0; j < 9; j++) {
        soma += (cpf[j] - '0') * (10 - j);
    }

    int primeiroDigito = 11 - (soma % 11);

    if (primeiroDigito == 10 || primeiroDigito == 11) {
        primeiroDigito = 0;
    }

    // Verifica o primeiro dígito verificador
    if (primeiroDigito != cpf[9] - '0') {
        return 0;
    }

    // Calcula o segundo dígito verificador
    soma = 0;
    int k;
    for (k = 0; k < 10; k++) {
        soma += (cpf[k] - '0') * (11 - k);
    }

    int segundoDigito = 11 - (soma % 11);
    
    if (segundoDigito == 10 || segundoDigito == 11) {
        segundoDigito = 0;
    }

    // Verifica o segundo dígito verificador
    if (segundoDigito != cpf[10] - '0') {
        return 0;
    }

    return 1;
}