## Links para fotos e vídeos do projeto

[Link para o protótipo online](https://www.tinkercad.com/things/akCg88iW9WA/editel?returnTo=%2Fdashboard&sharecode=WqnD42oN8zIFyLqqguqXd1jxRh6waiENstakTzs-lbQ)

[Vídeo do funcionamento do semaforo](https://drive.google.com/file/d/1egiPVe8DH7hFEnp-VplK2zVKEZk_eON9/view?usp=sharing)

[Foto da montagem](https://drive.google.com/file/d/146QADnVIHMe9oC8pvjR1N1qkgMunGdEP/view?usp=sharing)

## Explicação breve da produção do código

Fiz o código da forma mais simples possível, utilizando apenas o delay para determinar o tempo dos leds. Não sabia como utilizar o buzzer, inclusive tentei utilizá-lo com resistor, mas depois de aprender um pouco vi que não se utiliza resistor com buzzer. Não sabia também como programá-lo, mas depois de [pesquisar](https://www.blogdarobotica.com/2020/10/05/utilizando-o-buzzer-ativo-no-arduino/) um pouco mais, aprendi bem rápido.

Fiquei bem feliz com o resultado final e muito orgulhoso também, confesso que essa foi a primeira ponderada de programação que eu não utilizei ChatGPT em nenhum momento. Que venham as próximas!

### Lista de materiais

| Item     | Quantidadde     |
|---------------|---------------|
| Jumper macho-macho vermelho | 4 |
| Jumper macho-fêmea vermelho | 3 |
| Jumper macho-fêmea marrom | 3 |
| Resistor 10k ohms | 3 |
| Jumper macho-macho preto | 3 |
| Buzzer | 1 |
| Led vermelho | 1 |
| Led amarelo | 1 |
| Led verde| 1 |
| Arduino Uno | 1 |
| Cabo conector | 1 |
| Protoboard | 1 |
| Fita isolante | 1 |
| Suporte em formato de semáforo | 1 |

## Avaliação de pares

### Avaliador: Yasmim Marly Passos

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |Nota 3: Os fios estão bem organizados, os resistores foram usados adequadamente para evitar que componentes queimem, e as cores dos LEDs estão corretas.|
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |Nota 3: O tempo foi verificado pela lógica do código e por um cronômetro, e os tempos estão corretos, ficando ligados 6 segundos no vermelho, 2 segundos no amarelo, e 4 segundos no verde. No verde, ele permanece 2 segundos ininterruptos e, nos outros 2 segundos, pisca com um intervalo de 0,5 segundos.| 
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |Nota 3: O código está bem documentado, com vários comentários claros e descritivos. Ele faz uso de variáveis para armazenar os pinos dos LEDs e do buzzer utilizando #define, com nomes descritivos como ledVermelho.|
| Extra: Impelmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |Nota 1: Ele implementou corretamente um buzzer que começa a tocar após o LED verde ficar ligado por 2 segundos e permanece tocando por 2 segundos enquanto o LED verde está piscando.| 
|  |                                                             |  | |**Pontuação Total: 10**|


### Avaliador: Davi Nascimento de Jesus

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |  "Nota: 3. O projeto está bem construído. Senti falta de uma delimitação de padrão das cores do jumper, mas eles ainda assim estão bem dispostos na montagem. "|
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        | "Nota: 3. No semáforo, o projeto segue de forma correta a temporização das cores, seguindo a sequência 6 segundos no vermelho, 2 segundos no amarelo, 4 segundos no verde, 2 segundos no amarelo. " |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        | "Nota:3.  Não são usadas variáveis, pelo escopo definido no projeto, mas ele apresenta comentários e uma implementação correta das fases do semáforo, então não há demérito." |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        | "Nota: 1. O projeto conta com um buzzer que é responsável pela sinalização quando o sinal está aberto para os veículos." |
|  |                                                             |  | |**Pontuação Total:** 10|



