#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Projeto PIM 2 hospitais.
// 3 hospitais dentro da rede Apolo : Quiron, Artemis, Asclepio
 void menu_login (void) //Inicio do main, permite acesso ou não para um usuario
 {
    std::string login, login_certo, senha_certa, senha;
    int tentativas=0;
    bool L,S;
    setlocale(LC_ALL, "Portuguese");

    login_certo = "login";
    senha_certa = "1234";
    printf("--Tela de login--\n");
    inicio_login :
    printf("Login :");
    cin >> login;
    cin.clear();
    printf("senha :");
    cin >> senha;
    cin.clear();
    L = (login_certo == login);
    S = (senha_certa == senha);
    system("cls");
    if ((L==1)&&(S==1))
    {
        cout << "--Login correto--\n";
        return;
    }
    else
    {
        cout << "Login ou senha incorreto\nTente novamente\n";
        ++tentativas;
        cout << tentativas << " Tentativa(s) restante(s)" <<"\n";
        if (tentativas>=3)
        {
            cout << "Numero de tentaivas excedido";
            abort();
        }
        goto inicio_login;

    }

 }
void cadastro_paciente (void)
{
    std:string nome_paciente, sobrenome_paciente, cpf_paciente, plano_saude_paciente, logradouro_endereco_paciente, rua_endereco_paciente;
    int numero_endereco_paciente,dia_nascimento_paciente, mes_nascimento_paciente, ano_nascimento_paciente, op_cadastro;
    setlocale(LC_ALL, "Portuguese");

    inicio_cadastro_paciente:
    cout << "CADASTRO PACIENTE\n";
    cout << "digite os dados solicitados na ordem solicitada \n";
    cout << "--Dados pessoais--\n";
    cout << "Nome :";
    cin >> nome_paciente;
    cout << "\nsobrenome :";
    cin >> sobrenome_paciente;
    cout << "\ncpf :";
    cin >> cpf_paciente;
    cout << "\nPlano de saude :";
    cin >> plano_saude_paciente;
    cout << "\nDia de nascimento :";
    cin >> dia_nascimento_paciente;
    cout << "\n Mes de nascimento :";
    cin >> mes_nascimento_paciente;
    cout << "\n Ano de nascimento :";
    cin >> ano_nascimento_paciente;
    cout << "\n--Endereço--\n";
        cout << "logradouro :";
        cin >> logradouro_endereco_paciente;
        cout << "\nRua :";
        cin  >> rua_endereco_paciente;
        cout << "\nNumero :";
        cin >> numero_endereco_paciente;
    cout << "Deseja reescrever as informações ?\n1 para sim ou qualquere numero para não";
    cin >> op_cadastro;
    if (op_cadastro == 1)
        goto inicio_cadastro_paciente;
    }
void cadastro_medico(void)
{
    std:string nome_medico, sobrenome_medico, cpf_medico, crm_medico, logradouro_endereco_medico, rua_endereco_medico;
    int numero_endereco_medico,dia_nascimento_medico, mes_nascimento_medico, ano_nascimento_medico,op_cadastro;
    setlocale(LC_ALL, "Portuguese");

    inicio_cadastro_medico:
    cout << "CADASTRO MEDICO\n";
    cout << "digite os dados solicitados na ordem solicitada \n";
    cout << "--Dados pessoais--\n";
    cout << "Nome :";
    cin >> nome_medico;
    cout << "\nsobrenome :";
    cin >> sobrenome_medico;
    cout << "\ncpf :";
    cin >> cpf_medico;
    cout << "\nCRM :";
    cin >> crm_medico;
    cout << "\nDia de nascimento :";
    cin >> dia_nascimento_medico;
    cout << "\n Mes de nascimento :";
    cin >> mes_nascimento_medico;
    cout << "\n Ano de nascimento :";
    cin >> ano_nascimento_medico;
    cout << "\n--Endereço--\n";
        cout << "logradouro :";
        cin >> logradouro_endereco_medico;
        cout << "\nRua :";
        cin  >> rua_endereco_medico;
        cout << "\nNumero :";
        cin >> numero_endereco_medico;
    cout << "Deseja reescrever as informações ?\n1 para sim ou qualquere numero para não";
    cin >> op_cadastro;
    if (op_cadastro == 1)
        goto inicio_cadastro_medico;
}
void cadastro_usuario(void)
{
    std:string nome_user, sobrenome_user, cpf_user, logradouro_endereco_user, rua_endereco_user, login, senha;
    int numero_endereco_user,dia_nascimento_user, mes_nascimento_user, ano_nascimento_user,op_cadastro;
    setlocale(LC_ALL, "Portuguese");

    inicio_cadastro_usuario:
    cout << "CADASTRO PACIENTE\n";
    cout << "digite os dados solicitados na ordem solicitada \n";
    cout << "--Dados pessoais--\n";
    cout << "Nome :";
    cin >> nome_user;
    cout << "\nsobrenome :";
    cin >> sobrenome_user;
    cout << "\ncpf :";
    cin >> cpf_user;
    cout << "\nDia de nascimento :";
    cin >> dia_nascimento_user;
    cout << "\n Mes de nascimento :";
    cin >> mes_nascimento_user;
    cout << "\n Ano de nascimento :";
    cin >> ano_nascimento_user;
    cout << "\n--Endereço--\n";
        cout << "logradouro :";
        cin >> logradouro_endereco_user;
        cout << "\nRua :";
        cin  >> rua_endereco_user;
        cout << "\nNumero :";
        cin >> numero_endereco_user;
        cout << "\nLogin de usuario :";
        cin >> login;
        cout << "\nSenha de usuario :";
        cin >> senha;
    cout << "Deseja reescrever as informações ?\n1 para sim ou qualquer numero para não";
    cin >> op_cadastro;
    if (op_cadastro == 1)
        goto inicio_cadastro_usuario;
}
void agendamento_exame(void)
{
    std::string nome_paciente, sobrenome_paciente, telefone_contato, especialidade_exame, horario_exame, unidade_exame;
    int op_unidade, dia_exame, mes_exame, ano_exame;
    float valor;

    setlocale(LC_ALL, "Portuguese");
    cout << "\n--AGENDAMENTO DE EXAME--\n";
    cout << "--DADOS DO PACIENTE--\n";
    cout << "nome :";
    cin >> nome_paciente;
    cout << "\nSobrenome :";
    cin >> sobrenome_paciente;
    cout << "\ntelefone de contato :";
    cin >> telefone_contato;
    cout << "\n--DADOS DO EXAME--\n";
    cout << "especialidade do exame";
    cin >> especialidade_exame;
    cout << "\nhorário exame :";
    cin >> horario_exame;
    cout << "\nDia do exame :";
    cin >> dia_exame;
    cout << "\nMes do exame :";
    cin >> mes_exame;
    cout << "\nAno exame :";
    cin >> ano_exame;
    selecionar_unidade:
    op_unidade = 0;
    cout << "\nUnidade (1 para Quiron, 2 para Artemis, 3 para Asclepio) :";
    cin >> op_unidade;
    switch (op_unidade)
    {
    case 1 :
        unidade_exame = "quiron";
        break;
    case 2:
        unidade_exame = "Artemis";
        break;
    case 3:
        unidade_exame = "Asclepio";
        break;
    default :
        cout << "Unidade invalida.\n";
        goto selecionar_unidade;
    }
    cout << "exame para a data" <<  dia_exame << "/" <<mes_exame << "/" <<ano_exame << "Em nome de " << nome_paciente << " " <<sobrenome_paciente << "Foi agendada com sucesso !!\n";
}
void agendamento_consulta(void)
{
    std::string nome_paciente, sobrenome_paciente, telefone_contato, especialidade_consulta, horario_consulta, unidade_consulta;
    int op_unidade, dia_consulta, mes_consulta, ano_consulta;
    float valor;

    setlocale(LC_ALL, "Portuguese");
    cout << "\n--AGENDAMENTO DE EXAME--\n";
    cout << "--DADOS DO PACIENTE--\n";
    cout << "nome :";
    cin >> nome_paciente;
    cout << "\nSobrenome :";
    cin >> sobrenome_paciente;
    cout << "\ntelefone de contato :";
    cin >> telefone_contato;
    cout << "\n--DADOS DO EXAME--\n";
    cout << "especialidade do exame";
    cin >> especialidade_consulta;
    cout << "\nhorário exame :";
    cin >> horario_consulta;
    cout << "\nDia do exame :";
    cin >> dia_consulta;
    cout << "\nMes do exame :";
    cin >> mes_consulta;
    cout << "\nAno exame :";
    cin >> ano_consulta;
    selecionar_unidade:
    cout << "Unidade";
    cout << "digite 1 para Quiron\n2 para Artemis\n3 para Asclepio";
    cin >> op_unidade;
    switch (op_unidade)
    {
    case 1 :
        unidade_consulta = "quiron";
        break;
    case 2:
        unidade_consulta = "Artemis";
        break;
    case 3:
        unidade_consulta = "Asclepio";
        break;
    default :
        cout << "Unidade invalida.\n";
        goto selecionar_unidade;
    }
     cout << "consulta para a data" <<  dia_exame << "/" <<mes_exame << "/" <<ano_exame << "Em nome de " << nome_paciente << " " <<sobrenome_paciente << "Foi agendada com sucesso !!\n";
}
void menu_relatorios(void)
{
    int op_relatorios,quantidade_total, quant_paciente_artemis_exame, quant_paciente_artemis_consulta,  quant_paciente_quiron_exame, quant_paciente_quiron_consulta,  quant_paciente_asclepio_exame, quant_paciente_asclepio_consulta;
        float valor_total_unidade_quiron, valor_total_unidade_artemis, valor_total_unidade_asclepio, valor_total;
        float valor_exame, valor_consulta, total_consulta_artemis, total_consulta_asclepio, total_consulta_quiron,  total_exame_artemis, total_exame_asclepio, total_exame_quiron;
    do {

        setlocale(LC_ALL, "Portuguese"); // permite o uso de acentos dentro dos textos.
        cout << "\n--RELATORIOS--\n";
        cout << "Digite qual relatório deseja gerar\n";
        cout << "1 exames e consultas por unidade ou rede\n";
        cout << "2 para pacientes totais e por unidade\n";
        cout << "3 Atendimento por unidade\n";
        cin >> op_relatorios;
        system("cls"); // elimina a parte já utilizada de texto para manter a area de trabalho do usuario sempre limpa
        switch (op_relatorios)
        {
        case 1:
            op_relatorios = 0;
            cout << "Deseja criar relatório para um hospital ou para a rede toda ?\n";
            cout << "1 para artemis, 2 para asclepio, 3 para quiron, 4 para todos da rede :";
            cin >> op_relatorios;
            system("cls");
            switch (op_relatorios)
            {
            case 1:
                cout << "Digite a quantidade de pacientes atendidos em exame na Artemis :\n";
                cin >> quant_paciente_artemis_exame;
                cout << "Digite o valor do exame :";
                cin >> valor_exame;
                cout << "\nDigite a quantidade de pacientes em consulta na artemis :";
                cin >> quant_paciente_artemis_consulta;
                cout << "\nvalor consulta :";
                cin >> valor_consulta;
                total_consulta_artemis = (valor_consulta*quant_paciente_artemis_consulta);
                total_exame_artemis = (valor_exame*quant_paciente_artemis_exame);
                valor_total_unidade_artemis = (total_consulta_artemis+total_exame_artemis);
                system("cls");
                cout <<"\nvalor total :" << valor_total_unidade_artemis;
                cout << "\nporcentagem consulta:" << total_consulta_artemis/valor_total_unidade_artemis;
                cout << "\nporcentagem exame :" << total_exame_artemis/valor_total_unidade_artemis;
                break;
            case 2:
                cout << "\nDigite a quantidade de pacientes atendidos em exame na Asclepio :";
                cin >> quant_paciente_asclepio_exame;
                cout << "\nDigite o valor do exame :";
                cin >> valor_exame;
                cout << "\nDigite a quantidade de pacientes em consulta na asclepio :";
                cin >> quant_paciente_asclepio_consulta;
                cout << "\nvalor consulta :";
                cin >> valor_consulta;
                total_consulta_asclepio = (valor_consulta*quant_paciente_asclepio_consulta);
                total_exame_asclepio = (valor_exame*quant_paciente_asclepio_exame);
                valor_total_unidade_asclepio = (total_consulta_asclepio+total_exame_asclepio);
                system("cls");
                cout << "\nvalor total :" << valor_total_unidade_asclepio;
                cout << "\nporcentagem consulta:" << (total_consulta_asclepio/valor_total_unidade_asclepio)*100;
                cout << "\nporcentagem exame :" << (total_exame_asclepio/valor_total_unidade_asclepio)*100;
                break;
            case 3 :
                cout << "\nDigite a quantidade de pacientes atendidos em exame na quiron :";
                cin >> quant_paciente_quiron_exame;
                cout << "\nDigite o valor do exame :";
                cin >> valor_exame;
                cout << "\nDigite a quantidade de pacientes em consulta na quiron :";
                cin >> quant_paciente_quiron_consulta;
                cout << "\nvalor consulta :";
                cin >> valor_consulta;
                total_consulta_quiron = (valor_consulta*quant_paciente_quiron_consulta);
                total_exame_quiron = (valor_exame*quant_paciente_quiron_exame);
                valor_total_unidade_quiron = (total_consulta_quiron+total_exame_quiron);
                system("cls");
                cout <<"\nvalor total :" << valor_total_unidade_quiron;
                cout << "\nporcentagem consulta:" << total_consulta_quiron/valor_total_unidade_quiron;
                cout << "\nporcentagem exame :" << total_exame_quiron/valor_total_unidade_quiron;
                break;
            case 4:
                cout << "\nDigite a quantidade de pacientes e o valor da consulta das unidades da rede :";
                cout << "\nValor da consulta :";
                cin >> valor_consulta;
                cout << "\nvalor do exame :";
                cin >> valor_exame;
                cout << "\nquantidade de pacientes de consulta artemis :";
                cin >> quant_paciente_artemis_consulta;
                cout << "\nQuantidade de pacientes exame artemis :";
                cin >> quant_paciente_artemis_exame;
                total_consulta_artemis = (valor_consulta*quant_paciente_artemis_consulta);
                total_exame_artemis =(valor_exame*quant_paciente_artemis_exame);
                valor_total_unidade_artemis = total_consulta_artemis;
                cout << "\nquantidade de pacientes de consulta asclepio :";
                cin >> quant_paciente_asclepio_consulta;
                cout << "\nQuantidade de pacientes exame asclepio :";
                cin >> quant_paciente_asclepio_exame;
                total_consulta_asclepio = (valor_consulta*quant_paciente_asclepio_consulta);
                total_exame_asclepio = (valor_exame*quant_paciente_asclepio_exame);
                valor_total_unidade_asclepio = (total_consulta_asclepio+total_exame_asclepio);
                cout << "\nquantidade de pacientes de consulta quiron :";
                cin >> quant_paciente_quiron_consulta;
                cout << "\nQuantidade de pacientes exame quiron :";
                cin >> quant_paciente_quiron_exame;
                total_consulta_quiron = (valor_consulta*quant_paciente_quiron_consulta);
                total_exame_quiron =(valor_exame*quant_paciente_quiron_exame);
                valor_total_unidade_quiron = (total_consulta_quiron+total_exame_quiron);
                valor_total = (valor_total_unidade_artemis + valor_total_unidade_asclepio + valor_total_unidade_quiron);
                quantidade_total = ((quant_paciente_artemis_consulta+quant_paciente_artemis_exame)+(quant_paciente_asclepio_consulta+quant_paciente_asclepio_exame)+(quant_paciente_quiron_consulta+quant_paciente_quiron_exame));
                system("cls");
                cout << "\nvalor total :" << valor_total << "\nquantidade de pacientes :" << quantidade_total;
                cout << "\nporcentagem exame artemis :" << (total_exame_artemis/valor_total)*100 << "\npercentagem consulta artemis :" << (total_consulta_artemis/valor_total)*100 << "\nTotal de pacientes artemis :" << (quant_paciente_artemis_consulta+quant_paciente_artemis_exame);
                cout << "\nporcentagem exame asclepio :" << (total_exame_asclepio/valor_total)*100 << "\npercentagem consulta asclepio :" << (total_consulta_asclepio/valor_total)*100 << "\nTotal de pacientes asclepio :" << (quant_paciente_asclepio_consulta+quant_paciente_asclepio_exame);
                cout << "\nporcentagem exame quiron :" << (total_exame_quiron/valor_total)*100 << "\npercentagem consulta quiron :" << (total_consulta_quiron/valor_total)*100 << "\nTotal de pacientes quiron :" << (quant_paciente_quiron_consulta+quant_paciente_quiron_exame);
                break;
                }
        break;
        case 2:
            cout << "PACIENTES";
            cout << "\nDigite o total de pacientes por tipo de atendimento para cara unidade da rede :";
            cout << "\nArtemis :";
            cout << "\nexame :";
            cin >> quant_paciente_artemis_consulta;
            cout << "\nConsulta :";
            cin >> quant_paciente_artemis_exame;
            cout << "\nAsclepio :";
            cout << "\nexame :";
            cin >> quant_paciente_asclepio_consulta;
            cout << "\nConsulta :";
            cin >> quant_paciente_asclepio_exame;
            cout << "\nQuiron :";
            cout << "\nexame :";
            cin >> quant_paciente_quiron_consulta;
            cout << "\nConsulta :";
            cin >> quant_paciente_quiron_exame;
            system("cls");
            quantidade_total = (quant_paciente_artemis_consulta+quant_paciente_artemis_exame+quant_paciente_asclepio_consulta+quant_paciente_asclepio_exame+quant_paciente_quiron_consulta);
            cout << "\nquantidade total :" << quantidade_total;
            break;
        case 3:
            cout << "atendimento por unidade (exame,consulta)\n";
            cout << "Artemis :";
            cin >> quant_paciente_artemis_exame >> quant_paciente_artemis_consulta;
            cout << "Asclepio :";
            cin >> quant_paciente_asclepio_consulta >> quant_paciente_asclepio_exame;
            cout << "Quirion :";
            cin >> quant_paciente_quiron_consulta >> quant_paciente_quiron_exame;
            system("cls");
            cout << "\nTotal de atendimentos :" << (quant_paciente_artemis_exame + quant_paciente_artemis_consulta+ quant_paciente_asclepio_consulta + quant_paciente_asclepio_exame+ + quant_paciente_quiron_consulta + quant_paciente_quiron_exame);
            cout << "\nTotal Artemis :" << (quant_paciente_artemis_consulta+quant_paciente_artemis_exame);
            cout << "\nTotal asclepio :" << (quant_paciente_asclepio_consulta+quant_paciente_asclepio_exame);
            cout << "\ntotal Quiron :" << (quant_paciente_quiron_consulta+quant_paciente_quiron_exame);
            break;
        }

        }
    while (op_relatorios!=0); // enquanto a opção digitada não for 0 a tela de relatórios se repetirá

}

int main(void)
{
    int op_menu,op_cadastro,op_agendamento;
    setlocale(LC_ALL, "Portuguese");

    printf("\n--Bem vindo a Apolo--\n");
    menu_login();
    do {
    cout << "Digite a opção desejada\n";
    cout << "1 para cadastro\n2 para agendamento\n3 para relatórios\n4 para sair\n";
    cin >> op_menu;
    system("cls");
    switch (op_menu)
    {
    case 1:
        cout << "\n1 para paciente\n2 para medico\n3 para usuario\n";
        cin >> op_cadastro;
        system("cls");
        switch (op_cadastro)
        {
        case 1 :
            cadastro_paciente();
            break;
        case 2 :
            cadastro_medico();
            break;
        case 3 :
            cadastro_usuario();
            break;
        }
    break;
    case 2:
        cout << "\nDigite 1 para agendamento de exames ou 2 para agendamento de consultas.\n";
        cin >> op_agendamento;
        system("cls");
        switch (op_agendamento)
        {
        case 1:
            agendamento_exame();
            break;
        case 2:
            agendamento_consulta();
            break;
        }
        break;
    case 3:
        menu_relatorios();
        break;
    case 4 :
        abort();
        break;
    }
    }
    while (op_menu!=0);
}
