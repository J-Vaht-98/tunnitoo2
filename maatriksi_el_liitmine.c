/*
 * Võtab sisendiks maatriksi sisemised elemendid
 * Seejärel liidab kokku esimese kolme rea positiivsed elemendid ja väljastab nende summa*/



#include <stdio.h>
int summa(int maatriks[][10], int n, int m){
//liidab kokku maatriksi esimese kolme või vähema rea positiivsed elemendid
int sum = 0;
for(int i=0; i<n;i++){
    for(int j=0;j<m;j++){
        if(maatriks[i][j] > 0 && i < 3)
        sum+=maatriks[i][j];
    }
}
printf("Esimese kolme või vähema rea summa on %d\n",sum);
return sum;
}
void valjastus(int maatriks[][10], int n, int m){
    // prindib ekraanile sisestatud maatriksi
    printf("Maatriks on:\n");

    for(int i = 0; i<n;i++){
    printf("\n");
    for(int j = 0; j<m;j++){
        printf("%d ",maatriks[i][j]);
    }
}
}
/***************Global variables************/
int n,m;
int max=10;
int maatriks[10][10];
int main(void){
/*********SISESTUS*******/
//Küsib ridade ja veergude arvu
while (1)
{
    printf("Ridu ja veerge peab olema alla %d\n",max);
    printf("Siseta ridade arv: ");
    scanf("%d",&n);
    printf("Siseta veergude arv: ");
    scanf("%d",&m);
    if(n<max && m<max){
        break;
    }
}
printf("Ridu on %d. Veerge on %d\n",n,m);
//Sisesta väärtused maatriksisse

for(int i = 0; i<n;i++){
    printf("Uus rida:\n");
    for(int j = 0; j<m;j++){
        printf("Sisesta element: \n");
        scanf("%d",&maatriks[i][j]);
    }
}
printf("\n");

/****************************Töötlus***************************************/
/*tagastab esimese kolme(või vähema)
 rea positiivsete arvude summad*/
int sum = summa(maatriks, n, m);

/***************************Väljastus**************************/
valjastus(maatriks, n, m);


return 0;
}

