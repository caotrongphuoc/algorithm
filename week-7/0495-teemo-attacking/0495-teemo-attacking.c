int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int sum = 0 ;
    for(int i = 0; i < timeSeriesSize - 1; i++) {
        int dis = timeSeries[i + 1] - timeSeries[i];
        if(dis >= duration) {
            sum += duration;
        }
        else {
            sum += dis;
        }
    }
    sum += duration;
    return sum;
}