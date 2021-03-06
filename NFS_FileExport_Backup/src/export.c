#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include "export.h"
#include <ctype.h>
#define PERMS 0666 
#define path "/var/lib/nfs/etab"
#define versionpath "/proc/fs/nfsd/versions"     
void error(char *,  ...);
char* permission(char* ch1,char buf[],int i);
struct nfs* get_export_list(int *len)
{
   char *ch1, *pername[]= { "rw", "sync","root_squash","no_subtree_check"};
   int i,j=0,k=0,t,q;
   int n,f1;   
   char buf[BUFSIZ];
   if ((f1 = open(path, O_RDONLY, 0)) == -1)
        error("cp: can't open ");
   while ((n = read(f1, buf, BUFSIZ)) > 0);
   struct nfs *ptr = malloc(sizeof(struct nfs));
   ptr->share=(char***)malloc(sizeof(char**)*50);
   ch1 = malloc(sizeof(char*)*50);
   for(i=0;buf[i]!='\0';i++,k++)
   {
     if(isspace(buf[i]))
     { 
        t=0;
        ptr->share[j]=(char**)malloc(sizeof(char*)*20);             
        while(isspace(buf[i])) i++; 
        ch1[k]='\0'; 
        ptr->share[j][t] = calloc(strlen(ch1) + 1, 1);
        strcpy(ptr->share[j][t],ch1);        
        k=0;
        while(buf[i]!='(') 
        {
             ch1[k]=buf[i];
             k++;
             i++;
        }
        ch1[k]='\0';       
        t++;
        ptr->share[j][t] = calloc(strlen(ch1) + 1, 1);
        strcpy(ptr->share[j][t],ch1);
        t++;
        *len=sizeof(pername)/sizeof(char*);
        for(q=0;q<*len;q++)
        {
            ptr->share[j][t] = calloc(strlen(pername[q]) + 1, 1);
            strcpy(ptr->share[j][t],permission(pername[q],buf,i));
            t++;            
        }        
        while(buf[i]!='\n')  i++;
        ptr->countshare=j+1;     
        i++;                     
        j++;
        k=0;                                                                
     }
     ch1[k]=buf[i];
   }
   return ptr;
}
char* permission(char* ch1,char buf[],int i)
{
    unsigned int c=0;  
    while (buf[i]!='\n')
    {
      if (buf[i]==ch1[c] && ch1[c]!='\0' && buf[i]!=' ')
      {
        c++;
        if(c==strlen(ch1)) 
           return ch1;            
      }
      else
          c=0;
      i++;
    }      
    printf("\n");
    return "NULL"; 
}
char* getversion()
{
   int n,f1;
   char *buf = (char*) malloc(50*sizeof(char));
   if ((f1 = open(versionpath,O_RDONLY, 0)) == -1)
        error("cp: can't open ");
   while ((n = read(f1, buf, BUFSIZ)) > 0);
   return buf;
}
