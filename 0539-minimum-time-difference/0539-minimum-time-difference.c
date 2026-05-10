int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int *)b);
}

int findMinDifference(char** timePoints, int timePointsSize) {
    int min[20000];

    for(int i = 0; i < timePointsSize; i++) {
        int hour = (timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0'); //Doi gio ra phut
        int minute = (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0'); //So phut
        min[i] = hour * 60 + minute;
    }

    qsort(min, timePointsSize, sizeof(int), cmp);

    int ans = 1400; //So phut trong mot ngay

    for(int i = 1; i < timePointsSize; i++) {
        int diff = min[i] - min[i - 1];

        if(diff < ans) {
            ans = diff;
        }
    }

    int lastDiff = 1440 - min[timePointsSize - 1] + min[0];

    if(lastDiff < ans) {
        ans = lastDiff;
    }
    return ans;
}