🟦 HENKA – Orientador de Carreira baseado em Soft Skills
🚀 Projeto de Solução Embarcada – O Futuro do Trabalho
🔧 Arduino (Simulação no Wokwi) | 🎓 FIAP
🧠 Sobre o Projeto

O Henka – Orientador de Carreira é um sistema embarcado desenvolvido para auxiliar pessoas a descobrirem áreas profissionais compatíveis com suas soft skills.
Através de 5 botões, cada um representando uma habilidade comportamental, o sistema mostra no Serial Monitor uma lista de áreas de carreira relacionadas àquela habilidade.

O projeto foi desenvolvido em Arduino, utilizando simulação completa no Wokwi, como parte do desafio “O Futuro do Trabalho”.

🎯 Objetivo do Sistema

Identificar soft skills importantes no mercado 4.0

Relacionar essas habilidades com carreiras adequadas

Fornecer uma experiência interativa com hardware

Simular um processo real de orientação vocacional usando IoT/embarcados

🧩 Como Funciona

O sistema possui 5 botões, cada um representando uma soft skill:

Comunicação

Liderança

Criatividade

Pensamento Crítico

Trabalho em Equipe

Quando o usuário pressiona um botão:
✔️ O LED correspondente pisca
✔️ O Serial Monitor exibe carreiras compatíveis com aquela habilidade
✔️ Uma breve descrição de cada carreira é mostrada

O código possui:

Debounce para evitar cliques duplos

Organização por funções (mostrarComunicacao(), etc.)

Textos otimizados para economizar memória (F(""))

🛠️ Tecnologias Utilizadas

Arduino (C/C++)

Simulação no Wokwi

Git & GitHub

Boas práticas de projeto embarcado

🖥️ Arquitetura do Sistema

Botões nos pinos: 9, 10, 11, 12 e 13

LEDs nos pinos: 4, 5, 6, 7 e 8

Comunicação serial a 9600 baud

📌 Demonstração da Mapeação Soft Skill → Carreira
Soft Skill	Carreiras Sugeridas
Comunicação	Marketing, Vendas, Jornalismo, RH
Liderança	Gestão de Projetos, Administração, Tech Lead
Criatividade	Design, UI/UX, Publicidade, Audiovisual
Pensamento Crítico	Análise de Dados, Segurança, Consultoria
Trabalho em Equipe	Desenvolvimento Ágil, Logística, Saúde
📎 Link da Simulação (Wokwi)

➡️ (https://wokwi.com/projects/447619824627511297)


🎥 Vídeo de Apresentação

O vídeo deve conter:

Explicação da ideia

Funcionamento do sistema

Demonstração real no Wokwi

Principais dificuldades

Diferenciais do projeto


👥 Integrantes do Grupo

Helton Pacheco dos Santos – RM 567113

Camile Vitória Silva – RM 566649

Marco Tuilio Longo Conte – RM 568373


🧪 Como Executar

Acesse o link da simulação Wokwi

Clique em ▶️ Play

Abra o Serial Monitor

Pressione os botões na simulação

Veja as sugestões de carreira!

⭐ Diferenciais do Projeto

Código otimizado para microcontroladores

Sistema educativo simples e intuitivo

Feedback visual + textual

Aplicação real ao tema: Futuro do Trabalho

Uso eficiente de memória e F() strings
