#include <iostream>
#include <vector>

using namespace std;

int mudar_temperatura(int *S1,int *S2, int *S3){
    int escolha=1;
    cout << "Gostaria de diminuir a temperatura peça 0";
    cin >> escolha;
    if(escolha==0)
    {
        
    
    
    if (*S1 > *S2 && *S1 > *S3){
    *S1 -= 5;
    cout <<"temperatura diminui em 5 graus atualmente está em " << S1;
    }
    else if (*S2 > *S1 && *S2 > *S3){
    *S2 -= 5;
    cout <<"temperatura diminui em 5 graus atualmente está em " << S2;
    }
    else if (*S3 > *S1 && *S3 > *S2){
    *S3 -= 5;
    cout <<"temperatura diminui em 5 graus atualmente está em " << S3;
    }
    }
}

int main(){
    int S1,S2,S3;
    cout << "Digite um numero de temperatura da Sala 1  , Sala 2 , Sala 3 ";
    cin >> S1 >> S2 >> S3;
    if (S1 > S2 && S1 > S3){
    cout << "A Sala 1 tem a temperatura mais alta ";
    }
    else if (S2 > S1 && S2 > S3){
    cout << "A Sala 2 tem a temperatura mais alta ";
    }
    else if (S3 > S1 && S3 > S2){
    cout << "A Sala 3 tem a temperatura mais alta ";
    }
    cout << "gostaria de diminuir temperatura?";
    int escolha = 1;
    cin >> escolha;
    if(escolha==0){
        mudar_temperatura(&S1,&S2,&S3);
        cout << "temperatura atual das salas 1 a 3"<< S1 << S2 << S3;
    }






    return 0;
}