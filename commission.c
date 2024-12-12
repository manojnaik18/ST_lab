#include<stdio.h>
#include<stdlib.h>

int main() {
    int locks, stocks, barrels, tlocks = 0, tstocks = 0, tbarrels = 0;
    float lprice = 45.0, sprice = 30.0, bprice = 25.0, sales = 0, comm;
    
    printf("Enter the number of locks and to exit the loop press -1\n");
    scanf("%d", &locks);

    while (locks != -1) {
        
        if (locks <= 0 || locks > 70) {
            printf("Value of locks not in range 1--70");
            exit(0);
            }
            
        else if (tlocks + locks > 70) {
            printf("New value of locks = %d not in range 1--70", tlocks + locks);
            exit(0);
            } 
        else {
            tlocks += locks;
            printf("Total locks = %d\n", tlocks);
        }

        printf("Enter the number of stocks\n");
        scanf("%d", &stocks);

        if (stocks <= 0 || stocks > 80) {
            printf("Value of stocks not in range 1--80\n");
            exit(0);
          }

        else if (tstocks + stocks > 80) {
            printf("New value of stocks = %d not in range 1--80\n", tstocks + stocks);
            exit(0);
        } 
        else {
            tstocks += stocks;
            printf("Total stocks = %d\n", tstocks);
        }

        printf("Enter the number of barrels\n");
        scanf("%d",&barrels);

        if (barrels <= 0 || barrels > 90) {
            printf("Value of barrels not in range 1--90\n");
            exit(0);
        } 
        
        else if (tbarrels + barrels > 90) {
            printf("New value of barrels = %d not in range 1--90\n", tbarrels + barrels);
            exit(0);
        } 
        
        else {
            tbarrels += barrels;
            printf("Total barrels = %d\n", tbarrels);
        }

        printf("Enter the number of locks and press -1 to exit the loop\n");
        scanf("%d", &locks);
    }

    if (tlocks > 0 && tstocks > 0 && tbarrels > 0) {
        printf("Total locks = %d\nTotal stocks = %d\nTotal barrels = %d\n", tlocks, tstocks, tbarrels);
        sales = (tlocks * lprice) + (tstocks * sprice) + (tbarrels * bprice);
        printf("Total sales is %.f\n", sales);

        if (sales > 0) {
            if (sales > 1800) {
                comm = 0.10 * 1000.0 + 0.15 * 800.0 + 0.20 * (sales - 1800);
            } else if (sales > 1000) {
                comm = 0.10 * 1000.0 + 0.15 * (sales - 1000);
            } else {
                comm = 0.10 * sales;
            }
            printf("Commission is %.f \n", comm);
        }
    } else {
        printf("There is no sales\n");
    }

    return 0;
}
