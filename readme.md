<p align="center" width="100%">
<img src="img/langc.png" height = "33%" width = "40%">
</p>

# Repositorio de Estudos basicos de Logica de Programação em C

focando em estudar e exercitar os conceito da linguagem C fiz esse repositorio para servir de apoio tanto para mim quanto para 
quem queira aprender ou rever alguns conceitos de logica de programação e de linguagem C

Os conteudos ja estudados vem do basico ao avançado, visando exercitar e fixar alguns conceitos importantes para a pratica de desenvolvimento
de sistemas.

Tudo que foi estudado sobre a lang sera adicionado a este repositorio ou sera criado outro de assuntos derivados e projetos diferente, como por exemplo estudar estruturas de dados.

C é uma linguagem de programação compilada de propósito geral, estruturada, imperativa, procedural, padronizada pela Organização Internacional para Padronização (ISO), criada em 1972 por Dennis Ritchie na empresa AT&T Bell Labs para desenvolvimento do sistema operacional Unix (originalmente escrito em Assembly). veja mais no artigo da Wikipedia da linguagem C [C (linguagem de programação)](https://pt.wikipedia.org/wiki/C_(linguagem_de_programa%C3%A7%C3%A3o))


## Windows

Para compilar os projetos no windows, certifique-se de estar com o mingw instalado:

[MinGW](https://pt.wikipedia.org/wiki/MinGW)

[Downloud do MinGW](https://osdn.net/projects/mingw/releases/)

Videos de apoio de como configurar o MinGW no Windows e utilizar no Vscode

[How to Run C in Visual Studio Code on Windows 10 2022 Best Code Editor](https://www.youtube.com/watch?v=oaebkkOP2Qg)

[Como Baixar e Configurar VS Code para Compilar C/C++](https://www.youtube.com/watch?v=WHyxv69ZAf0)

Apos a configuração, e bem simples basta adicionar chamar no terminal o compilador gcc e em seguida o nome do programa.c depois -o e nome do executavel 

### EXEMPLO

```
gcc hello.c -o ola
```
## LINUX

Basta ter instalado o compilador gcc caso não estiver instalado e so rodar o comando 

* Ubuntu
```
sudo apt-get install gcc
```
* Verifica se foi instalado corretamente
```
gcc -help
```

Apos a instalação do gcc no linux, basta rodar o comando de compilação do codigo, diferente do windows primeiro informamos o nome que sera atribuido ao arquivo apos a compilação sendo assim o nome do arquivo.c vem depois

```c
gcc o ola hello.c
```

