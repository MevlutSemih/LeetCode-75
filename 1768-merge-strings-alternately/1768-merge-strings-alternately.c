// oluşturduğun resultın sonuna '\0' koymassan çöker.

char * mergeAlternately(char * word1, char * word2){
    //sırayla word1 den sonra word2 den alıcak boşsa diğerine geçer
    int n1 = strlen(word1), n2 = strlen(word2), n = n1+n2, i=0, iw1 = 0, iw2 = 0;
    char* result = (char*)malloc(sizeof(char) * (n1 + n2 + 1 )); // n1 + n2 + 1 for '/0'
    while(i < n){
        if(word1[iw1] != '\0'){
            result[i] = word1[iw1];
            i++;
            iw1++;
        }
        if(word2[iw2] != '\0'){
            result[i] = word2[iw2];
            i++;
            iw2++;
        }
    }
    result[i] = '\0';
    return result;
}