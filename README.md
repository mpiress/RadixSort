# Heap Sort: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>

<p align="justify">
Desenvolvido por Harold H. Seward no MIT em 1954, o Radix Sort é um método de ordenação que não utiliza comparações entre elementos para ordena-los. Seu modelo de execução foi pensado para ordenar o conjunto de entrada pela ordem lexicográfica, ou seja, ordem natural crescente ou decrescente dos dígitos que compõe cada elemento do conjunto. Nesse contexto, há dois modelos operacionais do algoritmo:
</p>

1. Least Significant Digit - LSD
2. Most Significant Digit - MSD

<p align="justify">
Embora pensando a princípio para ordenar cartões perfurados e posteriormente adotado para ordenar números inteiros, o Radix Sort não se limita a essas operações. Seu modelo operacional permite que quaisquer conjuntos possam ser colocados em ordem lexicográfica sem maiores modificações em seu modo de execução. A idéia por trás desse método é observar os elementos do conjunto a partir de seus dígitos, ordenando-os sucessivamente do menor para o maior ( LSD ) ou do maior para o menor dígito encontrado ( MSD ). Vejamos a seguir uma sequência de passos para ordenar o conjunto de entrada <img src="https://render.githubusercontent.com/render/math?math={\left 123, 142, 087, 263, 233, 014, 132 \right}">. 
</p>