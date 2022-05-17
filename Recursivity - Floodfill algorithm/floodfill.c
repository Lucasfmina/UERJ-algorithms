char floodfill(char matriz[][20], int x0, int y0)
 {
    if( -1 < x0 < 20 && -1 < x0 < 20)
    {
        if(matriz[x0][y0] != 'X')
        {
            matriz[x0][y0] = 'X'; 
            matriz[x0+1][y0] = floodfill(matriz, x0+1, y0);
            matriz[x0-1][y0] = floodfill(matriz, x0-1, y0);
            matriz[x0][y0+1] = floodfill(matriz, x0, y0+1);
            matriz[x0][y0-1] = floodfill(matriz, x0, y0-1);
        }
        else
        {
            return 'X';
        }
    }
 }