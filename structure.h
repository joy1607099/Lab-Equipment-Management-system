
struct RAM
{
    char rname[20];
    int siz;
    int amount;


}r;

struct processor
{
     char pname[20];
     int siz;
     int amount;



}p;
struct harddisk
{
     char hname[20];
     int siz;
     int amount;

}h;
struct monitor
{
     char mnname[20];
     int siz;
     int amount;


}mn;
struct keyboard
{
     char kname[20];
     int siz;
     int amount;


}k;
struct mouse
{
     char mname[20];
     int siz;
    int amount;

}m;
struct powersupply
{
     char pwname[20];
     int siz;
    int amount;

}pw;
struct computer
{
    struct RAM r;
    struct processor p;
    struct harddisk h;
    struct monitor mn;
    struct keyboard k;
    struct mouse m;
    struct powersupply pw;
}c[30];

