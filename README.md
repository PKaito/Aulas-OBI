# Ambiente de Desenvolvimento C++

Bem-vindo(a)! Este repositório é o seu ponto de partida para as nossas aulas de programação competitiva em C++ voltadas para a OBI.

Nós utilizaremos o **GitHub Codespaces** durante as aulas no laboratório para que você possa programar direto do navegador, sem precisar configurar nada na hora. No entanto, para estudar, resolver listas de exercícios e testar seus algoritmos em casa, você precisará preparar o seu computador pessoal.

Este guia mostrará como configurar a sua máquina e como manter seus códigos sincronizados entre o laboratório e a sua casa.

---

## Parte 1: Preparando o seu Computador

Para programar em C++ na sua própria máquina, você precisará instalar três ferramentas fundamentais: O Visual Studio Code, o Git e o compilador. 

### 1. Visual Studio Code (VS Code)
O VS Code é o editor de código que usaremos. É nele onde você passará a amaior parte do tempo de estudo. Ele é uma IDE que você utilizará para escrever, editar e testas seus códigos. 
* **Download:** Acesse o [site oficial do VS Code](https://code.visualstudio.com/) e baixe a instalação padrão de acordo com o seu sistema operacional.

### 2. Git
O Git é a ferramenta que faz o controle de versão. Integrado com o GitHub, ele serve para manter uma cópia dos programas que você vai escrever, além de manter um registro das versões dos seus programas.
* **Windows:** Acesse o [site oficial do Git](https://git-scm.com/download/win), baixe o instalador e prossiga com as opções padrão.
* **Linux (Ubuntu/Mint):** Abra o terminal e digite: `sudo apt update` e depois `sudo apt install git`.
* **macOS:** Abra o terminal e digite `git --version`. Se não estiver instalado, confirme a instalação das ferramentas de desenvolvedor.

### 3. Compilador C++ e Make
Como vocês já devem saber, o computador não entende português, nem inglês e, por incrível que pareça, em códigos em C++. Para que os cósigos que você escreve sejam entendidos pela máquina, eles devem ser traduzidos para linguágem de máquina. É para isso que serve o compilador.
O VS Code e o Git **não** vêm com um compilador embutido na sua máquina local. Instale de acordo com seu sistema:

* **Windows (MinGW/MSYS2):** Siga o [Tutorial Oficial do VS Code para C++ no Windows](https://code.visualstudio.com/docs/cpp/config-mingw) para instalar o MSYS2 e adicionar o caminho (`PATH`) nas variáveis de ambiente. 
  * **Ajuste importante no Windows (Make):** O Windows instala o comando `make` com o nome longo `mingw32-make.exe`. Para facilitar nossa vida e padronizar com o laboratório, vá até a pasta onde ele foi instalado (geralmente `C:\msys64\ucrt64\bin`), encontre o arquivo `mingw32-make.exe`, **copie e cole** o arquivo na mesma pasta, e renomeie a cópia para apenas `make.exe`.
* **Linux (Ubuntu/Mint):** Abra o terminal e instale o pacote essencial:
  ```bash
  sudo apt update
  sudo apt install build-essential
  ```
* **macOS:** Abra o terminal e digite `xcode-select --install`.

---

## Parte 2: Trazendo o código da nuvem para o PC (Clone)

Depois de clicar em "Use this template" no GitHub e criar o **seu** repositório, baixe-o para a sua máquina:

1. Crie uma pasta no seu computador para a disciplina.
2. Abra essa pasta, clique com o botão direito e selecione **"Open Git Bash here"** (no Windows) ou abra o terminal neste local.
3. Copie o link HTTPS do seu repositório no GitHub.
4. No terminal, digite o comando abaixo e aperte Enter:

```bash
git clone [https://github.com/SEU_USUARIO/NOME_DO_SEU_REPOSITORIO.git](https://github.com/SEU_USUARIO/NOME_DO_SEU_REPOSITORIO.git)
```
Abra a pasta recém-criada no VS Code.

---

## Parte 3: O Fluxo de Trabalho (O Ciclo do Código)

A rotina de estudar em casa e no laboratório envolve sempre três etapas: Atualizar, Codificar e Salvar na Nuvem.

### 1. Antes de começar a programar: Atualizar (Pull)
Para baixar as atualizações que você fez no laboratório para o seu PC, abra o terminal integrado do VS Code (`Ctrl` + `'`) e digite:

```bash
git pull
```

### 2. Durante o estudo: Programar e Testar (O comando Make)
Escreva seus algoritmos no VS Code. Para compilar (transformar o texto em um programa executável), nós não precisamos digitar comandos longos. Utilizaremos o atalho `make`. 

Se você criou um arquivo chamado `meu_programa.cpp`, basta digitar no terminal o comando `make` seguido do nome do arquivo **sem a extensão .cpp**:

```bash
# 1. Compilar o arquivo (o sistema já entende que deve procurar o .cpp)
make meu_programa

# 2. Executar o programa criado
# No Windows:
.\meu_programa.exe

# No Linux, macOS ou Codespace:
./meu_programa
```

### 3. Ao terminar: Salvar na Nuvem (Add, Commit e Push)
Para enviar seus exercícios prontos para o GitHub e acessá-los no laboratório depois, execute os três comandos abaixo em ordem:

```bash
# 1. Prepara todos os arquivos modificados
git add .

# 2. Tira uma "foto" das alterações
git commit -m "Termina a lista de exercícios 01"

# 3. Envia os arquivos para a nuvem
git push
```

Pronto! Seus códigos estão sincronizados e seguros.
