char* predictPartyVictory(char* senate) {
    int n = strlen(senate); // D,R,D
    int qR[10000]; // 1   
    int qD[10000];//  0 , 2
    int frontR = 0, rearR = 0;
    int frontD = 0, rearD = 0;
    for(int i=0; i<n; i++){
        if(senate[i] == 'R'){
            qR[rearR] = i;
            rearR ++;  // ayrıca queue da kaç eleman olduğunu gösterir.
        }
        else{
            qD[rearD] = i;
            rearD ++;
        }
    }
    while(true){
        if(rearR == frontR || rearD == frontD){
            break;
        }
        if(qR[frontR] < qD[frontD]){// R push
            frontR ++;
            frontD ++;
            qR[rearR] = rearR + rearD ;
            rearR ++;
        }
        else{ // D push
            frontR ++;
            frontD ++;
            qD[rearD] = rearR + rearD ;
            rearD ++;
        }
        
        
    }
    char* result = (char*)malloc(8 * sizeof(char));
    if(frontR == rearR){
        
        strcpy(result,"Dire");
        
    }
    else if(frontD == rearD){
        
        strcpy(result,"Radiant");
        
        
    }
    return result;
}