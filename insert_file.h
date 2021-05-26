


void insert1()
{
FILE *fp;
fp=fopen("file.txt","a+");
int n,a;

printf("Enter computer no:\n");
scanf("%d",&n);
printf("\tEnter 1 for RAM\n\tEnter 2 for processor\n\tEnter 3 for hard disk\n\tEnter 4 for monitor\n\tEnter 5 for monitor\n\tEnter 6 for monitor \n\tEnter 7 for powersupply" );
scanf("%d",&a);






switch(a)
{
case 1:
     system("cls");
     fflush(stdin);
     printf("Enter RAM name:\n");
     scanf("[%^\n]",c[n-1].r.rname);
     fflush(stdin);
     printf("Enter RAM size: \n");
     scanf("[%^\n]",c[n-1].r.siz);
     fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].r.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);


     break;
case 2:
     system("cls");
     fflush(stdin);
     printf("Enter processor name:\n");
     scanf("[%^\n]",c[n-1].p.pname);
     fflush(stdin);
     printf("Enter processor size: \n");
     scanf("[%^\n]",c[n-1].p.siz);
     fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].p.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);

     break;
case 3:
     system("cls");
     fflush(stdin);
     printf("Enter hard disk name:\n");
     scanf("[%^\n]",c[n-1].h.hname);
     fflush(stdin);
     printf("Enter hard disk size: \n");
     scanf("[%^\n]",c[n-1].h.siz);
     fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].h.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);

     break;
case 4:
     system("cls");
     fflush(stdin);
     printf("Enter monitor name:\n");
     scanf("[%^\n]",c[n-1].mn.mnname);
      fflush(stdin);
     printf("Enter monitor size: \n");
     scanf("[%^\n]",c[n-1].mn.siz);
      fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].mn.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);
     break;
case 5:
     system("cls");
     fflush(stdin);
     printf("Enter Keyboard name:\n");
     scanf("[%^\n]",c[n-1].k.kname);
      fflush(stdin);
     printf("Enter keyboard size: \n");
     scanf("[%^\n]",c[n-1].k.siz);
      fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].k.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);

     break;
case 6:
     system("cls");
     fflush(stdin);
     printf("Enter mouse name:\n");
     scanf("[%^\n]",c[n-1].m.mname);
      fflush(stdin);
     printf("Enter mouse size: \n");
     scanf("[%^\n]",c[n-1].m.siz);
      fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].m.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);

     break;
case 7:
     system("cls");
     fflush(stdin);
     printf("Enter power supply name:\n");
     scanf("[%^\n]",c[n-1].pw.pwname);
      fflush(stdin);
     printf("Enter power supply size: \n");
     scanf("[%^\n]",c[n-1].pw.siz);
      fflush(stdin);
     printf("Enter quantity:\n");
     scanf("%d",&c[n-1].pw.amount);
     fwrite(&c[n-1],sizeof(c[n-1]),1,fp);
     fclose(fp);

     break;
default:
    printf("invalid choice\n");
    break;




}






}
