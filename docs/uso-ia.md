# Uso de Ferramentas de IA no Projeto

## Ferramentas Utilizadas
- [x] Claude / Gemini
- [ ] ChatGPT / GPT-4o
- [ ] GitHub Copilot

## Como Usamos (exemplos reais)
| Prompt / Solicitação | O que a IA gerou | O que adaptamos/validamos |
| :--- | :--- | :--- |
| "Atuar como tutor para explicar erros de compilação no terminal do Windows e ajudar a estruturar um Makefile unificado." | Diagnóstico do erro de comandos ausentes no Windows e scripts do Makefile com flags `-fprofile-arcs` e `-pg`. | Configuramos a instalação local do GCC via MSYS2 e organizamos a estrutura de pastas seguindo as orientações do tutor. |
| "Ajudar a estruturar testes automatizados com assert para os 6 algoritmos." | Esqueleto base da lógica do arquivo `test_basic.c`. | Revisamos as funções, corrigimos caminhos e adicionamos os cenários de teste manuais para ordenação. |

## Validação & Domínio
- [x] Compilamos e rodamos todo código gerado ou sugerido
- [x] Todos conseguem explicar o funcionamento de cada algoritmo em 2 minutos
- [x] Não submetemos blocos inteiros sem revisão linha a linha

## Reflexão Final
A IA foi utilizada estritamente como um tutor de infraestrutura e ambiente de desenvolvimento, nos guiando no entendimento de como funcionam as flags de profiling (`gprof`) e cobertura (`gcov`). O domínio conceitual e a implementação dos 6 algoritmos de ordenação foram revisados e validados integralmente pelo trio, garantindo total transparência e aprendizado.