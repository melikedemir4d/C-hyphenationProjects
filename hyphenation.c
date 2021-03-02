 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int isVowel(char);

// char ı tek karakterli string yapar
char * charToString(char x) {   
  static char temp[2];             
     temp[0] = x;
     temp[1] = '\0';
  return temp;
}


int main()
{
 int k=0;
   
    char word [50] = "", wordHyp [100] = "";

    printf("Enter a word for hyphenation:\n");
    scanf("%s", word);
    
    if(isVowel(word[0])==0 && isVowel(word[1])==0 ){
    char *c = charToString(word[0]); 
    strcat(wordHyp, c);
    k=1;
    
    }
     
   for (int i=k ;word[i] != '\0' ; i++)
   {
     
                                                      
    char *temp = charToString(word[i]);     
     strcat(wordHyp,temp);                      
     if ( word[i+1] == '\0')                              
        break;

   
        
             
     if (isVowel(word[i]) == 1 )
     {                            // i 1 dönerse i+2 ye bak 1 dönerse sessiz harfle böl
        
          if (isVowel(word[i+2])==1)
          
              strcat(wordHyp, "-");
            
       }

     
    else{   
                        // i 0 dönerse
     if (isVowel(word[i+2])==1)   // mesela hande n 0 döndü kendinden sonraki i+2 ye bak 1 dönerse böl. han-de
       //strcat(wordHyp,temp);
       
       
       
        strcat(wordHyp, "-");
      
     }          
}     
                                                        
  printf("%s\n", wordHyp);
    return 0;
}

int isVowel(char c)
{
  switch(c)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      return 1;
      break;
    default:
      return 0;
      break;
  }
} 