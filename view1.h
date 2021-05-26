void show()
{
    int b,c1;
    char ch1,ch2;
    system("cls");
    FILE *fp1;
    fp1=fopen("file.txt","r+");

    printf("\t \t \t Enter computer no:\n");
    fflush(stdin);
    scanf("%d",&b);
    printf("\tEnter 1 for RAM\n\tEnter 2 for processor\n\tEnter 3 for hard disk\n\tEnter 4 for monitor\n\tEnter 5 for monitor\n\tEnter 6 for monitor\n\tEnter 7 for powersupply\n" );
    scanf("%d",&c1);

    switch(c1)
    {

            case 1:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].r.rname,&c[b-1].r.siz,&c[b-1].r.amount)!=EOF)
                {
                        printf("RAM name:%s\n",c[b-1].r.rname);
                        printf("RAM size:%d\n",c[b-1].r.siz);
                        printf("quantity:%d\n",c[b-1].r.amount);

                }
                fclose(fp1);
        }
        case 2:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].p.pname,&c[b-1].p.siz,&c[b-1].p.amount)!=EOF)
                {
                        printf("processor name:%s\n",c[b-1].p.pname);
                        printf("processor size:%d\n",c[b-1].p.siz);
                        printf("quantity:%d\n",c[b-1].p.amount);

                }
                fclose(fp1);
        }case 3:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].h.hname,&c[b-1].h.siz,&c[b-1].h.amount)!=EOF)
                {
                        printf("hard disk name:%s\n",c[b-1].h.hname);
                        printf("hard disk size:%d\n",c[b-1].h.siz);
                        printf("quantity:%d\n",c[b-1].h.amount);

                }
                fclose(fp1);
        }case 4:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].mn.mnname,&c[b-1].mn.siz,&c[b-1].mn.amount)!=EOF)
                {
                        printf("monitor name:%s\n",c[b-1].mn.mnname);
                        printf("monitor size:%d\n",c[b-1].mn.siz);
                        printf("quantity:%d\n",c[b-1].mn.amount);

                }
                fclose(fp1);
        }case 5:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].k.kname,&c[b-1].k.siz,&c[b-1].k.amount)!=EOF)
                {
                        printf("keyboard name:%s\n",c[b-1].k.kname);
                        printf("keyboard size:%d\n",c[b-1].k.siz);
                        printf("quantity:%d\n",c[b-1].k.amount);

                }
                fclose(fp1);
        }case 6:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].m.mname,&c[b-1].m.siz,&c[b-1].m.amount)!=EOF)
                {
                        printf("mouse name:%s\n",c[b-1].m.mname);
                        printf("mouse size:%d\n",c[b-1].m.siz);
                        printf("quantity:%d\n",c[b-1].m.amount);

                }
                fclose(fp1);
        }case 7:
        {

                    while(fscanf(fp1,"%s %d %d",c[b-1].pw.pwname,&c[b-1].pw.siz,&c[b-1].pw.amount)!=EOF)
                {
                        printf("power supply name:%s\n",c[b-1].pw.pwname);
                        printf("power supply size:%d\n",c[b-1].pw.siz);
                        printf("quantity:%d\n",c[b-1].pw.amount);

                }
                fclose(fp1);
        }
            default:
                break;

    }
printf("\t If you want to search more information press 1 or to go to main menu press 0 :\n");
fflush(stdin);
scanf("%c",&ch2);
if(ch2=='1')
{
    show();

}
else
{
    system("cls");
    main();
}






}
