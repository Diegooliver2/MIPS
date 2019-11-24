#include <iostream>

using namespace std;

class Mips {
private:
    long int s[7];
    long int t[9];
    long int zero;
    long int pc;

public:
    Mips(){
        for(int i = 0; i < 9; i++){
            if(i <= 7){
                s[i] = 0;
            }
            t[i] = 0;
        }
        pc = 0;
        zero = 0;
    }
    long int getR(){
        int id;
        int aux = 0;
        long int r;

        while(aux == 0){
            aux = 1;
            cout << endl << "Digite o id do registrador: ";
            cin >> id;
            cout << endl;

            switch(id){
                case 0: r = zero; break;  case 8: r = t[0]; break;  case 9: r = t[1]; break;
                case 10: r = t[2]; break;  case 11: r = t[3]; break;  case 12: r = t[4]; break;
                case 13: r = t[5]; break;  case 14: r = t[6]; break;  case 15: r = t[7]; break;
                case 16: r = s[0]; break;  case 17: r = s[1]; break;  case 18: r = s[2]; break;
                case 19: r = s[3]; break;  case 20: r = s[4]; break;  case 21: r = s[5]; break;
                case 22: r = s[6]; break;  case 23: r = s[7]; break;  case 24: r = t[8]; break;
                case 25: r = t[9]; break;  default: aux = 0;
            }

            return r;
        }
    }
    void Instrucoes(){
        long int op, funct;
        int aux = 0;


        while(aux == 0){

            aux = 1;

            cout << "Digite o opcode: ";
            cin >> op;
            cout << endl;

            if(op == 8){

                    long int *y, *x;
                    long int z;
                    int ix, iy, auxop = 0;


                    while(auxop == 0){
                        auxop = 1;

                        cout << "Escolha o registrador destino: ";
                        cin >> ix;
                        cout << endl;

                        if(ix == 8){x = &t[0];}   if(ix == 9){x = &t[1];}   if(ix == 10){x = &t[2];}
                        if(ix == 11){x = &t[3];}  if(ix == 12){x = &t[4];}  if(ix == 13){x = &t[5];}
                        if(ix == 14){x = &t[6];}  if(ix == 15){x = &t[7];}  if(ix == 16){x = &s[0];}
                        if(ix == 17){x = &s[1];}  if(ix == 18){x = &s[2];}  if(ix == 19){ x = &s[3];}
                        if(ix == 20){x = &s[4];}  if(ix == 21){x = &s[5];}  if(ix == 22){x = &s[6];}
                        if(ix == 23){x = &s[7];}  if(ix == 24){x = &t[8];}  if(ix == 25){x = &t[9];}
                        if(ix <= 0 || ix > 25 || ix == 1 || ix == 2 || ix == 3 || ix == 4 || ix == 5 || ix == 6 || ix == 7 ){
                            auxop = 0;
                        }
                    }


                    auxop = 0;

                    while(auxop == 0){
                        auxop = 1;
                        cout << "Escolha o registrador operador: ";
                        cin >> iy;
                        cout << endl;

                        if(iy == 0){y = &zero;}   if(iy == 8){y = &t[0];}   if(iy == 9){y = &t[1];}
                        if(iy == 10){y = &t[2];}  if(iy == 11){y = &t[3];}  if(iy == 12){y = &t[4];}
                        if(iy == 13){y = &t[5];}  if(iy == 14){y = &t[6];}  if(iy == 15){y = &t[7];}
                        if(iy == 16){y = &s[0];}  if(iy == 17){y = &s[1];}  if(iy == 18){y = &s[2];}
                        if(iy == 19){y = &s[3];}  if(iy == 20){y = &s[4];}  if(iy == 21){y = &s[5];}
                        if(iy == 22){y = &s[6];}  if(iy == 23){y = &s[7];}  if(iy == 24){y = &t[8];}
                        if(iy == 25){y = &t[9];}
                        if(iy < 0 || iy > 25 ||iy == 1 || iy == 2 || iy == 3 || iy == 4 || iy == 5 || iy == 6 || iy == 7){
                            auxop = 0;
                        }
                    }


                    cout <<"Digite o valor imediato: ";
                    cin >> z;
                    cout << endl;

                    *x = *y + z;

                    cout << endl << "Posicao desta instrucao na memoria: " << pc << endl << endl;

                    pc = pc + 4;

            }



            if(op == 0){

                    long int  *x, *y, *z;
                    int ix, iy, iz, auxop = 0;


                    while(auxop == 0){
                        auxop = 1;

                        cout << "Escolha o registrador destino: ";
                        cin >> ix;
                        cout << endl;

                        if(ix == 8){x = &t[0];}   if(ix == 9){x = &t[1];}   if(ix == 10){x = &t[2];}
                        if(ix == 11){x = &t[3];}  if(ix == 12){x = &t[4];}  if(ix == 13){x = &t[5];}
                        if(ix == 14){x = &t[6];}  if(ix == 15){x = &t[7];}  if(ix == 16){x = &s[0];}
                        if(ix == 17){x = &s[1];}  if(ix == 18){x = &s[2];}  if(ix == 19){ x = &s[3];}
                        if(ix == 20){x = &s[4];}  if(ix == 21){x = &s[5];}  if(ix == 22){x = &s[6];}
                        if(ix == 23){x = &s[7];}  if(ix == 24){x = &t[8];}  if(ix == 25){x = &t[9];}
                        if(ix <= 0 || ix > 25 || ix == 1 || ix == 2 || ix == 3 || ix == 4 || ix == 5 || ix == 6 || ix == 7 ){
                            auxop = 0;
                        }
                    }


                    auxop = 0;

                    while(auxop == 0){
                        auxop = 1;
                        cout << "Escolha o registrador operador 1: ";
                        cin >> iy;
                        cout << endl;

                        if(iy == 0){y = &zero;}   if(iy == 8){y = &t[0];}   if(iy == 9){y = &t[1];}
                        if(iy == 10){y = &t[2];}  if(iy == 11){y = &t[3];}  if(iy == 12){y = &t[4];}
                        if(iy == 13){y = &t[5];}  if(iy == 14){y = &t[6];}  if(iy == 15){y = &t[7];}
                        if(iy == 16){y = &s[0];}  if(iy == 17){y = &s[1];}  if(iy == 18){y = &s[2];}
                        if(iy == 19){y = &s[3];}  if(iy == 20){y = &s[4];}  if(iy == 21){y = &s[5];}
                        if(iy == 22){y = &s[6];}  if(iy == 23){y = &s[7];}  if(iy == 24){y = &t[8];}
                        if(iy == 25){y = &t[9];}
                        if(iy < 0 || iy > 25 ||iy == 1 || iy == 2 || iy == 3 || iy == 4 || iy == 5 || iy == 6 || iy == 7){
                            auxop = 0;
                        }
                    }


                    auxop = 0;


                    while(auxop == 0){
                        auxop = 1;
                        cout << "Escolha o registrador operador 2: ";
                        cin >> iz;
                        cout << endl;

                        if(iz == 0){z = &zero;}   if(iz == 8){z = &t[0];}   if(iz == 9){z = &t[1];}
                        if(iz == 10){z = &t[2];}  if(iz == 11){z = &t[3];}  if(iz == 12){z = &t[4];}
                        if(iz == 13){z = &t[5];}  if(iz == 14){z = &t[6];}  if(iz == 15){z = &t[7];}
                        if(iz == 16){z = &s[0];}  if(iz == 17){z = &s[1];}  if(iz == 18){z = &s[2];}
                        if(iz == 19){z = &s[3];}  if(iz == 20){z = &s[4];}  if(iz == 21){z = &s[5];}
                        if(iz == 22){z = &s[6];}  if(iz == 23){z = &s[7];}  if(iz == 24){z = &t[8];}
                        if(iz == 25){z = &t[9];}
                        if(iz < 0 || iz > 25 || iz == 1 || iz == 2 || iz == 3 || iz == 4 || iz == 5 || iz == 6 || iz == 7){
                            auxop = 0;
                        }
                    }


                    do{
                        cout << "Digite o campo funct: ";
                        cin >> funct;
                        cout << endl;

                        if(funct == 32){
                            *x = *y + *z;
                        }
                        if(funct == 34){
                            *x = *y - *z;
                        }
                    }while(funct != 32 && funct != 34);

                    cout << endl <<"Posicao desta instrucao na memoria: " << pc << endl << endl;

                    pc = pc + 4;
            }

            if(op != 0 && op != 8){
                aux = 0;
            }
        }
    }
};

int main()
{
    Mips a;
    long int e;
    int qtd;


    do{
        a.Instrucoes();

        cout << "---------------------------------------------------" << endl;
        system("pause");
        cout << "---------------------------------------------------" << endl << endl;
        do{
            cout << "Se desejar inserir mais uma instrucao insira o codigo:\n1 - inserir\n0 - finalizar" << endl << endl;
            cout << "Codigo: ";
            cin >> qtd;
            cout << endl;
        }while(qtd != 0 && qtd != 1);
        cout << "---------------------------------------------------" << endl;
        system("pause");
        cout << "---------------------------------------------------" << endl;
     }while(qtd != 0);


    cout << endl;


    do{

        do{
            cout << "Se deseja checar um registrador insira o codigo:\n1 - checar\n0 - finalizar" << endl << endl;
            cout << "Codigo: ";
            cin >> qtd;
            cout << endl;
        }while(qtd != 0 && qtd != 1);
        if(qtd == 1){
            e = a.getR();

            cout << "Dado do registrador: "<< e << endl << endl;
            cout << "---------------------------------------------------" << endl;
            system("pause");
            cout << "---------------------------------------------------" << endl << endl;
        }
       }while(qtd != 0);

    return 0;
}
