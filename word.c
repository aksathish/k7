int words(const char *sentence) 
{ 
int count,i,len; 
char lastC;
len=strlen(sentence); 
if(len > 0) 
{ 
lastC = sentence[0];
} 
for(i=0; i<=len; i++) 
{ 
if(sentence[i]==' ' && lastC != ' ')
{ 
count++; 
} 
lastC = sentence[i]; 
} 
if(count > 0 && sentence[i] != ' ') 
{ 
count++; 
} 
return count; 
} 
int main() 
{ 
char str[30] = "a posse ad esse"; 
printf("Words = %i\n", words(str)); 
}
