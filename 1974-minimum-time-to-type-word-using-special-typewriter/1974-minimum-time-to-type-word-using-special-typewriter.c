int minTimeToType(char* word) {
    char curr = 'a';
    int min; //kc ngan nhat
    int sum = 0; //total
    for(int i = 0; word[i] != '\0'; i++) {
        int dis1 = abs(word[i] - curr); //kc di truc tiep
        int dis2 = 26 - abs(word[i] - curr); //kc di vong
        if(dis1 > dis2) min = dis2;
        else min = dis1;
        sum += min + 1; //cong kc va cong them 1 (de chon)
        curr = word[i];
    }
    return sum;
}