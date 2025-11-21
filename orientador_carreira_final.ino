/*
 * ORIENTADOR DE CARREIRA - 5 SOFT SKILLS
 * Cada botão mostra carreiras específicas
 */

// Pinos dos BOTÕES (na ordem)
const int botaoComunicacao = 9;      // BOTÃO 1
const int botaoLideranca = 10;       // BOTÃO 2
const int botaoCriatividade = 11;    // BOTÃO 3
const int botaoPensamento = 12;      // BOTÃO 4
const int botaoTrabalho = 13;        // BOTÃO 5

// Pinos dos LEDs (na ordem)
const int led1 = 4;  // LED para Comunicação
const int led2 = 5;  // LED para Liderança
const int led3 = 6;  // LED para Criatividade
const int led4 = 7;  // LED para Pensamento Crítico
const int led5 = 8;  // LED para Trabalho em Equipe

// Controle de debounce
unsigned long ultimoDebounce1 = 0;
unsigned long ultimoDebounce2 = 0;
unsigned long ultimoDebounce3 = 0;
unsigned long ultimoDebounce4 = 0;
unsigned long ultimoDebounce5 = 0;
const int tempoDebounce = 300;

// Estados anteriores dos botões
bool estadoAnterior1 = LOW;
bool estadoAnterior2 = LOW;
bool estadoAnterior3 = LOW;
bool estadoAnterior4 = LOW;
bool estadoAnterior5 = LOW;

void setup() {
  // Configura botões
  pinMode(botaoComunicacao, INPUT);
  pinMode(botaoLideranca, INPUT);
  pinMode(botaoCriatividade, INPUT);
  pinMode(botaoPensamento, INPUT);
  pinMode(botaoTrabalho, INPUT);
  
  // Configura LEDs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  // Apaga todos os LEDs
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  
  // Inicia Serial
  Serial.begin(9600);
  Serial.println(F("==================================="));
  Serial.println(F("  ORIENTADOR DE CARREIRA - HENKA"));
  Serial.println(F("==================================="));
  Serial.println(F("Pressione os botoes para ver as carreiras!"));
  Serial.println(F(""));
  Serial.println(F("Botao 1 - COMUNICACAO"));
  Serial.println(F("Botao 2 - LIDERANCA"));
  Serial.println(F("Botao 3 - CRIATIVIDADE"));
  Serial.println(F("Botao 4 - PENSAMENTO CRITICO"));
  Serial.println(F("Botao 5 - TRABALHO EM EQUIPE"));
  Serial.println(F(""));
}

void loop() {
  // Lê os botões
  bool botao1 = digitalRead(botaoComunicacao);
  bool botao2 = digitalRead(botaoLideranca);
  bool botao3 = digitalRead(botaoCriatividade);
  bool botao4 = digitalRead(botaoPensamento);
  bool botao5 = digitalRead(botaoTrabalho);
  
  // BOTÃO 1 - COMUNICAÇÃO
  if (botao1 == HIGH && estadoAnterior1 == LOW) {
    if ((millis() - ultimoDebounce1) > tempoDebounce) {
      digitalWrite(led1, HIGH);
      delay(100);
      digitalWrite(led1, LOW);
      
      mostrarComunicacao();
      
      ultimoDebounce1 = millis();
    }
  }
  estadoAnterior1 = botao1;
  
  // BOTÃO 2 - LIDERANÇA
  if (botao2 == HIGH && estadoAnterior2 == LOW) {
    if ((millis() - ultimoDebounce2) > tempoDebounce) {
      digitalWrite(led2, HIGH);
      delay(100);
      digitalWrite(led2, LOW);
      
      mostrarLideranca();
      
      ultimoDebounce2 = millis();
    }
  }
  estadoAnterior2 = botao2;
  
  // BOTÃO 3 - CRIATIVIDADE
  if (botao3 == HIGH && estadoAnterior3 == LOW) {
    if ((millis() - ultimoDebounce3) > tempoDebounce) {
      digitalWrite(led3, HIGH);
      delay(100);
      digitalWrite(led3, LOW);
      
      mostrarCriatividade();
      
      ultimoDebounce3 = millis();
    }
  }
  estadoAnterior3 = botao3;
  
  // BOTÃO 4 - PENSAMENTO CRÍTICO
  if (botao4 == HIGH && estadoAnterior4 == LOW) {
    if ((millis() - ultimoDebounce4) > tempoDebounce) {
      digitalWrite(led4, HIGH);
      delay(100);
      digitalWrite(led4, LOW);
      
      mostrarPensamentoCritico();
      
      ultimoDebounce4 = millis();
    }
  }
  estadoAnterior4 = botao4;
  
  // BOTÃO 5 - TRABALHO EM EQUIPE
  if (botao5 == HIGH && estadoAnterior5 == LOW) {
    if ((millis() - ultimoDebounce5) > tempoDebounce) {
      digitalWrite(led5, HIGH);
      delay(100);
      digitalWrite(led5, LOW);
      
      mostrarTrabalhoEquipe();
      
      ultimoDebounce5 = millis();
    }
  }
  estadoAnterior5 = botao5;
  
  delay(10);
}

// ===== MENSAGENS DOS BOTÕES =====

void mostrarComunicacao() {
  Serial.println(F(""));
  Serial.println(F("========================================"));
  Serial.println(F(" Soft skill: COMUNICACAO"));
  Serial.println(F("========================================"));
  Serial.println(F(" Perfeita para carreiras que dependem MUITO de boa comunicacao:"));
  Serial.println(F(""));
  
  Serial.println(F("1. Marketing e Publicidade"));
  Serial.println(F("   Comunicar ideias, campanhas e mensagens para o publico."));
  Serial.println(F(""));
  
  Serial.println(F("2. Atendimento ao Cliente / Suporte"));
  Serial.println(F("   Interagir com clientes, entender problemas e orientar solucoes."));
  Serial.println(F(""));
  
  Serial.println(F("3. Vendas e Comercial"));
  Serial.println(F("   Apresentar produtos, negociar e construir confianca."));
  Serial.println(F(""));
  
  Serial.println(F("4. Jornalismo e Producao de Conteudo"));
  Serial.println(F("   Criar textos, videos e reportagens de forma clara."));
  Serial.println(F(""));
  
  Serial.println(F("5. Recursos Humanos"));
  Serial.println(F("   Entrevistar, fazer dinamicas e mediar conversas com colaboradores."));
  Serial.println(F("========================================"));
  Serial.println(F(""));
}

void mostrarLideranca() {
  Serial.println(F(""));
  Serial.println(F("========================================"));
  Serial.println(F(" Soft skill: LIDERANCA"));
  Serial.println(F("========================================"));
  Serial.println(F(" Perfeita para carreiras que exigem tomada de decisao e orientacao de equipes:"));
  Serial.println(F(""));
  
  Serial.println(F("1. Gestao de Projetos"));
  Serial.println(F("   Planejar, delegar tarefas e garantir que tudo saia no prazo."));
  Serial.println(F(""));
  
  Serial.println(F("2. Administracao e Gerencia"));
  Serial.println(F("   Liderar equipes e resolver problemas do dia a dia."));
  Serial.println(F(""));
  
  Serial.println(F("3. Tech Lead / Lider Tecnico"));
  Serial.println(F("   Guiar um time de desenvolvedores (mesmo sendo tecnico)."));
  Serial.println(F(""));
  
  Serial.println(F("4. Coordenacao de Equipes Operacionais"));
  Serial.println(F("   Liderar times de atendimento, logistica ou producao."));
  Serial.println(F(""));
  
  Serial.println(F("5. Empreendedorismo"));
  Serial.println(F("   Criar e conduzir um negocio do zero."));
  Serial.println(F("========================================"));
  Serial.println(F(""));
}

void mostrarCriatividade() {
  Serial.println(F(""));
  Serial.println(F("========================================"));
  Serial.println(F(" Soft skill: CRIATIVIDADE"));
  Serial.println(F("========================================"));
  Serial.println(F(" Ideal para carreiras que exigem inovacao e novas ideias:"));
  Serial.println(F(""));
  
  Serial.println(F("1. Design Grafico / UI/UX"));
  Serial.println(F("   Criar layouts, interfaces e identidades visuais."));
  Serial.println(F(""));
  
  Serial.println(F("2. Desenvolvimento de Produtos"));
  Serial.println(F("   Inventar solucoes novas para problemas reais."));
  Serial.println(F(""));
  
  Serial.println(F("3. Publicidade e Criacao"));
  Serial.println(F("   Trabalhar com campanhas, slogans e ideias criativas."));
  Serial.println(F(""));
  
  Serial.println(F("4. Producao Audiovisual"));
  Serial.println(F("   Criar videos, animacoes ou roteiros."));
  Serial.println(F(""));
  
  Serial.println(F("5. Arquitetura e Design de Interiores"));
  Serial.println(F("   Desenvolver espacos funcionais e bonitos."));
  Serial.println(F("========================================"));
  Serial.println(F(""));
}

void mostrarPensamentoCritico() {
  Serial.println(F(""));
  Serial.println(F("========================================"));
  Serial.println(F(" Soft skill: PENSAMENTO CRITICO"));
  Serial.println(F("========================================"));
  Serial.println(F(" Capacidade de analisar informacoes, avaliar argumentos e tomar decisoes inteligentes:"));
  Serial.println(F(""));
  
  Serial.println(F("1. Analise de Dados"));
  Serial.println(F("   Interpretar informacoes, cruzar dados, identificar padroes."));
  Serial.println(F(""));
  
  Serial.println(F("2. Seguranca da Informacao"));
  Serial.println(F("   Avaliar riscos, investigar vulnerabilidades e tomar decisoes tecnicas."));
  Serial.println(F(""));
  
  Serial.println(F("3. Consultoria Empresarial"));
  Serial.println(F("   Resolver problemas complexos e orientar estrategias."));
  Serial.println(F(""));
  
  Serial.println(F("4. Qualidade e Testes (QA)"));
  Serial.println(F("   Encontrar falhas, planejar testes e analisar processos."));
  Serial.println(F(""));
  
  Serial.println(F("5. Pesquisa e Desenvolvimento (P&D)"));
  Serial.println(F("   Investigar tecnologias e propor solucoes."));
  Serial.println(F("========================================"));
  Serial.println(F(""));
}

void mostrarTrabalhoEquipe() {
  Serial.println(F(""));
  Serial.println(F("========================================"));
  Serial.println(F(" Soft skill: TRABALHO EM EQUIPE"));
  Serial.println(F("========================================"));
  Serial.println(F(" Capacidade de colaborar, dividir responsabilidades e apoiar o grupo:"));
  Serial.println(F(""));
  
  Serial.println(F("1. Desenvolvimento de Software (Scrum/Agil)"));
  Serial.println(F("   Trabalhar em squads, colaborar em projetos de TI."));
  Serial.println(F(""));
  
  Serial.println(F("2. Logistica e Operacoes"));
  Serial.println(F("   Atuar em equipes que dependem de alinhamento e cooperacao."));
  Serial.println(F(""));
  
  Serial.println(F("3. Saude (Enfermagem, Fisioterapia, etc.)"));
  Serial.println(F("   Trabalho 100% coordenado com equipes multidisciplinares."));
  Serial.println(F(""));
  
  Serial.println(F("4. Engenharia"));
  Serial.println(F("   Projetos grandes feitos por varios profissionais juntos."));
  Serial.println(F(""));
  
  Serial.println(F("5. Producao Audiovisual / Cinema"));
  Serial.println(F("   Equipes grandes, cada pessoa com uma funcao integrada."));
  Serial.println(F("========================================"));
  Serial.println(F(""));
}
