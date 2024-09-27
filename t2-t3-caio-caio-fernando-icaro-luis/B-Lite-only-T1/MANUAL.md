# B-Lite

A linguagem B-Lite é uma linguagem de programação adaptada da linguagem B- (usada para o ensino de compiladores em cursos de graduação). 

Esta versão de B-Lite inclui expressões, fluxo de controle básico, funções e verificação de tipos. 
Algumas bibliotecas C padrão podem ser usadas para os tipos definidos na linguagem.

Descreveremos a linguagem através de exemplos, deixando para você ler com atenção, 
fazer perguntas no Fórum e então extrair 
as especificações formais necessárias para desenvolver os trabalhos do curso.

## Aspectos Léxicos

### 1. Caracteres de espacejamento (_whitespace_)

Os caracteres de espacejamento são _blank_ (' '), _newline_ ('\n'),  _tab_ ('\t') e _carriage return_ ('\r').

Os caracteres de espacejamento não têm papel significativo em programas B-Lite e devem ser desconsiderados pelo analisador léxico.

### 2. Comentários de uma linha

Comentários de uma linha (_single-line comments_) sempre são iniciados por ```//``` e se estendem até o final da linha.
Comentários devem ser desconsiderados na análise léxica.

- Exemplo: ```a=5; // comentário no estilo C++```

### 3. Identificadores

Identificadores são usados como nomes de variáveis e funções. 
São compostos por letras maiúsculas e minúsculas, dígitos decimais e _underscores_.
Identificadores devem começar com uma letra e podem ter até 256 caracteres.
Caracteres maiúsculos e minúsculos em identificadores são diferenciados.

- Exemplo: ```i x9 x9_ my_str name4you  NomeCompleto``` são identificadores válidos. 
- Exemplo: ```x9``` e ```X9``` são dois identificadores distintos.

### 4. Palavras-chave (_keywords_)

```
boolean  else  false  function  if   integer  
print  return  string   true   void   while
``` 

As palavras-chave, sempre escritas em letras minúsculas, são reservadas 
e não podem ser usadas como identificadores. 

- Exemplo: ```integer``` é palavra reservada, porém  ```IntegeR``` não é.

Três palavras reservadas representam tipos da linguagem:

```integer```, ```boolean ```, e ```string```

### 5. Símbolos especiais

#### Símbolos simples

```
  +  -  *  /  %  !  <  >  =  : ; ,  (  )  {  } "
```

#### Símbolos compostos

```
  <=  >=  ==  !=  &&  ||
```

### 6. Literais 

#### Tipo ```integer```

Uma constante inteira é uma sequência não-vazia de dígitos decimais.

#### Tipo ```boolean```

Há duas constantes válidas para o tipo ```boolean```: ```false``` e ```true```.

#### Tipo ```string```

Uma constante do tipo string é uma sequência de caracteres entre aspas duplas,
terminada por NULL e que não pode ser modificada.

Uma string pode conter os seguintes códigos de ```\```:
```\n```, indica avanço de linha (valor ASCII 10) e ```\0```, indica NULL (valor ASCII zero). 
Uma barra invertida seguida por outro caracter representa o caractere que a segue. 
Uma string pode ter até 256 caracteres.
Uma string não pode ser iniciada em uma linha e fechada em outra, por exemplo:
```
"hello
hello"
```

### 6. Erros Léxicos

- símbolo desconhecido
- string mal-formada

### Exemplos

```
x: integer;
y: integer = 123;
b: boolean = false;
s: string  = "hello world\n";
```

```
x: integer = 65;
y: boolean = true;
if(x?y) { ... } // símbolo desconhecido
```

```
f: integer = 0;
if(f<100) { print f; }
```

```
writenum: function void ( b: integer ) = { ; };
a: integer = 99;
s: string  = "hello world; // string mal-formada
writenum(a); 
```

```
s: string  = "hello 
              world";  // string mal-formada
main: function integer () = {
    i: integer = 10;
    while (i > 0) ... 
}
```

## Aspectos Sintáticos

### Programa

Um programa B-lite é uma sequência de declarações, 
sendo que cada declaração pode ser uma declaração de variável
ou uma declaração de função.

### Declaração de variável

A declaração de uma variável consiste de um identificador, seguido pelo símbolo ':', pelo seu tipo básico e pelo símbolo';'.
Em B-Lite, tipos básicos são integer, boolean e string.
Opcionalmente, a variável pode ser inicializada em sua declaração. Nesse caso, a declaração de variável incluirá a atribuição
de um valor, com o símbolo '=' seguido por um valor constante
de um tipo básico.


```
w: integer;
x: boolean;
y: integer = 123;
z: boolean = false;
a: string;
b: string = "tipos";
``

### Declaração de função

A declaração de uma função em B-lite consiste de um
identificador,  seguido pelo símbolo ':', 
pela palavra reservada FUNCTION, 
pelo tipo da função ou VOID (indica que a função não retorna valor),
por uma lista de parâmetros entre '(' e '), 
pelo o símbolo '=' e, por fim,
por um bloco de código (corpo da função).

A lista de parâmetros da função pode ser vazia, ou conter um ou mais parâmetros separados pelo símbolo ','. 
O tipo de um parâmetro é um tipo básico.

* Observação sobre aspecto semântico: 
nesta versão de B-Lite não teremos função do tipo string nem
parâmetros do tipo string. 
Mas isso não precisa ser uma preocupação do analisador sintático.

A declaração de um parâmetro é similar a declaração de variável
porém parâmetros não podem ser inicializados.

O corpo de uma função é um bloco de código que pode conter declarações de variável e comandos (_statements_).


```
square: function integer ( x: integer ) = {
    return x*x;
}
```

```
printpair: function void
 (a: integer, b: integer) = {
    print "(", a, ",");
    print b;
    print ")\n";
}

```

```
isfoo: function boolean () = {
    return true;
}

### Bloco de código

Um bloco de código pode incluir declarações de variáveis 
(locais) ou comandos entre chaves '{' e '}',
tratados como uma unidade. 
Um bloco de código deve possuir ao menos um comando.

### Comandos

Comandos (_statements_) válidos em B-Lite são: 
atribuição, _return_, seleção (_if else_),
iteração (_while_) e print.

O símbolo ";" sempre é usado no final de cada comando.

* atribuição

O comando de atribuição é formado por um identificador, seguido pelo símbolo "=" e por uma expressão.
O operador "=" não é associativo e não pode aparecer mais de uma vez no comando de atribuição.

```
  i: integer;
  i = 1;
```

```
  a: boolean;
  b: boolean;
  a = b = true;  \\ erro sintático
```

* return

* if

* while

* print

O comando "print" pode receber um ou mais argumentos separados por vírgula ','. Argumentos são expressões válidas.

* Observação sobre aspecto semântico: nesta versão de B-Lite, argumentos devem ser do tipo integer ou string. Mas isso não precisa ser uma preocupação do analisador sintático.

```
a: string = "a";
b: string = "b";

print a, " e ", b, "\n"; 

```

### Expressões

B-lite possui vários operadores aritméticos encontrados na linguagem C, com o mesmo significado, associatividade e nível de precedência.
A seguir, listamos os operadores de B-lite, da maior para a menor precedência.


```
f()              // chamada de função
- !              // negação, not
* / %            // multiplicação, divisão inteira, resto
+ -              // adição, subtração
< <= > >= == !=  // comparação
&& ||            // e lógico, ou lógico
=                // atribuição

```

### Exemplo

```
// main.bm
main: function integer () =
{
    a: integer;
    read(a);
    if (a <= 0) 
       a = 1;
    print "saida: ", a, "\n";
}

```

## Aspectos Semânticos 

TBD.
