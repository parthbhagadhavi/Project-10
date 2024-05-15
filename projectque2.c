

    #include<stdio.h>
    #include<string.h>
    main()
    {
    char a[100];
    int fres[200]={0};
    printf("my name is soya parth A.");
    
    printf("question 2:-Write a Program to count the frequency of each character in a given string.\n");
    printf("enter any string\n");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
    fres[a[i]]++;
    
    for(int i=0;a[i]!='\0';i++){
    if(fres[a[i]]!=0){
    printf("%c=%d",a[i],fres[a[i]]);
    fres[a[i]]=0;
    }
    
    }
    
    }
    printf("\n,,,thank you,,,");
    }