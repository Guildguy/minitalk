Descrição: O Minitalk é um projeto que foca na comunicação inter-processos (IPC) utilizando exclusivamente sinais UNIX (SIGUSR1 e SIGUSR2). Consiste em desenvolver um programa cliente e um programa servidor que podem trocar mensagens de texto.

Desafios e Implementação:

Codificação de Dados: Transmitir informações complexas (caracteres) usando apenas dois sinais binários (um para '0', outro para '1'). Isso exigiu a codificação de cada byte da mensagem em uma sequência de bits.

Sincronização: Garantir que o servidor receba todos os bits de um caractere antes de processar o próximo, e que o cliente envie os bits de forma sincronizada.

Gerenciamento de Sinais: Configurar handlers de sinais para o servidor e o cliente, e lidar com a natureza assíncrona dos sinais.

Bônus (Mandatório na Prática): Implementei a funcionalidade onde o servidor envia um sinal de confirmação (acknowledgement) ao cliente após receber cada mensagem, garantindo a robustez da comunicação e o tratamento de múltiplas mensagens em sequência sem reinicializar o servidor.

O que aprendi:

IPC com Sinais: Domínio da comunicação entre processos usando sinais UNIX.

Programação Cliente-Servidor: Compreensão dos princípios de design de aplicações cliente-servidor.

Sincronização: Lidar com a assincronicidade e garantir a integridade dos dados transmitidos.

Manipulação de Bits: Codificação e decodificação de informações em nível de bit.
