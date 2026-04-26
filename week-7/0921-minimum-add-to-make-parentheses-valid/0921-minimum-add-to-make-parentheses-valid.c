int minAddToMakeValid(char* s) {
    int count1 = 0; //so '(' chua dong
    int count2 = 0; //so ky tu can them de valid
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '(') count1++;
        else {
            if(count1 > 0) count1--;
            else if(count1 == 0) count2++;
        }
    }
    int sum = count1 + count2;
    return sum;
}