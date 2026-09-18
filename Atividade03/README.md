# Pseudocódigo — Cálculo de Média

**INÍCIO**

1. Ler o nome da disciplina.
2. Ler a quantidade de notas.

3. Se a quantidade de notas for menor que 2 ou maior que 6:
   - Exibir "Valor inválido".
   - Encerrar o programa.

4. Para cada nota:
   - Ler a nota.
   - Somar a nota ao total.

5. Calcular:
 - `média ← total / quantidade`

6. Classificar a média:
   - Se média >= 9,5 → classificação = **A**
   - Senão se média >= 8 → classificação = **B**
   - Senão se média >= 7 → classificação = **C**
   - Senão se média >= 6 → classificação = **D**
   - Senão → classificação = **E**

7. Verificar o aproveitamento:
   - Se classificação = **D** ou **E** → **Reprovado**
   - Caso contrário → **Aprovado**

8. Exibir:
   - Nome da disciplina
   - Média
   - Classificação
   - Aproveitamento

**FIM**
