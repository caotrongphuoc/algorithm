int nextGreaterElement(int n) {
    char s[12]; //int toi da 10 chu so + 1 '\0' + 1 du

    sprintf(s, "%d", n);

    int len = strlen(s);

    int i = len - 2; //Vi tri so ben trai nho hon so ben phai

    while(i >=0 && s[i] >= s[i + 1]) {
        i--;
    }

    if(i < 0) return -1; //Ko co so ben trai nho hon so ben phai

    int j = len - 1;

    while(s[j] <= s[i]) j--;

    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    //Dao nguoc de co so nho nhat co the
    int l = i + 1;
    int r = len - 1;

    while(l < r) {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }

    long ans = atoll(s); //Doi lai thanh so;

    if(ans > INT_MAX) {
        return -1;
    }

    return (int)ans;
}