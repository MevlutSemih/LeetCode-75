


typedef struct { //first in first out
    int veri[10000];
    int front;  // Array queue kullanırsak next yok
    int rear; // bunların değeri c de burda atanmaz fonksiyonda falan atanır.
} RecentCounter;


RecentCounter* recentCounterCreate() { 
    RecentCounter* obj = (RecentCounter*)malloc(sizeof(RecentCounter));
    obj->front = 0;
    obj->rear = -1;
    return obj;
}

int recentCounterPing(RecentCounter* obj, int t){ //burda hesap yapıp dödürücez kaç yazıcağımızı
    obj->rear ++;
    int result = 0;
    obj->veri[obj->rear] = t;
    for(int i = 0 ; i <= obj->rear; i++){
        if ( t-3000 <= obj->veri[i] &  obj->veri[i] <= t){
            result ++;
        }
    }
    return result;
}

void recentCounterFree(RecentCounter* obj) { //burda yazdırıcaz
    if(obj != NULL){
        free(obj);
    }
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/