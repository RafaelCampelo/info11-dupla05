/*Jogo Nim
 * comb = combinacao
 * dez = dezena
 * dezf = dezena final
 * cen = centena
 * cenf = cenena final
 * uni = unidade
 * unif = unidade final
 * entra = entrada
 * ver = verificar*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, entra, comb, cen, dez, uni, ver, unif, dezf, cenf;

    scanf("%d", &entra);

    cen = cenf = entra/100;    //tabalhar com cada um individualmente
    dez = dezf = (entra%100)/10;
    uni = unif = (entra%100)%10;
    
    comb = (uni^dez^cen);

    if(0!=comb)     //Quando recebe uma combinacao imperfeita
    {
        if((0!=cen)&&(1!=cen)&&(0==dez)&&(0==uni)||(0==cen)&&(0!=dez)&&(1!=dez)&&(0==uni)||(0==cen)&&(0==dez)&&(0!=uni)&&(1!=uni))
        {
            if(0!=cen)
                cenf = 1;
            if(0!=dez)
                dezf = 1;
            if(0!=uni)
                unif = 1;
        }
        else
        {
            for(i=0;i<=uni;i++)
            {
                ver = (uni-i)^dez^cen;
                if(ver==0)
                {
                    unif = uni-i;
                    break;
                }
            }
            if(ver!=0)
            {
                for(i=0;i<=dez;i++)
                {
                    ver = uni^(dez-i)^cen;
                    if(ver==0)
                    {
                        dezf = dez-i;
                        break;
                    }
                }
                if(0!=ver)
                {
                    for(i=0;i<=cen;i++)
                    {
                        ver = uni^dez^(cen-i);
                        if(ver==0)
                        {
                            cenf = cen-i;
                            break;
                        }
                    }
                }
            }
        }
        printf("%d%d%d\n", cenf, dezf, unif);
    }

    if(0==comb)     //quando recebe uma combinacao perfeita
    {
        if((uni>=dez)&&(uni>=cen))  //tira um para caso o oponente tiver bug, receber uma comb imperfeita
            unif = uni-1;
        if((dez>uni)&&(dez>=cen))
            dezf = (dez-1);
        if((cen>uni)&&(cen>dez))
            cenf = (cen-1);        
        printf("%d%d%d\n", cenf, dezf, unif);
    }
    return 0;
}
