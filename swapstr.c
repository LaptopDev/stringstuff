#include <stdio.h>
#include <string.h>
#include <unistd.h>

/*this script demonstrates which
 * element holds the null terminator
 * when working with strings 
 */

char strEx[ 40 ] = "this string has thirty-nine characters!" ;
int main()
{
    sleep(2) ;
    printf( "===================================\nHolding small strings in a bigger array:\n\n" ) ;
    sleep(4) ;
    printf( "String:\n%s\n\n" , strEx ) ;
    sleep(3) ;
    printf( "0 wasted elements\n" ) ;
    sleep(1) ; 
    printf( "40 element array\n\n\n" ) ; //should print the longest string
    sleep( 7 ) ;
    strcpy( strEx , "123") ;
    printf( "String:\n%s\n\n" , strEx ) ;
    sleep(3) ;
    printf( "36 wasted elements\n" ) ;
    sleep(1);
    printf( "40 element array\n\n\n" ) ; //should print the string as normal
    sleep( 7 ) ;
    strcpy( strEx , "1234" ) ;
    printf("String:\n%s\n\n" , strEx ) ;
    sleep(3);
    printf( "35 wasted elements\n" ) ;
    sleep(1);
    printf( "40 element array\n\n\n" ); //should append 4
    strEx[ 4 ] = 'X';
    sleep( 7 ) ;
    printf( "String:\n%s\n\n" , strEx ) ;
    sleep(3) ;
    printf( "0 wasted elements\n" ) ;
    sleep(1) ;
    printf( "40 element array\n" ) ;
    sleep(1) ;
    printf("* * * *Null terminator removed & replaced with X* * * *\n\n" );
    sleep(6) ;
    printf("  * When replacing a character\n * in an array, target the character\n * to be replaced with its element\n * index, NOT its string length.\n\n===================================\n" ) ;
    sleep( 15 ) ; //to do: replace with user input to continue 
   



    printf( "Not physically printed, but present at \nthe end of any string in an array, when the null terminator is removed \nwith an individual element change,\n\n" ) ;
    printf( "        exStr[4] = 0\n\n") ;
    printf( "the most recent character values\n will reappear in all element\npositions that follow the replaced \\0\n\n===================================\n\n\n" ) ;

 
    sleep(15) ;//to do: replace with user input to continue






    strcpy( strEx , "12345678" ) ; // sets up string for further example

/*       Shows how positioning the null terminator can change the 
 *       length of the string that is printed.                         */
  
    int inltrm = strlen( strEx ) ;   /* Gets the element 
                                      *  index of the null terminator 
                                      *  with the strlen()function.
                                      * The element that null zero
                                      *  (null terminator) is located 
                                      *  at is equal to the string length.
                                      */

    printf("Positioning the null terminator, therefor,\ncan change the length of the printed string stored\nin the array.\n\n\n") ;
    sleep(5) ;
    printf( "===================================\nWe will copy the string exStr[] to cutstr[] and use:\n          cutstr[inltrm-1] = \'\\0\' ;\nto move the null terminator backwards.\n===================================\n\n") ;
    sleep( 15) ;




//Shifts null terminator in array from right to left
    char cutstr[ 9 ] ;
    strcpy( cutstr , strEx ) ;
    int i ;
    for( i = 0 ; i < 8 ; i++ )
    {
        inltrm = strlen( cutstr ) ; //updates null terminator index for each loop
        printf( "\\0 is element %d in string:  %s\n\n" , inltrm , cutstr ) ; //prints null terminator index for the current string in the cutStr array
        //changes info each loop
        sleep( 2 ) ;
        cutstr[ inltrm - 1 ] = '\0' ; /* cuts an individual character off 
                                   * the printed string cutstr[] by moving
                                   * the null terminator's position back 1
                                   * from the last position it occupied
                                   * in the previous instance of cutstr[]
                                   */
    }

    sleep(3) ;
    puts( "===================================\nIn the last string, the character '1' occupies") ;
    puts( "index 0 and is printed.") ;
    puts( "With the null terminator at index 1, indices before it remain unaffected." ) ;
    printf( "===================================\n" ) ;           
    sleep(10) ;
    printf( "Now swapping index 1 in the array with an X to\nshow whats being held in the elements after index 1 now:\n" ) ;
    cutstr[1] = 'X' ;
    sleep(3) ;
    printf( "String:\n%s\n\n" , cutstr ) ; ///to do: figure out why this doesn't print 
}
