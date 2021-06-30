#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari(string s){
int c=0;
int w=0;
int sen=0;
for(int i=0;i<=strlen(s);i++){
if(isalnum(s[i])){
c++;
}
if(isspace(s[i])){
w++;
}
if(s[i]=='.'||s[i]=='?'||s[i]=='!'){
sen++;
}
}
printf("%d\n",c);
printf("%d\n",w);
printf("%d\n",sen);
int score=ceil(4.71*c/w+0.5*w/sen-21.43);

printf("%d\n",score);

switch(score){
case 1:
	return "Kindergarten";
case 2:
	return "First/Second Grade";
case 3:
	return "Third Grade";
case 4:
	return "Fourth Grade";
case 5:
	return "Fifth Grade";
case 6:
	return "Sixth Grade";
case 7:
	return "Seventh Grade";
case 8:
	return "Eighth Grade";
case 9:
	return "Ninth Grade";
case 10:
	return "Tenth Grade";
case 11:
	return "Eleventh Grade";
case 12:
	return "Twelfth grade";
case 13:
	return "College student";
case 14:
	return "Professor";
	}

}
