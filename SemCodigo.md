<h2>Resolução da revisão.</h2>

<h3>1) Descreva as etapas da compilação.</h3>

<ul>
  <li>Pre-Processamento: Processamento das diretivas.</li>
  <li>Compilação: Verificação das sintaxes e conversão para o código-objeto.</li>
  <li>Montagem: Converte o código-objeto em código de maquina.</li>
  <li>Ligação: Junta todos os arquivos necessários para criar o programa executável e conecta o código objeto com as bibliotecas do sistema.</li>
</ul>

<h3>2) Qual o efeito dos seguintes comandos de compilação?</h3>

   <b> a) gcc prog.c -o prog </b>
   <p>- Gera um executável com nome de prog.exe.</p>

   <b> b) gcc prog.c </b>
   <p>- Gera um executável com nome de a.exe.</p>

   <b> c) gcc prog.c -o aux.c entsai.c </b>
   <p>- Aqui vai acontecer um erro, pois o GCC não pode gerar um arquivo de código-fonte como saída.</p> 
   
   <b> d) gcc progA.c progB.o </b>
   <p>- Compila o progA.c e o junta com o progB.o, gerando um executável.</p>

<h3>3) Quais são os dois tipos de coment ́arios que podem ser escritos nos programas C?</h3>
   <p> 1 - Comentário de linha única que começa com // e vai até o final da linha. <br>
	    2 - Comentário de múltipla linhas que começa com /* e termina com */, esse
tipo de comentário pode abranger várias linhas.</p>

   <h3>18) Identifique e corrija os erros em cada uma das seguintes instruções:</h3>
   
   <b> a) printf("O valor  ́e %d", &numero); </b>
   <p> -printf("O valor  ́e %d", numero); </p>

   <b> b) scanf("%d%d", &numero1, numero2); </b>
   <p> -scanf("%d%d", &numero1, &numero2); </p>

   <b> c) printf("A soma  ́e %d \n,"x+y); </b>
   <p> -printf("A soma  ́e %d \n", x+y); </p> 
   
   <b> d) scanf("d", valor); </b>
   <p> -scanf("d", &valor); </p>
   
<h3>19) Que valores serão impressos pelo o programa a seguir?</h3>

<p> -Os valores que serão exibidos: 
<b>4 5.700000, 3 6, 2 9.000000, 3 6</b>. </p>

<h3>20) O que será impresso pelo o programa a seguir, se o usuário digitar o número 6? E o número -6?</h3>

<p> -Se o usuário digitar o número "6" o resultado vai ser: num. positivo e num. menor que 10. Agora, se for digitado "-6" aparecerá: num. menor que 10.
</b>.</p>
