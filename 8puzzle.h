#define N 3

typedef struct tState_ {
  
  int tablero[N][N];
  struct {
    int		x;
    int		y;
  } holePos;
  
} tState;

int compareArrays (int n, int a[n][n], int b[n][n]){
  int i = 0;
  int j = 0;
  int isEqual = 1;
  for(i;n;i++)
    for(j;n;j++)
	if(a[i][j]!=b[i][j])
	    isEqual = 0;
  return isEqual;
}