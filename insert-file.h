
void insert1()
{
    FILE *fp,*fo;
    int i,e,n,a;


fp=fopen("file.txt","a+");

printf("Enter computer no:\n");
scanf("%d",&n);
printf("\tEnter 1 for RAM \n \t Enter 2 for processor \n \t Enter 3 for hard disk \n \t Enter 4 for monitor \n \t Enter 5 for monitor \n \t Enter 6 for monitor \n \t Enter 7 for powersupply\n" );
scanf("%d",&a);






switch(a)
{
case 1:
     system("cls");

     printf("Enter RAM name:\n");
     scanf("%s",c[n-1].r.rname);

     printf("Enter RAM size: \n");
     scanf("%d",&c[n-1].r.siz);

     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].r.amount);
     fprintf(fp,"%s %d %d \n",c[n-1].r.rname,c[n-1].r.siz,c[n-1].r.amount);



     break;
case 2:
     system("cls");

     printf("Enter processor name:\n");
     scanf("%s",c[n-1].p.pname);

     printf("Enter processor size: \n");
     scanf("%d",&c[n-1].p.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].p.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].p.pname,c[n-1].p.siz,c[n-1].p.amount);


     break;
case 3:
     system("cls");
     printf("Enter hard disk name:\n");
     scanf("%s",c[n-1].h.hname);
     printf("Enter hard disk size: \n");
     scanf("%d",&c[n-1].h.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].h.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].h.hname,c[n-1].h.siz,c[n-1].h.amount);


     break;
case 4:
     system("cls");
     fflush(stdin);
     printf("Enter monitor name:\n");
     scanf("%s",c[n-1].mn.mnname);
     printf("Enter monitor size: \n");
     scanf("%d",&c[n-1].mn.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].mn.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].mn.mnname,c[n-1].mn.siz,c[n-1].mn.amount);

     break;
case 5:
     system("cls");
     printf("Enter Keyboard name:\n");
     scanf("%s",c[n-1].k.kname);
     printf("Enter keyboard size: \n");
     scanf("%d",&c[n-1].k.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].k.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].k.kname,c[n-1].k.siz,c[n-1].k.amount);


     break;
case 6:
     system("cls");
     printf("Enter mouse name:\n");
     scanf("%s",c[n-1].m.mname);
     printf("Enter mouse size: \n");
     scanf("%d",&c[n-1].m.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].m.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].m.mname,c[n-1].m.siz,c[n-1].m.amount);


     break;
case 7:
     system("cls");
     printf("Enter power supply name:\n");
     scanf("%s",c[n-1].pw.pwname);
     printf("Enter power supply size: \n");
     scanf("%d",& c[n-1].pw.siz);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].pw.amount);
     fprintf(fp,"%s %d %d\n",c[n-1].pw.pwname,c[n-1].pw.siz,c[n-1].pw.amount);


     break;
default:
    printf("invalid choice\n");
    break;




}
fclose(fp);
printf("\t If you want to insert more information press 1 or to go to main menu press 0 \n");
fflush(stdin);
scanf("%d",&e);
if(e==1)
{
    system("cls");
    insert1();

}
else
{
    system("cls");
    main();
}






}
