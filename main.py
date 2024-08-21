"""
Esse script cria 217 pastas chamadas 'exercicio-1' até 'exercicio-217'. Dentro
de cada pasta, cria um arquivo vazio chamado 'main.c'.
"""

import os

for i in range(1, 218):
    diretorio = f"./exercicio-{i}"
    os.mkdir(diretorio)
    arquivo = os.path.join(diretorio, "main.c")
    open(arquivo, "w").close()
