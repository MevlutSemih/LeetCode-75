int largestAltitude(int* gain, int gainSize) {
    int max = 0, biker = 0;
    for(int i = 0; i < gainSize; i++){
        biker += gain[i];
        
            if(max < biker){
                max = biker;
        }
    }
    return max;
}