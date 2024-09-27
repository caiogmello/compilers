# B-Lite-Minus

Subconjunto da linguagem B-Lite para o trabalho.

+ [Aspectos Léxicos](#aspectos-léxicos)
+ [Aspectos Sintáticos](#aspectos-sintáticos)
+ Aspectos Semânticos

A linguagem B-Lite-Minus é uma linguagem de programação adaptada da linguagem B- (usada para o ensino de compiladores em cursos de graduação). 

Esta versão inclui expressões inteiras e booleanas, fluxo de controle básicoe funções recursivas.

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
print  return  true   void   while
``` 

As palavras-chave, sempre escritas em letras minúsculas, são reservadas 
e não podem ser usadas como identificadores. 

- Exemplo: ```integer``` é palavra reservada, porém  ```IntegeR``` não é.

Duas palavras reservadas representam tipos da linguagem:

```integer``` e ```boolean ```.

### 5. Símbolos especiais

#### Símbolos simples

```
  +  -  *  /  = <  >  : ; ,  (  )  {  } "
```

#### Símbolos compostos

```
  <=  >=  ==  != 
```

### 6. Literais 

#### Tipo ```integer```

Uma constante inteira é uma sequência não-vazia de dígitos decimais.

#### Tipo ```boolean```

Há duas constantes válidas para o tipo ```boolean```: ```false``` e ```true```.


### 7. Erros Léxicos

- símbolo desconhecido

### Exemplos

```
x: integer;
y: integer = 123;
b: boolean = false;
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
writenum(a); 
```

```
main: function integer () = {
    i: integer = 10;
    while (i > 0) ... 
}
```
---

## Aspectos Sintáticos

### Programa

Um programa B-Lite-Minus é uma sequência de declarações, 
sendo que cada declaração pode ser uma declaração de variável
ou uma declaração de função.

### Declaração de variável

A declaração de uma variável consiste de um identificador, seguido pelo símbolo ':', pelo seu tipo básico e pelo símbolo';'.
Em B-Lite-Minus, tipos básicos são integer e boolean.
Opcionalmente, a variável pode ser inicializada em sua declaração. Nesse caso, a declaração de variável incluirá a atribuição
de um valor, com o símbolo '=' seguido por um valor constante
de um tipo básico.

```
w: integer;
x: boolean;
y: integer = 123;
z: boolean = false;
```

### Declaração de função

A declaração de uma função consiste de um
identificador,  seguido pelo símbolo ':', 
pela palavra reservada FUNCTION, 
pelo tipo da função ou VOID (indica que a função não retorna valor),
por uma lista de parâmetros entre '(' e '), 
pelo o símbolo '=' e, por fim,
por um bloco de código (corpo da função).

A lista de parâmetros da função pode ser vazia, ou conter um ou mais parâmetros separados pelo símbolo ','. 
O tipo de um parâmetro é um tipo básico.

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
    print a;
    print b;
}

```

```
isfoo: function boolean () = {
    return true;
}
```

### Bloco de código

Um bloco de código pode incluir declarações de variáveis 
(locais) ou comandos entre chaves '{' e '}',
tratados como uma unidade. 
Um bloco de código deve possuir ao menos um comando.

### Comandos

Comandos (_statements_) válidos em B-Lite-Minus são: 
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

O comando "return" retorna o valor de uma expressão ou nenhum valor.

```
return (a * b);
return square(a);
return ;             // retorno sem valor
```

* if

O comando de seleção "if" pode ter um ou dois ramos.

```
if (a > b) print a;
```
```
if (a > b) 
  print a; 
else 
  print b;
```
```
if ((a+b) > c) { 
  print a; print b; 
} 
else
  if (c > 0) print c;
```

* while

O comando de iteração "while".

```
while (a > b) {
   print a;
   a = a - b;
}
```

* print

O comando "print" pode receber um ou mais argumentos separados por vírgula ','. Argumentos são expressões válidas.

* Observação sobre um aspecto semântico de B-lite-minus: 
argumentos devem ser do tipo integer apenas. 
Mas isso não precisa ser uma preocupação do analisador sintático.

```
print a, b, a+b; 
```

### Expressões

Expressões são inteiras ou booleanas. Expressões válidas incluem 
constantes inteiras ou booleanas, chamada de função, expressão entre
parênteses, expressões aritméticas e relacionais.

B-Lite-Minus possui vários operadores aritméticos e operadores relacionais
binários. Não há operadores unários.
A seguir, listamos os operadores, da maior para a menor precedência
e informações sobre associatividade.


```
f()              // chamada de função
* /              // multiplicação, divisão inteira - esquerda
+ -              // adição, subtração - esquerda
< <= > >= == !=  // relacional -  não associativo
=                // atribuição -  não associativo

```

### Exemplos
```
a != b
a < b < c  \\ erro sintático
a = b = c  \\ erro sintático
a = -b     \\ erro sintático
```

```
// main.bm
main: function integer () =
{
    a: integer;
    read(a);
    if (a <= 0) 
       a = 1;
    print a;
}
```

## Aspectos Semânticos 

TBD.
