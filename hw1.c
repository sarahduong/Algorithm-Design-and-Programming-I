#include<stdio.h>
int main(void)
{ // begin main function

    // initialize variables
    int artistnumber=1;
    int BSalbum;
    int SEalbum;
    int TCalbum;
    int TSPalbum;
    int PJHalbum;
    int exitnumber=1;

    // ******** ARTIST SELECTION ********
  printf("\n**** Digital Music Info ****\n\n"); // title of 
  while(artistnumber<=5) // begin while
  {
      while(exitnumber!=0) // being while exitnumber
      {
         printf("Select an artist:\n");
         printf("1. Bruce Springsteen\n");
         printf("2. Steve Earle\n");
         printf("3. The Clash\n");
         printf("4. The Sex Pistols\n");
         printf("5. P.J. Harvey\n");
         scanf("%d", &artistnumber);
         // ******** ARTIST SELECTION END ********}
      
         // if section for incorrect selection range message
         if(artistnumber!=1) 
         {
           if(artistnumber!=2) 
           {
             if(artistnumber!=3) 
             {
               if(artistnumber!=4) 
               {
                 if(artistnumber!=5) 
                 {
                    printf("\n** Please enter a selection from 1 to 5 **\n\n"); 
                 }
               }
             }
           }   
         } // end if for incorrect selection range message

         // begin Bruce Springsteen Section
         if(artistnumber==1) // begin if for Bruce Springsteen albums
         {
            printf("\nSelect an album:\n");
            printf("1. Greetings from Asbury Park\n");
            printf("2. The Wild, The Innocent, and The E-Street Shuffle\n");
            printf("3. Born To Run\n");
            printf("4. Darkness On The Edge of Town\n");
            printf("5. The River\n");
            printf("6. Nebraska\n");
            printf("7. All Albums by this Artist\n");
            scanf("%d", &BSalbum); 
            printf("\n");
            // star ratings for BS
            if(BSalbum<=7) // begin if for BS ratings
            {
                if(BSalbum==1) // rating for Greetings...
                {
                    printf("*** Stars = 3 ***\n\n");
                }
                if(BSalbum==2) // rating for The Wild...
                {
                    printf("*** Stars = 3.5 ***\n\n");
                }
                if(BSalbum==3) // rating for Born to Run
                {
                    printf("*** Stars = 4.5 ***\n\n");
                }
                if(BSalbum==4) // rating for Darkness on Edge...
                {
                    printf("*** Stars = 5 ***\n\n");
                }
                if(BSalbum==5) // rating for The River
                {
                    printf("*** Stars = 4.5 ***\n\n");
                }
                if(BSalbum==6) // rating for Nebraska
                {
                    printf("*** Stars = 5 ***\n\n");
                }
                if(BSalbum==7) // average rating for all BS albums
                {
                    printf("*** Stars = 4.3 ***\n\n");
                }

                printf("\n\nEnter 0 to exit or any other number to continue\n");
                scanf("%d", &exitnumber);

            } // end if for BS ratings
         } // end if for BS album

         // begin Steve Earle section
         if(artistnumber==2) // begin if for Steve Earle albums
         {
            printf("\nSelect an album:\n");
            printf("1. Copperhead Road\n");
            printf("2. I Feel Alright\n");
            printf("3. El Corazon\n");
            printf("4. Transcendental Blues\n");
            printf("5. All Abums by this Artist\n");
            scanf("%d", &SEalbum);
            printf("\n");
                // star ratings for SE
        if(SEalbum<=5) // begin if for SE ratings
        {
            if(SEalbum==1) // rating for Copperhead...
            {
                printf("*** Stars = 4 ***\n\n");
            }
            if(SEalbum==2) // rating for I Feel... 
            {
                printf("*** Stars = 5 ***\n\n");
            }
            if(SEalbum==3) // rating for El Corazon
            {
                printf("*** Stars = 4.5 ***\n\n");
            }
            if(SEalbum==4) //rating for Transcendental...
            {
                printf("*** Stars = 4 ***\n\n");
            }
            if(SEalbum==5) // average rating for all SE albums
            {
                printf("*** Stars = 4.4 ***\n\n");
            }

            printf("\n\nEnter 0 to exit or any other number to continue\n");
            scanf("%d", &exitnumber);
      
        } // end if for Steve Earle ratings
    } // end if for SE albums

    // begin The Clash section
    if(artistnumber==3) // begin if for The Clash albums
    {
        printf("\nSelect an album:\n");
        printf("1. The Clash\n");
        printf("2. London Calling\n");
        printf("3. Sandinista\n");
        printf("4. Combat Rock\n");
        printf("5. All Albums by this Artist\n");
        scanf("%d", &TCalbum);
        printf("\n");
        // star ratings for TC
        if(TCalbum<=5) // begin if for SE ratings
        {
            if(TCalbum==1) // rating for The Clash...
            {
                printf("*** Stars = 5 ***\n\n");
            }
            if(TCalbum==2) // rating for London... 
            {
                printf("*** Stars = 5 ***\n\n");
            }
            if(TCalbum==3) // rating for Sandinista
            {
                printf("*** Stars = 4 ***\n\n");
            }
            if(TCalbum==4) //rating for Combat...
            {
                printf("*** Stars = 3.5 ***\n\n");
            }
            if(TCalbum==5) // average rating for all TC albums
            {
                printf("*** Stars = 4.5 ***\n\n");
            }

            printf("\n\nEnter 0 to exit or any other number to continue\n");
            scanf("%d", &exitnumber);
        
        } // end if for The Clash ratings
    } // end if for The TC albums

    // begin The Sex Pistols section
    if(artistnumber==4) // begin if for The Sex Pistols
    {
        printf("\nSelect an album:\n");
        printf("1. Never Mind The Bollocks, Here's The Sex Pistols\n");
        printf("2. All Albums by this Artist\n");
        scanf("%d", &TSPalbum);
        printf("\n");
            // star ratings for TSP
        if(TSPalbum<=2) // begin if for The Sex Pistols
        {
            if(TSPalbum==1) // rating for Never Mind...
            {
                printf("*** Stars = 5 ***\n\n");
            }
            if(TSPalbum==2) // average rating for all TSP albums
            {
                printf("*** Stars = 5  ***\n\n");
            }
        }
            
            printf("\n\nEnter 0 to exit or any other number to continue\n");
            scanf("%d", &exitnumber);
   
    } // end if for The Sex Pistols

    // begin P.J. Harvey section
    if(artistnumber==5) // begin if for P.J. Harvey
    {
        printf("\nSelect an album:\n");
        printf("1. Dry\n");
        printf("2. Rid of Me\n");
        printf("3. Stories From the City, Stories From the Sea\n");
        printf("4. All Albums by this Artist\n");
        scanf("%d", &PJHalbum);
        printf("\n");
        if(PJHalbum<=4) // begin if for P.J Harvey albums
        {
            if(PJHalbum==1) // rating for Dry
            {
                printf("*** Stars = 3 ***\n\n");
            }
            if(PJHalbum==2) // rating for Rid...
            {
                printf("*** Stars = 3 ***\n\n");
            }
            if(PJHalbum==3) // rating for Stores From...
            {
                printf("*** Stars = 5 ***\n\n");
            }
            if(PJHalbum==4) // average rating for PJH albums
            {
            printf("*** Stars = 3.7 ***\n\n");
            }

           printf("\n\nEnter 0 to exit or any other number to continue\n");
           scanf("%d", &exitnumber);
       
       } // end if for PJH albums
     } // end if for P.J. Harvey
   } // end while exitnumber
   if(exitnumber==0)
   {
      artistnumber=6; // exit outer while loop
   }
  } // end while function
} // end main function
