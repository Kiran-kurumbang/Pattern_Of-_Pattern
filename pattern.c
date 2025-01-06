#include<stdio.h>
int main(){
    int n;
    // int m;
    int pattern=0;
    
    printf("Enter the number of row ");
    scanf("%d",&n);

    // printf("Enter the number of row ");
    // scanf("%d",&m);
    // for(int i=1;i<=n;i++){//this loop indicate number of line
    //     for(int j=1;j<=i;j++){//this inner loop indicate of number of star
    //         printf("%d",j);

    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=n;i++){//this loop indicate number of line
    //     for(int j=1;j<=m;j++){//this inner loop indicate of number of star
    //         printf("%d",j);

    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=n;i++){//this loop indicate number of line
    //     for(int j=1;j<=n;j++){//this inner loop indicate of number of star
    //         printf("%d",j);

    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=n;i++){//this loop indicate number of line
    //     for(int j=1;j<=n+1-i;j++){//this inner loop indicate of number of star
    //         printf("%d",j);

    //     }
    //     printf("\n");
    // }
///////////////////////////////////////////////////
//print the only odd num in trangle
//in rectrangle
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=m;j++){
//         printf("%d ",a);
//         a=a+2;
//     }
    
//     printf("\n");
// }
// //for trangle
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=i;j++){
//         printf("    %d    ",a);
//         a=a+2;
//     }
    
//     printf("\n");
// }
////////////////////////////////////////////////////////////////////////
//print the given pattern (A B C D)
 
// for(int i=1;i<=n;i++){
//     int a=1;
//      for(int j=1;j<=i;j++){
//         int d=a+64;
//   char ch =(char)d;
//      printf("%c ",ch);
//      a++;
 
//  }
//  printf("\n");
// }
//////////////////////////////////////////////////////////////
// Print the given pattern
//1
//A B
//1 2 3 
//A B C D
//1 2 3 4 5
// for(int i=1;i<=n;i++){
//     int a=1;
//     if(i%2!=0){
//     for(int j=1;j<=i;j++){
//             printf("%d ",a);

//             a++;
//         }
//     }else{
//         for(int j=1;j<=i;j++){
//             printf("%c ",64+j);
//             a++;
//         }
        
       
//     }
//      printf("\n");

 //   }
 /////////////////////////////////////////////////
 /// print given pattern
 //   star plus
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         int a=n/2+1;
//         int b=m/2+1;
//     if(j==b || i==a) 
//     printf("*");
//     else{
//         printf(" ");
//     }
//     }
//     printf("\n");
//    }
///////////////////////////////////////////////
// pattern 
// hollow rectangle
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
        
//         if(i==1 || i==n || j==1 || j==m){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
        
//     }
//     printf("\n");
// }
////////////////////////////////////////
// pattern 
// cross star plus
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         if(i==j || i+j==n+1){
//             printf("*");
//         }else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }
//////////////////////////////////
//pattern
//1
//2 3 
//4 5 6
//7 8 9 10
// int a=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         printf("%d ",a);
//         a++;
//     }
//     printf("\n");
// }
////////////////////////////////////
//pattern 
//1
//01
//101
//0101
//int a;
// for(int i=0;i<=n;i++){
//     if(i%2!=0) a=1;
//     else a=0;
//     for(int j=1;j<=i;j++){
//         printf("%d ",a);
//         if(a==0) a=1;
//         else(a=0);
//     }
//     printf("\n");
// }
//method 2:-
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0)printf("1 ");
//         else printf("0 ");   }
//         printf("\n");
// }
//pattern
//star trangle mast
//     *
//    **
//   ***
//  ****
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){//this if for spaces
//     printf(" ");}
//     for(int z=1;z<=i;z++){
//     printf("*");}
//     printf("\n");
// }
//////////////////////////////////////////////////////////
//rambos trangle
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
//     for(int z=1;z<=n;z++){
//         printf("*");
//     }
//     printf("\n");

// }
////////////////////////////////////////////////
//Alphabets trangle
//from right side

// for(int i=1;i<=n;i++){
//     char ch ='A';
//     for(int j=1;j<=n-i;j++){
//         printf(" ");
//     }
    
//     for(int z=1;z<=i;z++){
//         printf("%c",ch);
//         ch++;
//     }
//     printf("\n");
// }
//////////////////////////////////////
//star pyramid
// int nsp=n-1;
// int nst=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
        
//     }
//     nsp--;
//     for(int z=1;z<=nst;z++){
//         printf("*");
        
//     }
//     nst=nst+2;
//     printf("\n");
// }
///////////////////////////////////
// number pyramid
// int nsp=n-1;
// int nst=1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
//     }
//     nsp--;
//     for(int z=1;z<=nst;z++){
//         printf("%d",z);
//     }
//     nst=nst+2;
//     printf("\n");
// }
//////////////////////////////////////////
//alphabet pyramid
// int nsp=n-1;
// int nst=1;

// for(int i=1;i<=n;i++){
//     char ch=65;
//     for(int j=1;j<=nsp;j++){
//         printf(" ");
//     }
//     nsp--;
//     for(int z=1;z<=nst;z++){
//         printf("%c",ch);
//         ch++;
//     }
//     nst=nst+2;
//     printf("\n");
// }
//////////////////////////////////////////////
//repet number pyramid
// int nsp=n-1;
// for(int i=1;i<=n;i++){
//     int a=i-1;
//     for(int j=1;j<=nsp;j++){// spaces loop
//         printf(" ");
        
//     }
//     nsp--;
//     for(int z=1;z<=i;z++){//number loop
//         printf("%d",z);
        
//     }
//     for(int x=1;x<=i-1;x++){//opposit number loop
//         printf("%d",a);
//         a--;
//     }
//     printf("\n");
// }
// int nsp=n/2;
// int nst=1;
// int ml=n/2+1;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){//for space
//         printf(" ");
//     }
//     for(int z=1;z<=nst;z++){//for star
//         printf("*");
//     }
//     if(i<ml){
//     nsp--;
//     nst+=2;
//     }
//     else{
//         nsp++;
//         nst=nst-2;
//     }

//     printf("\n");
// }
////////////////////////////////////////////
// star trangle opposit side
// int nsp=0;
// int nst=n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nsp;j++){//space
//         printf(" ");
//     }
//     nsp++;

//     for(int z=1;z<=nst;z++){
//         printf("*");
//     }
//     nst--;
//     printf("\n");
// }
////////////////////////////////////////////
// space trangle
// int nst=n;
// int nsp=1;
// int a=2*n+1;
// for(int x=1;x<=a;x++){
//     printf("*",a);
// }
// printf("\n");
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=nst;j++){//stars
//         printf("*");
//     }
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//     }
//     for(int j=1;j<=nst;j++){//stars
//         printf("*");
//     }
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//     }
//     nst--;
//     nsp+=2;
//     printf("\n");
// }
///////////////////////////////////////////
//number in space trangle
// int nst=n;
// int nsp=1;
// for(int x=1;x<=2*n+1;x++){
//     printf("%d",x);
// }
// printf("\n");
// for(int i=1;i<=n;i++){
//     int a=1;
//     for(int j=1;j<=nst;j++){
//         printf("%d",a);
//           a++;
//     }
  
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//         a++;
//     }
//      for(int j=1;j<=nst;j++){
//         printf("%d",a);
//         a++;
//     }
    
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//     }
//     nst--;
//     nsp+=2;
//     printf("\n");
// }
/////////////////////////////////////////////////
//alphabets in space trangle
// int nst=n;
// int nsp=1;
// char ch1=65;
// for(int x=1;x<=2*n+1;x++){
    
//     printf("%c",ch1);
//     ch1++;
// }

// printf("\n");
// for(int i=1;i<=n;i++){
//     char ch=65;
//     for(int j=1;j<=nst;j++){
//         printf("%c",ch);
//         ch++;
//     }
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//         ch++;
//     }
//     for(int j=1;j<=nst;j++){
//         printf("%c",ch);
//         ch++;
//     }
//     for(int z=1;z<=nsp;z++){
//         printf(" ");
//         ch++;
//     }
//     nst--;
//     nsp+=2;
// printf("\n");
// }
///////////////////////////////////////
//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
// int min=0;
// for(int i=1;i<=2*n-1;i++){
//     for(int j=1;j<=2*n-1;j++){
//         int a=i;
//         if(i>n) a=2*n-i;
//         int b=j;
//         if(b>n) b=2*n-j;
//         if(a<b) min =a;
//         else min=b;
        
//         printf("%d",n+1-min);

//     }
//     printf("\n");
// }
//     return 0;
// }

for(int i=1;i<=n;i++){
    char a='*';
    for(int k=1;k<=n-i;k++){
    
    
    for(int j=1;j<=i;j++){
        printf("%c ",a);
         a+i;
        printf(" ");
    }
    }
    // for(int j=1;j<=2*i-1;++j){
    //     printf("*");
    // }
    printf("\n");
}
return 0;

}