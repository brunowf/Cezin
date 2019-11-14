<h4>helpinho contém funções e procedimentos para facilitar a vida do programador C<br/></h4>
<h2>#procedimentos básicos<br/></h2>
<ul>
	<li><b>p00001</b>--pr(string)/*****recebe e imprimi uma string*****/<br/></li>
	<li><b>p00002</b>--prf(float, int)/*****recebe um número X e Y casas após a vírgula, então imprime X.Yf*****/<br/></li>
	<li><b>p00003</b>--scnS(string)/*****recebe uma string, scanea ela e muda o seu valor*****/<br/></li>
</ul>
<h2>#procedimentos com vetores<br/></h2>
<ul>
	<li><b>pv0001</b>--procedureReordenarVetorCrescente(float[], int)/*****recebe um vetor e seu tamanho, então reordena o mesmo em ordem crescente*****/</li>
	<li><b>pv0002</b>--procedureReordenarVetorCrescente(float[], int)/*****recebe um vetor e seu tamanho, então reordena o mesmo em ordem decrescente*****/</li>
	<li><b>pv0003</b>--procedureScanVetor(float[], int)/*****recebe um vetor e seu tamanho, então faz scnF para cada lugar do vetor*****/</li>
	<li><b>pv0004</b>--procedureEncherVetorAleatorio(float[], int, int)/*****recebe um vetor seu tamanho e um número x,rand() % x para cada lugar do vetor, se x = 0 então só será efetuado rand()*****/</li>
</ul>
<h2>#funções básicas<br/></h2>
<ul>
	<li><b>f00001</b>--scnF()/*****scanea float e return no mesmo*****/</li>
	<li><b>f00002</b>--scnI()/*****scanea int e return no mesmo*****/</li>
	<li><b>f00003</b>--functionCalculadora(float, float, char)/*****recebe 2 números e a operação, então retorna o resultado*****/</li>
</ul>
<h2>#funções com vetores<br/></h2>
<ul>
	<li><b>fv0001</b>--functionSomarVetor(float[], int)/*****recebe um vetor e seu tamanho, então soma todos os valores do mesmo*****/</li>
	<li><b>fv0002</b>--functionRetornarMaiorNumero(float[], int)/*****recebe um vetor e seu tamanho, então retorna o seu maior valor*****/</li>
	<li><b>fv0003</b>--functionRetornarMenorNumero(float[], int)/*****recebe um vetor e seu tamanho, então retorna o seu menor valor*****/</li>
	<li><b>fv0004</b>--functionMediaVetor(float[], int)/*****recebe um vetor e seu tamanho, então faz a média aritmética de seus valores*****/</li>
	<li><b>fv0005</b>--functionMultiplicacao(float[], int)/*****recebe um vetor e seu tamanho, então faz a multiplicação de seus valores*****/</li>
</ul>
<h2>#funções específicas<br/></h2>
<ul>
	<li><b>fe0001</b>--functionConverterParaFahrenheit(float)/*****recebe um float X, então converte e retorna o seu valor em fahrenheit a partir do princípio que X está em celsius*****/</li>
	<li><b>fe0002</b>--functionSomaIntervalo(int, int)/*****recebe um X e um Y e faz a soma de [X,Y]*****/</li>
	<li><b>fe0003</b>--functionMDC(int, int)/*****recebe um X e um Y e retorna o MDC  de X e Y*****/</li>
	<li><b>fe0004</b>--functionAreaQuadrado(float)/*****recebe a base de um quadrado e retorna sua área*****/</li>
	<li><b>fe0005</b>--functionAreaRetangulo(float)/*****recebe a base e a altura de um Retângulo e retorna sua área*****/</li>
	<li><b>fe0006</b>--functionAreaTriangulo(float)/*****recebe a base e a altura de um Triângulo e retorna sua área*****/</li>
	<li><b>fe0007</b>--functionAreaTrapezio(float)/*****recebe as 2 bases e a altura de um Trapézio e retorna sua área*****/</li>
	<li><b>fe0008</b>--functionAreaLosango(float)/*****recebe as 2 diagonais de um Trapézio e retorna sua área*****/</li>
	<li><b>fe0009</b>--functionAreaCirculo(float)/*****recebe o de um Círculo e retorna sua área*****/</li>
	<li><b>fe0010</b>--functionFatorial(float)/*****recebe um número e retorna seu fatorial(3! = 1*2*3)*****/</li>
</ul>
<h2>#funções bool</h2>
<ul>
	<li><b>fb0001</b>--functionBoolPrimo(int)/*****recebe um número e se este for primo retorna 1, caso não retorna 0*****/</li>
	<li><b>fb0002</b>--functionBoolContemNoVetor(float, float[], int)/*****recebe um número x e um vetor com seu tamanho, se vetor contem x então o retorno será 1, caso não retorna 0*****/</li>
</ul>