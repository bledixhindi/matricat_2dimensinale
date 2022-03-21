#include <stdio.h>

int main()
{
    int i,j,m,n;
    
    printf("Vendos vlerat e (m,n):");
    scanf("%d %d",&m,&n);
    int v[m][n];
    printf("Vendos vlerat ne matrix:\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Vendos vleren ne matricat v[%d][%d]:",i,j);
            scanf("%d",&v[i][j]);
        }
    }
    
    printf("Matricat jane:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",v[i][j]);
        }
        printf("\n");
    }
}
