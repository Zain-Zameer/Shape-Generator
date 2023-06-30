#include<stdio.h>

int main(){
    char letter;
    int i,j,Select;
    printf("Welcome To The Letter In Shape_\n");
    printf("-------------------------\n");
    printf("Pick A Letter: ");
    scanf("%c",&letter);
    printf("Select Shape From Following: \n");
    printf("\n1)Square\n2)Upward Stairs\n3)BarCode Shape\n4)DataGraph Shape\n5)Jeep\n6)Downward Stairs");
    printf("\nSelect: ");
    scanf("%d",&Select);

    if(Select==1){
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j<10; j++)
            {
                printf(" ");
                printf("%c",letter);
            }
            
            printf("\n");
        }
    }
    else if(Select==2){
        for ( i = 0; i < 9; i++)
        {
            for ( j = 0; j < i; j++)
            {
                printf(" ");
                printf("%c",letter);
            }
            
            printf("\n");
        }
        
    }
    else if(Select==3){
        for ( j = 0; j < 6 ; j++)
        {
            for ( i = 0; i < j; i++)
            {
                printf(" ");
                for ( j = 0; j < 5; j++)
                {
                    printf("%c",letter);
                }
                
            }
            
        }     
    } 
    else if(Select==4){
        for ( i = 0; i<8; i++)
        {
            for ( j = 0; j < i; j++)
            {
                printf("%c",letter);
                printf("         ");
            }
            printf("\n");
        }
        
    }
    else if(Select == 5){
        for ( i = 1; i < 4; i++)
        {
            printf("0");
            printf("%c",letter);
            for ( j = 0; j < i; j++)
            {
                printf(" ");
                printf("   %c",letter);

            }
            printf("    ");
            printf("%c",letter);
            
            printf("\n");
        }
        printf("((* *))_________((* *))______/____/____/____/_____/_____/____/____/__");

    }
    else if (Select == 6){
        for ( i = 8; i > 0; i--)
        {
            for ( j = 0; j < i; j++)
            {
                printf("%c",letter);
                printf(" ");
            }
            
            printf("\n");
        }
        
    }
    return 0;
}   