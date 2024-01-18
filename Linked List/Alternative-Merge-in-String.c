void main(){

string str1,str2;
scanf("%s",&str1);
scanf("%s",&str2);
int length1 = strlen(str1) , length2 = strlen(str2);
int maxx = max(length1, length2);
int l = length1+length2;
string str3[l];
for(int i=0; i<maxx; i++)
{   
    if(i<length1){
        str3[i] += str1[i];
    }
    if(i<length2){
        str3[i] += str2[i];
    }
    
}
printf("%s",str3);

}