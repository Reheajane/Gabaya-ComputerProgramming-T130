/*******************************************************************************/

#include<stdio.h>

int acc(int fight[3][2], int ID, int PIN) {
int tree=0;

for(int i=0;i<3;i++) {

    if(ID==fight[i][0] && PIN==fight[i][1]){

        tree=1;
    }
}
return tree;
} int main(){

 int fight[3][2]={{1234,1111},{2345,2222},{3456,3333}};

  int ID, PIN;

   printf("ENTER ID NUMBER:");

  scanf("%d",&ID);

   printf("ENTER PIN:");

  scanf("%d",&PIN);


  if(acc(fight,ID,PIN))
{

     printf("YOU HAVE SUCCESSULLY LOGGED IN\nID#:%d",ID);
}


  else {

     printf("INVALID ID/PIN");
}
return 0;
}
