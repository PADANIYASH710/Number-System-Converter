#include<stdio.h>
#include<conio.h>
#include<time.h>
int r,n,k,s;

void menu();
void d2b();
void d2o();
void d2h();
void b2d();
void b2o();
void b2h();
void o2d();
void o2b();
void o2h();
void h2d();
void h2b();
void h2o();

int main()
{
     int password,count=0; 
     clrscr();
     printf("\n\n\nEnter Password : ");
     p:
     scanf("%d",&password);
    
     if(count<3)
     {    
         if(password==7105)
         {
             menu();
         }   
         else
         {
             clrscr();
             printf("\n  pin is wrong please try again");
             printf("\n\nEnter Password : ");
             count++;
             goto p;
         }
     } 
     else
     {
         clrscr();
         printf("\n\n\tsystem is locked \n");
         printf("\t wait 10 second\n");
         time_t start,end;
         int second=10;
         
           start = time(NULL);
           end = start + second;
          int rem; 
          
           while(time(NULL) < end)
           {
               rem = end - time(NULL);
               sleep(1);
           }
               count=0;
               main();
     }   
} 
 
void menu()
{
        int ch;
        clrscr();
        printf("1.Decimal convert to binary\n");
        printf("2.Decimal convert to octal\n");
        printf("3.Decimal convert to hexadecimal\n\n");
        printf("4.Binary convert to decimal\n"); 
        printf("5.Binary convert to octal \n");
        printf("6.Binary convert to hexadecimal\n\n");
        printf("7.Hexadecimal convert to decimal\n");
        printf("8.Hexadecimal convert to binary\n");
        printf("9.Hexadecimal convert to octal\n\n");
        printf("10.Octal convert to decimal\n");
        printf("11.Octal convert to binary\n");
        printf("12.Octal convert to hexadecimal\n\n");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            d2b();
            menu();
            
            case 2:
            d2o();
            menu();
            
            case 3:
            d2h();
            menu();
            
            case 4:
            b2d();
            menu();
            
            case 5:
            b2o();
            menu();
            
            case 6:
            b2h();
            menu();
            
            case 7:
            h2d();
            menu();
            
            case 8:
            h2b();
            menu();
            
            case 9:
            h2o();
            menu();
            
            case 10:
            o2d();
            menu();
            
            case 11:
            o2b();
            menu();
            
            case 12:
            o2h();
            menu();
            
            default:
            printf("\n\nChoice is wrong ...\n\n");
            getch();getch();
            menu();
        }

}

void d2b()   
{
        int base=0,x=1;
        clrscr();
        printf("   Decimal convert into Binary \n\n");
        printf("Enter Decimal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 2;
            base = base + r * x;
            n = n / 2;
            x = x * 10;
        }
        
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        if(s==1)
        {
            printf("Method : \n");
            printf("We convert decimal to binary. \n\n");
            printf("Decimal Number = %d\n\n",k);
            while(k>0)
            {
                r = k % 2;
                printf("_2_|_%03d_|_%d_\n",k,r);
                k = k / 2;
            }
                printf("   |  1  |\n\n");
                printf("collected last line all numbers in reverse order = %d",base);
                printf("\n\t\t   ----->");
                printf("\n\nso,Binary Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void d2o()  
{
        int base=0,x=1; 
        clrscr();
        printf("   Decimal convert into octal \n\n");
        printf("Enter Decimal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 8;
            base = base + r * x;
            n = n / 8;
            x = x * 10;
        }
        
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        if(s==1)
        {
            printf("Method : \n");
            printf("We convert decimal to octal. \n\n");
            printf("Decimal Number = %d\n\n",k);
            while(k>0)
            {
                r = k % 8;
                printf("_8_|_%03d_|_%d_\n",k,r);
                k = k / 8;
            }
                printf("   |  1  |\n\n");
                printf("collected last line all digits in reverse order = %d",base);
                printf("\n\t\t   ----->");
                printf("\n\nso,Octal Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void d2h() 
{
        int i=0;
        char a[15];
        clrscr();
        printf("Decimal convert into hexadecimal\n\n");
        printf("Enter Decimal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        
        while(n>0)
        {
            r = n % 16;
              
                if(r>=10 && r<=15)
                {
                    a[i++] = 55 + r;
                }
                else
                {
                    a[i++] = 48 + r;
                }    
            n = n / 16;
        }
            printf("( ");
            for(int j=i-1;j>-1;j--)
            {
                printf("%c",a[j]);
            }
            printf(" )");
        
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        if(s==1)
        {
            printf("Method : \n");
            printf("We convert decimal to hexadecimal. \n\n");
            printf("Decimal Number = %d\n\n",k);
            while(k>0)
            {
                r = k % 16;
                printf("_16_|_%03d_|_%02d_\n",k,r);
                k = k / 16;
            }
            printf("    |  1  |\n\n");
                
                printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
                printf("collected last line all digits in reverse order = ");
                for(int j=i-1;j>-1;j--)
                {
                     printf(" %c",a[j]);
                }
                printf("\n\t\t    -------->");
                printf("\n\nso,Hexadecimal Number = \n\n\t  ");
                printf("  ( ");
                for(int j=i-1;j>-1;j--)
                {
                     printf("%c",a[j]);
                }
                printf(" )");
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void b2d()
{
        int base=0,x=1,count=0;
        clrscr();
        printf("   Binary convert into decimal\n\n");
        printf("Enter binary Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 2;
            count++;
        }
        
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("We convert binary to decimal. \n\n");
            printf("Binary Number = %d",k);
            printf("\n\t\t<------");
            printf("\n\nso,we reverse binary number and perform below sum : \n\n");
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,base);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 2;
            }
                printf("\n\nso,Decimal Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void b2o() 
{
        int base=0,x=1,count=0,y=1;
        clrscr();
        printf("   Binary convert into octal \n\n");
        printf("Enter Binary Number : ");
        scanf("%d",&n);
        
        k = n;
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 2;
            count++;
        }
        int z = base;
        n = base;
        base = 0;
        x = 1;
        while(n>0)
        {
            r = n % 8;
            base = base + r * x;
            n = n / 8;
            x = x * 10;
        }
        
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        x = 1;
        if(s==1)
        {
            printf("Method : \n");
            printf("First,we convert binary to dec-imal. \n\n");
            printf("Binary Number = %d",k);
            printf("\n\t\t<------");
            printf("\n\nso,we reverse binary number and perform below sum : \n\n");
            
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,z);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 2;
            }
                printf("\n\nso,Decimal Number = %d",z);
                printf("\n\nso,we convert decimal to octal. \n");
                
                while(z>0)
                {
                    r = z % 8;
                    printf("_8_|_%03d_|_%d_\n",z,r);
                    z = z / 8;
                }
                printf("   |  1  |\n\n");
                printf("collected last line all digits in reverse order = %d",base);
                printf("\n\t\t   ----->");
                printf("\n\nso,Octal Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void b2h() 
{
        int base=0,x=1,i,count=0;
        char a[7];
        clrscr();
        printf(" Binary convert into hexadecimal\n\n");
        printf("Enter Binary Number : ");
        scanf("%d",&n);
        
        k = n;
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 2;
            count++;
        }
        n = base;
        
       while(n>0)
       {
            r = n % 16;
               if(r>=10 && r<=15)
               {
                   a[i++] = 55 + r;
               }
               else
               {
                   a[i++] = 48 + r;
               }    
            n = n / 16;
       }
            printf("( ");
            for(int j=i-1;j>-1;j--)
            {
                  printf("%c",a[j]);
            }
            printf(" )"); 
            
            
       printf("\n--------------------------------");
       printf("show method press '1'\n");
       printf("go to menu press '0' : ");
       scanf("%d",&s);
       clrscr();
       x = 1;
       if(s==1)
       {
            printf("Method : \n");
            printf("First,we convert binary to dec-imal . \n\n");
            printf("Binary Number = %d",k);
            printf("\n\t\t<------");
            printf("\n\nso,we reverse binary number and perform below sum : \n\n");
            int y=1;
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,base);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 2;
            }
                printf("\n\nso,Decimal Number = %d",base);
                printf("\n\nso,we convert decimal to hexadecimal. \n\n");
                
            while(base>0)
            {
                r = base % 16;
                printf("_16_|_%03d_|_%d_\n",base,r);
                base = base / 16;
            }
                printf("    |  1  |\n\n");
                printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
                printf("collected last line all digits in reverse order = ");
                for(int j=i-1;j>-1;j--)
                {
                     printf(" %c",a[j]);
                }
                printf("\n\t\t    -------->");
                printf("\n\nso,Hexadecimal Number = \n\n\t  ");
                printf("  ( ");
                for(int j=i-1;j>-1;j--)
                {
                     printf("%c",a[j]);
                }
                printf(" )");
                printf("\n--------------------------------");
        }
        else{ menu();}            
            
            getch();getch();
}

void o2d() 
{
        int base=0,x=1,count=0;
        clrscr();
        printf("   Octal convert into decimal\n\n");
        printf("Enter octal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 8;
            count++;
        }
        
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("We convert octal to decimal. \n\n");
            printf("Octal Number = %d",k);
            printf("\n\t       <-----");
            printf("\n\nso, we reverse octal number and perform below sum : \n\n");
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,base);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 8;
            }
                printf("\n\nso,Decimal Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();
}

void o2b() 
{
        int base=0,x=1,count=0;
        clrscr();
        printf("   Octal convert into binary\n\n");
        printf("Enter octal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 8;
            count++;
        }
        n = base;
        int t = base;
        base =0;
        x = 1;
        while(n>0)
        {
            r = n % 2;
            base = base + r * x;
            n = n / 2;
            x = x * 10;
        }
        printf("( %d )",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("First,we convert octal to deci-mal. \n\n");
            printf("Octal Number = %d",k);
            printf("\n\t       <-----");
            printf("\n\nso, we reverse octal number and perform below sum : \n\n");
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,t);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 8;
            }
                printf("\n\nso,Decimal Number = %d",t);
                printf("\n\nso,we convert decimal to binary\n\n");
                while(t>0)
                {
                    r = t % 2;
                    printf("_2_|_%03d_|_%d_\n",t,r);
                    t = t / 2;
                }
                printf("   |  1  |\n\n");
                printf("collected last line all digits in reverse order = %d",base);
                printf("\n\t\t   ----->");
                printf("\n\nso,Binary Number = %d",base);
                printf("\n--------------------------------");
        }
        else{ menu();}        
        getch();getch();
}

void o2h()  
{

        int base=0,x=1,count=0,i=0;
        char a[15];
        clrscr();
        printf("Octal convert into hexadecimal\n\n");
        printf("Enter octal Number : ");
        scanf("%d",&n);
        k = n;
        
        printf("\n\n\t( %d ) = ",n);
        while(n>0)
        {
            r = n % 10;
            base = base + r * x;
            n = n / 10;
            x = x * 8;
            count++;
        }
        n = base;
        
        while(n>0)
        {
            r = n % 16;
              
                if(r>=10 && r<=15)
                {
                    a[i++] = 55 + r;
                }
                else
                {
                    a[i++] = 48 + r;
                }    
            n = n / 16;
        }
        printf("( ");
        for(int j=i-1;j>-1;j--)
        {
            printf("%c",a[j]);
        }printf(" )");
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("First,we convert octal to deci-mal . \n\n");
            printf("Octal Number = %d",k);
            printf("\n\t       <-----");
            printf("\n\nso, we reverse octal number and perform below sum : \n\n");
            while(k>0)
            {
                r = k % 10;
                    if(count==y)
                    {
                        printf("%d*%d = %d",r,x,base);
                    }
                    else
                    {
                        printf("%d*%d + ",r,x); y++;
                    }    
                k = k / 10;
                x = x * 8;
            }
                printf("\n\nтso,Decimal Number = %d",base);
                printf("\n\nso,we convert decimal to hexad-ecimal.\n\n");
                k = base;
            while(k>0)
            {
                r = k % 16;
                printf("_16_|_%03d_|_%02d_\n",k,r);
                k = k / 16;
            }
            printf("    |  1  |\n\n");
                
                printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
                printf("collected last line all digits in reverse order = ");
                for(int j=i-1;j>-1;j--)
                {
                     printf(" %c",a[j]);
                }
                printf("\n\t\t    -------->");
                printf("\n\nso,Hexadecimal Number = \n\n\t  ");
                printf("  ( ");
                for(int j=i-1;j>-1;j--)
                {
                     printf("%c",a[j]);
                }
                printf(" )");
                printf("\n--------------------------------");
        }
        else{ menu();}        
        getch();getch();
}

void h2d()   
{
        char a[10];
        int i,l=0,x=1,base=0,d=0;
        clrscr();
        printf("Hexadecimal convert into decimal\n\n");  
        printf("Enter hexadecimal Number : ");
        scanf("%s",&a);
        
         l = strlen(a);
        for(i=l-1;i>-1;i--)
        {
            if(a[i]>='A' && a[i]<='F')
            {
                base = a[i] - 55;
            }
            else
            {
                base = a[i] - 48;
            }
            d = d  + base * x;
            x = x * 16;
        } 
        printf("\n\tDecimal number = %d",d);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("so,we convert hexadecimal to decimal.\n\n");
            printf("Hexadecimal Number = ");
            puts(a);
            printf("\t\t     <------");
            printf("\n\nso,we reverse hexadecimal number and perform below sum : \n\n");
            printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
            for(i=l-1;i>-1;i--)
            {
                if(a[i]>='A' && a[i]<='F')
                {
                    base = a[i] - 55;
                }
                else
                {
                    base = a[i] - 48;
                }
                if(y==l)
                {
                    printf(" %c*%d = %d",a[i],x,d);
                }
                else 
                {
                    printf(" %c*%d + ",a[i],x); y++;
                }
                x = x * 16;
            } 
                printf("\n\nso,Decimal Number = %d",d);
                printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();             
}

void h2b()
{
        char a[10];
        int i,l=0,x=1,base=0,d=0;
        clrscr();
        printf("Hexadecimal convert into decimal\n\n");  
        printf("Enter hexadecimal Number : ");
        scanf("%s",&a);
        
         l = strlen(a);
        for(i=l-1;i>-1;i--)
        {
            if(a[i]>='A' && a[i]<='F')
            {
                base = a[i] - 55;
            }
            else
            {
                base = a[i] - 48;
            }
            d = d  + base * x;
            x = x * 16;
        } 
        n = d;x = 1;base = 0;
        while(n>0)
        {
            r = n % 2;
            base = base + r * x;
            n = n / 2;
            x = x * 10;
        }
        int t = base;
        printf("\nBinary number = %d",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("First,we convert hexadedecimal to decimal . \n\n");
            printf("Hexadecimal Number = ");
            puts(a);
            printf("\t\t     <------");
            printf("\n\nso,we reverse hexadecimal number and perform below sum : \n\n");
            printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
            for(i=l-1;i>-1;i--)
            {
                if(a[i]>='A' && a[i]<='F')
                {
                    base = a[i] - 55;
                }
                else
                {
                    base = a[i] - 48;
                }
                if(y==l)
                {
                    printf("%c*%d = %d",a[i],x,d);
                }
                else 
                {
                    printf("%c*%d + ",a[i],x); y++;
                }
                x = x * 16;
            } 
                printf("\n\nso,Decimal Number = %d",d);
                printf("\n\nso,we convert decimal to binary\n\n");
                int k = d;
                while(k>0)
                {
                    r = k % 2;
                    printf("_2_|_%03d_|_%d_\n",k,r);
                    k = k / 2;
                }
                    printf("   |  1  |\n\n");
                    printf("collected last line all digits in reverse order = %d",t);
                    printf("\n\t\t   ----->");
                    printf("\n\nso,Binary Number = %d",t);
                    printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();             
}

void h2o()
{
        char a[10];
        int i,l=0,x=1,base=0,d=0;
        clrscr();
        printf("Hexadecimal convert into decimal\n\n"); 
        printf("Enter hexadecimal Number : ");
        scanf("%s",&a);
        
         l = strlen(a);
        for(i=l-1;i>-1;i--)
        {
            if(a[i]>='A' && a[i]<='F')
            {
                base = a[i] - 55;
            }
            else
            {
                base = a[i] - 48;
            }
            d = d  + base * x;
            x = x * 16;
        } 
         n = d;x = 1;base = 0;
        while(n>0)
        {
            r = n % 8;
            base = base + r * x;
            n = n / 8;
            x = x * 10;
        }
        int t = base;
        printf("\n\tOctal number = %d",base);
        printf("\n--------------------------------");
        printf("show method press '1'\n");
        printf("go to menu press '0' : ");
        scanf("%d",&s);
        clrscr();
        
        x = 1;
        int y=1;
        if(s==1)
        {
            printf("Method : \n");
            printf("First,we convert hexadedecimal to decimal . \n\n");
            printf("Hexadecimal Number = ");
            puts(a);
            printf("\t\t     <------");
            printf("\n\nso,we reverse hexadecimal number and perform below sum : \n\n");
            printf("when We can write,A=10,B=11,C=12,D=13,E=14,F=15.\n\n");
            for(i=l-1;i>-1;i--)
            {
                if(a[i]>='A' && a[i]<='F')
                {
                    base = a[i] - 55;
                }
                else
                {
                    base = a[i] - 48;
                }
                if(y==l)
                {
                    printf("%c*%d = %d",a[i],x,d);
                }
                else 
                {
                    printf("%c*%d + ",a[i],x); y++;
                }
                x = x * 16;
            } 
                printf("\n\nso,Decimal Number = %d",d);
                printf("\n\nso,we convert decimal to octal\n\n");
                int k = d;
                while(k>0)
                {
                    r = k % 8;
                    printf("_8_|_%03d_|_%d_\n",k,r);
                    k = k / 8;
                }
                    printf("   |  1  |\n\n");
                    printf("collected last line all digits in reverse order = %d",t);
                    printf("\n\t\t   ----->");
                    printf("\n\nso,Octal Number = %d",t);
                    printf("\n--------------------------------");
        }
        else{ menu();}
        getch();getch();             
} 
    