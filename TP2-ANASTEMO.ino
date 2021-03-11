/*
  Feux Tricolores et Feux Pietons TP2
  FUN MOOC
  Anas Temouden
 
Feu tricolore : même consigne que la semaine dernière
- Une LED verte (branchée sur la broche 10) allumée pendant 3 secondes (c'est la première LED à s'allumer)
- Puis une LED orange (branchée sur la broche 11) allumée pendant 1 seconde
- Enfin, une LED rouge (branchée sur la broche 12) allumée pendant 3 secondes

Feu bicolore (piéton)
- Le feu piéton est constamment rouge (rouge→broche 9 et vert→ broche 8) tant que le bouton (broche 2) n'est pas appuyé

Si le bouton est maintenu appuyé pendant que le feu voiture est au vert, alors le feu tricolore passe au orange allumé pendant 1 seconde puis rouge pendant 5 secondes durant lesquelles le feu vert piéton passe au vert.
Après ces 5 secondes, le feu piéton repasse au rouge et le fonctionnement normal reprend (à partir du vert pour le feu tricolore)
 */
 // Initialisation des constantes :
const  int vertp=8;// Numéro de la broche à laquelle est connectée la LED VERT PIETON
const  int rgep=9;// Numéro de la broche à laquelle est connectée la LED ROUGE PIETON
const  int vert=10;// Numéro de la broche à laquelle est connectée la LED ROUGE
const  int org=11;// Numéro de la broche à laquelle est connectée la LED ORANGE
const  int rge=12;// Numéro de la broche à laquelle est connectée la LED VERT
const  int buttonPin=2;// Numéro de la broche à laquelle est connecté le bouton poussoir

// Déclaration des variables :
int buttonState = 0; // variable qui sera utilisée pour stocker l'état du bouton

// le code dans cette fonction est exécuté une fois au début
 void setup() {
  pinMode(vertp, OUTPUT);// indique que la broche vertp est une sortie :    
  pinMode(rgep, OUTPUT);// indique que la broche rgep est une sortie :
  pinMode(vert, OUTPUT);  // indique que la broche vert est une sortie :
  pinMode(org, OUTPUT);// indique que la broche org est une sortie :      
  pinMode(rge, OUTPUT);// indique que la broche rge est une sortie :      
  pinMode(buttonPin, INPUT);// indique que la broche buttonPin est une sortie :      
  
}

// le code dans cette fonction est exécuté en boucle
void loop() {
  
 buttonState = digitalRead(buttonPin);// lit l'état du bouton et stocke le résultat dans buttonState :
      
digitalWrite(rgep,HIGH); // on allume la LED ROUGE PIETON 
digitalWrite(vert, HIGH);// on allume la LED VERT 
delay(3000);// attendre 3000ms = 3s  
digitalWrite(vert, LOW);// on éteint la LED VERT

  // Si buttonState est à 5V (HIGH→bouton appuyé)
  
if ( buttonState == HIGH )

  { 
digitalWrite(org, HIGH);// on allume la LED ORANGE
delay(1000);// attendre 1000ms = 1s  
digitalWrite(org, LOW);// on éteint la LED ORANGE
        
digitalWrite(rgep, LOW);// on éteint la LED ROUGE PIETON
    
digitalWrite(rge, HIGH);// on allume la LED ROUGE

digitalWrite(vertp, HIGH);// on allume la LED VERT PIETON
delay(5000);// attendre 5000ms = 5s  
digitalWrite(rge, LOW);// on éteint la LED ROUGE
digitalWrite(vertp, LOW);// on éteint la LED VERT PIETON 
  
digitalWrite(vert, HIGH);// on allume la LED VERT 
delay(3000);  // attendre 3000ms = 3s  
digitalWrite(vert, LOW);// on éteint la LED VERT  
}


digitalWrite(org, HIGH);// on allume la LED ORANGE
delay(1000);// attendre 1000ms = 1s  
digitalWrite(org, LOW);
digitalWrite(rge, HIGH);// on allume la LED ROUGE
delay(3000);// attendre 3000ms = 3s  
digitalWrite(rge, LOW); // on éteint la LED ROUGE
        

} 


