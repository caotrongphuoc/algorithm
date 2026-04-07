bool canVisitAllRooms(int** rooms, int roomsSize, int* roomsColSize) 
{
    bool* visited = calloc(roomsSize, sizeof(bool));
    int* stack = (int*)malloc(sizeof(int) * roomsSize);
    int top = 0;

    visited[0] = true;
    stack[++top] = 0;

    int count = 1;
    while(top > 0)
    {
        int room = stack[top--];
        for(int i = 0; i < roomsColSize[room]; i++)
        {
            int key = rooms[room][i];
            if(!visited[key])
            {
                visited[key] = true;
                count++;
                stack[++top] = key;
            }
        }
    }
    free(visited);
    free(stack);
    return count == roomsSize;
}