void show()
{

    system("cls");
    FILE *fp1;
    fp1=fopen("file.txt","r+");
    int b,c1,ch1,ch3;
    //char ch3;
    printf("\t \t \t Enter computer no:\n");
    scanf("%d",&b);
    printf("\n\t\t If you want  all information press 1.\n\t\t Otherwise press 0 and choose specific information by following this:");
    fflush(stdin);
    scanf("%d",&ch1);
    if(ch1==1)
    {
          while(fscanf(fp1,"%s %d %d",c[b-1].r.rname,&c[b-1].r.siz,&c[b-1].r.amount)!=EOF)
                {
                        printf("RAM name:%s\n",c[b-1].r.rname);
                        printf("RAM size:%d\n",c[b-1].r.siz);
                        printf("quantity:%d\n",c[b-1].r.amount);

                }
                printf("\n\n");


                    while(fscanf(fp1,"%s %d %d",c[b-1].p.pname,&c[b-1].p.siz,&c[b-1].p.amount)!=EOF)
                {
                        printf("processor name:%s\n",c[b-1].p.pname);
                        printf("processor size:%d\n",c[b-1].p.siz);
                        printf("quantity:%d\n",c[b-1].p.amount);

                }
                 printf("\n\n");

                    while(fscanf(fp1,"%s %d %d",c[b-1].h.hname,&c[b-1].h.siz,&c[b-1].h.amount)!=EOF)
                {
                        printf("hard disk name:%s\n",c[b-1].h.hname);
                        printf("hard disk size:%d\n",c[b-1].h.siz);
                        printf("quantity:%d\n",c[b-1].h.amount);

                }
                 printf("\n\n");

                  while(fscanf(fp1,"%s %d %d",c[b-1].mn.mnname,&c[b-1].mn.siz,&c[b-1].mn.amount)!=EOF)
                {
                        printf("monitor name:%s\n",c[b-1].mn.mnname);
                        printf("monitor size:%d\n",c[b-1].mn.siz);
                        printf("quantity:%d\n",c[b-1].mn.amount);

                }
                 printf("\n\n");

                   while(fscanf(fp1,"%s %d %d",c[b-1].k.kname,&c[b-1].k.siz,&c[b-1].k.amount)!=EOF)
                {
                        printf("keyboard name:%s\n",c[b-1].k.kname);
                        printf("keyboard size:%d\n",c[b-1].k.siz);
                        printf("quantity:%d\n",c[b-1].k.amount);

                }
                 printf("\n\n");
                    while(fscanf(fp1,"%s %d %d",c[b-1].m.mname,&c[b-1].m.siz,&c[b-1].m.amount)!=EOF)
                {
                        printf("mouse name:%s\n",c[b-1].m.mname);
                        printf("mouse size:%d\n",c[b-1].m.siz);
                        printf("quantity:%d\n",c[b-1].m.amount);

                }
                 printf("\n\n");

                    while(fscanf(fp1,"%s %d %d",c[b-1].pw.pwname,&c[b-1].pw.siz,&c[b-1].pw.amount)!=EOF)
                {
                        printf("power supply name:%s\n",c[b-1].pw.pwname);
                        printf("power supply size:%d\n",c[b-1].pw.siz);
                        printf("quantity:%d\n",c[b-1].pw.amount);

                }
                 fclose(fp1);
                 printf("\n\n");

                 //fclose(fp1);


    }
    else
    {
        printf("\tEnter 1 for RAM \n \t Enter 2 for processor \n \t Enter 3 for hard disk \n \t Enter 4 for monitor \n \t Enter 5 for monitor \n \t Enter 6 for monitor \n \t Enter 7 for powersupply\n" );
        fflush(stdin);
        scanf("%d",&c1);

    switch(c1)
    {

            case 1:


                        while(fscanf(fp1,"%s %d %d",c[b-1].r.rname,&c[b-1].r.siz,&c[b-1].r.amount)!=EOF)
                {
                        printf("RAM name:%s\n",c[b-1].r.rname);
                        printf("RAM size:%d\n",c[b-1].r.siz);
                        printf("quantity:%d\n",c[b-1].r.amount);

                }
                fclose(fp1);
                break;


        case 2:

                    while(fscanf(fp1,"%s %d %d",c[b-1].p.pname,&c[b-1].p.siz,&c[b-1].p.amount)!=EOF)
                {
                        printf("processor name:%s\n",c[b-1].p.pname);
                        printf("processor size:%d\n",c[b-1].p.siz);
                        printf("quantity:%d\n",c[b-1].p.amount);

                }
                fclose(fp1);
                break;

        case 3:

                    while(fscanf(fp1,"%s %d %d",c[b-1].h.hname,&c[b-1].h.siz,&c[b-1].h.amount)!=EOF)
                {
                        printf("hard disk name:%s\n",c[b-1].h.hname);
                        printf("hard disk size:%d\n",c[b-1].h.siz);
                        printf("quantity:%d\n",c[b-1].h.amount);

                }
                fclose(fp1);
                break;

        case 4:


                    while(fscanf(fp1,"%s %d %d",c[b-1].mn.mnname,&c[b-1].mn.siz,&c[b-1].mn.amount)!=EOF)
                {
                        printf("monitor name:%s\n",c[b-1].mn.mnname);
                        printf("monitor size:%d\n",c[b-1].mn.siz);
                        printf("quantity:%d\n",c[b-1].mn.amount);

                }
                fclose(fp1);
                break;
        case 5:


                    while(fscanf(fp1,"%s %d %d",c[b-1].k.kname,&c[b-1].k.siz,&c[b-1].k.amount)!=EOF)
                {
                        printf("keyboard name:%s\n",c[b-1].k.kname);
                        printf("keyboard size:%d\n",c[b-1].k.siz);
                        printf("quantity:%d\n",c[b-1].k.amount);

                }
                fclose(fp1);
                break;
        case 6:


                    while(fscanf(fp1,"%s %d %d",c[b-1].m.mname,&c[b-1].m.siz,&c[b-1].m.amount)!=EOF)
                {
                        printf("mouse name:%s\n",c[b-1].m.mname);
                        printf("mouse size:%d\n",c[b-1].m.siz);
                        printf("quantity:%d\n",c[b-1].m.amount);

                }
                fclose(fp1);
                break;
        case 7:


                    while(fscanf(fp1,"%s %d %d",c[b-1].pw.pwname,&c[b-1].pw.siz,&c[b-1].pw.amount)!=EOF)
                {
                        printf("power supply name:%s\n",c[b-1].pw.pwname);
                        printf("power supply size:%d\n",c[b-1].pw.siz);
                        printf("quantity:%d\n",c[b-1].pw.amount);

                }
                fclose(fp1);
                break;
        default:
                break;

    }
printf("\t If you want to insert more information press 1 or to go to main menu press 0 \n");
scanf("%d",&ch3);
if(ch3==1)
{
    system("cls");
    show();

}
else
{
    system("cls");
    main();
}



    }


}

