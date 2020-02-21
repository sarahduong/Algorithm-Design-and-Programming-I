#include<stdio.h>
int main(void)
{

    int A=1;
    int B=1;
    
    do
    {
    printf("Please enter two positive integers that are less than 10:\n");
    scanf("%d %d", &A, &B);
        printf("Error: A and B  must be >=1 and <=10\n");  
    } while(A<1 || A>10 || B<1 || B>10 );
     
        switch(A)
        { // begin switch
            
            // A divisible by 1
            case 1:
                printf("1 is divisible by %d\n", A);
                break;
            default:
                printf("1 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 1
            case 1:
                printf("1 is divisible by %d\n", B);
                break;
            default:
                printf("1 is not divisible by %d\n", B);
                break;
        }

        switch(A)
        { // begin switch
            
            // A divisible by 2
            case 1:
            case 2:
                printf("2 is divisible by %d\n", A);
                break;
            default:
                printf("2 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 2
            case 1:
            case 2:
                printf("2 is divisible by %d\n", B);
                break;
            default:
                printf("2 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 3
            case 1:
            case 3:
                printf("3 is divisible by %d\n", A);
                break;
            default:
                printf("3 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 3
            case 1:
            case 3:
                printf("3 is divisible by %d\n", B);
                break;
            default:
                printf("3 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 4
            case 1:
            case 2:
            case 4:
                printf("4 is divisible by %d\n", A);
                break;
            default:
                printf("4 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 4
            case 1:
            case 2:
            case 4:
                printf("4 is divisible by %d\n", B);
                break;
            default:
                printf("4 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 5
            case 1:
            case 5:
                printf("5 is divisible by %d\n", A);
                break;
            default:
                printf("5 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 5
            case 1:
            case 5:
            printf("5 is divisible by %d\n", B);
                break;
            default:
                printf("5 is not divisible by %d\n", B);
                break;
        }

        switch(A)
        { // begin switch
            
            // A divisible by 6
            case 1:
            case 2:
            case 3:
            case 6:
                printf("6 is divisible by %d\n", A);
                break;
            default:
                printf("6 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 6
            case 1:
            case 2:
            case 3:
            case 6:
                printf("6 is divisible by %d\n", B);
                break;
            default:
                printf("6 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 7
            case 1:
            case 7:
                printf("7 is divisible by %d\n", A);
                break;
            default:
                printf("7 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 7
            case 1:
            case 7:
                printf("7 is divisible by %d\n", B);
                break;
            default:
                printf("7 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 8
            case 1:
            case 2:
            case 4:
            case 8:
                printf("8 is divisible by %d\n", A);
                break;
            default:
                printf("8 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 8
            case 1:
            case 2:
            case 4:
            case 8:
                printf("8 is divisible by %d\n", B);
                break;
            default:
                printf("8 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 9
            case 1:
            case 3:
            case 9:
                printf("9 is divisible by %d\n", A);
                break;
            default:
                printf("9 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 9
            case 1:
            case 3:
            case 9:
                printf("9 is divisible by %d\n", B);
                break;
            default:
                printf("9 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 10
            case 1:
            case 2:
            case 5:
            case 10:
                printf("10 is divisible by %d\n", A);
                break;
            default:
                printf("10 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 10
            case 1:
            case 2:
            case 5:
            case 10:
                printf("10 is divisible by %d\n", B);
                break;
            default:
                printf("10 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 11
            case 1:
            case 11:
                printf("11 is divisible by %d\n", A);
                break;
            default:
                printf("11 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 11
            case 1:
            case 11:
                printf("11 is divisible by %d\n", B);
                break;
            default:
                printf("11 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 12
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 12:
                printf("12 is divisible by %d\n", A);
                break;
            default:
                printf("12 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 12
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 12:
                printf("12 is divisible by %d\n", B);
                break;
            default:
                printf("12 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 13
            case 1:
            case 13:
                printf("13 is divisible by %d\n", A);
                break;
            default:
                printf("13 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 13
            case 1:
            case 13:
                printf("13 is divisible by %d\n", B);
                break;
            default:
                printf("13 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 14
            case 1:
            case 2:
            case 7:
            case 14:
                printf("14 is divisible by %d\n", A);
                break;
            default:
                printf("14 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 14
            case 1:
            case 2:
            case 7:
            case 14:
                printf("14 is divisible by %d\n", B);
                break;
            default:
                printf("14 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 15
            case 1:
            case 3:
            case 5:
            case 15:
                printf("15 is divisible by %d\n", A);
                break;
            default:
                printf("15 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 15
            case 1:
            case 3:
            case 5:
            case 15:
                printf("15 is divisible by %d\n", B);
                break;
            default:
                printf("15 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 16
            case 1:
            case 2:
            case 4:
            case 6:
            case 16:
                printf("16 is divisible by %d\n", A);
                break;
            default:
                printf("16 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 16
            case 1:
            case 2:
            case 4:
            case 6:
            case 16:
                printf("16 is divisible by %d\n", B);
                break;
            default:
                printf("16 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 17
            case 1:
            case 17:
                printf("17 is divisible by %d\n", A);
                break;
            default:
                printf("17 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 17
            case 1:
            case 17:
                printf("17 is divisible by %d\n", B);
                break;
            default:
                printf("17 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 18
            case 1:
            case 2:
            case 3:
            case 6:
            case 9:
            case 18:
                printf("18 is divisible by %d\n", A);
                break;
            default:
                printf("18 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 18
            case 1:
            case 2:
            case 3:
            case 6:
            case 9:
            case 18:
                printf("18 is divisible by %d\n", B);
                break;
            default:
                printf("18 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 19
            case 1:
            case 19:
                printf("19 is divisible by %d\n", A);
                break;
            default:
                printf("19 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 19
            case 1:
            case 19:
                printf("19 is divisible by %d\n", B);
                break;
            default:
                printf("19 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 20
            case 1:
            case 2:
            case 4:
            case 5:
            case 10:
            case 20:
                printf("20 is divisible by %d\n", A);
                break;
            default:
                printf("20 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 20
            case 1:
            case 2:
            case 4:
            case 5:
            case 10:
            case 20:
                printf("20 is divisible by %d\n", B);
                break;
            default:
                printf("20 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 21
            case 1:
            case 3:
            case 7:
            case 21:
                printf("21 is divisible by %d\n", A);
                break;
            default:
                printf("21 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 21
            case 1:
            case 3:
            case 7:
            case 21:
                printf("21 is divisible by %d\n", B);
                break;
            default:
                printf("21 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 22
            case 1:
            case 2:
            case 11:
            case 22:
                printf("22 is divisible by %d\n", A);
                break;
            default:
                printf("22 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 22
            case 1:
            case 2:
            case 11:
            case 22:
                printf("22 is divisible by %d\n", B);
                break;
            default:
                printf("22 is not divisible by %d\n", B);
                break;
        }

        switch(A)
        { // begin switch
            
            // A divisible by 23
            case 1:
            case 23:
                printf("23 is divisible by %d\n", A);
                break;
            default:
                printf("23 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 23
            case 1:
            case 23:
                printf("23 is divisible by %d\n", B);
                break;
            default:
                printf("23 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 24
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 8:
            case 12:
            case 24:
                printf("24 is divisible by %d\n", A);
                break;
            default:
                printf("24 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 24
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
            case 8:
            case 12:
            case 24:
                printf("24 is divisible by %d\n", B);
                break;
            default:
                printf("24 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 25
            case 1:
            case 5:
            case 25:
                printf("25 is divisible by %d\n", A);
                break;
            default:
                printf("25 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 25
            case 1:
            case 5:
            case 25:
                printf("25 is divisible by %d\n", B);
                break;
            default:
                printf("25 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 26
            case 1:
            case 2:
            case 13:
            case 26:
                printf("26 is divisible by %d\n", A);
                break;
            default:
                printf("26 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 26
            case 1:
            case 2:
            case 13:
            case 26:
                printf("26 is divisible by %d\n", B);
                break;
            default:
                printf("26 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 27
            case 1:
            case 3:
            case 9:
            case 27:
                printf("27 is divisible by %d\n", A);
                break;
            default:
                printf("27 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 27
            case 1:
            case 3:
            case 9:
            case 27:
                printf("27 is divisible by %d\n", B);
                break;
            default:
                printf("27 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 28
            case 1:
            case 2:
            case 4:
            case 7:
            case 14:
            case 28:
                printf("28 is divisible by %d\n", A);
                break;
            default:
                printf("28 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 28
            case 1:
            case 2:
            case 4:
            case 7:
            case 14:
            case 28:
                printf("28 is divisible by %d\n", B);
                break;
            default:
                printf("28 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 29
            case 1:
            case 29:
                printf("29 is divisible by %d\n", A);
                break;
            default:
                printf("29 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 29
            case 1:
            case 29:
                printf("29 is divisible by %d\n", B);
                break;
            default:
                printf("29 is not divisible by %d\n", B);
                break;
        }
        switch(A)
        { // begin switch
            
            // A divisible by 30
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
            case 10:
            case 15:
            case 30:
                printf("30 is divisible by %d\n", A);
                break;
            default:
                printf("30 is not divisible by %d\n", A);
                break;
        } // end switch

        switch(B)
        { // begin switch
            // B divisible by 30
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
            case 10:
            case 15:
            case 30:
                printf("30 is divisible by %d\n", B);
                break;
            default:
                printf("30 is not divisible by %d\n", B);
                break;

        }
           

    // INSERT SUMMARY OUTSIDE LOOP

} // end main function
