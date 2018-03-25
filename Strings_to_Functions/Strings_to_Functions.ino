// Stings and functions
// this sketch demonstrates two different functions involving passing charactet strings
// the first, fChangeText, demonstrates how the contents of a character string can be changed by a function
// the second, fReturnText, demonstrates how to return a character string from a function
//
// both of these functions appear to cause problems for beginner Arduino programmers
//
// developed by Jamie Watson - Mar 2018
//

char strText[10] = "---";

void setup() {
 Serial.begin(9600);
}

void loop() {
 strcpy(strText, "START");
 Serial.println(strText);
 fChangeText(strText);
 Serial.println(strText);
 Serial.println(fReturnText());
 Serial.println();
 
 delay(3000);
}

void fChangeText(char* inText){
  char strText[10] = "FINISH";
  Serial.print("In fChnageText: ");
  Serial.println(inText);
  strcpy(inText, strText);
  Serial.print("Altered - IN: ");
  Serial.println(inText); 
}

char* fReturnText(){
  char strText[10] = "RETURN";
  Serial.print("In fReturnText: ");
  Serial.println(strText);
  return strText;
}
