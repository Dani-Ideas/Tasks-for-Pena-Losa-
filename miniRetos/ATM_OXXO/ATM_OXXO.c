#include <stdio.h>
float venta, pago, cambio;
int cambioTotalEnBilletes500,cambioTotalEnBilletes200,cambioTotalEnBilletes100,cambioTotalEnBilletes50,cambioTotalEnBilletes20;
void main(void)
{
    printf("monto total de venta:$");
    scanf("%f",&venta);
    printf("monto total de pago:$");
    scanf("%f",&pago);
    if (pago > venta)
    {
        cambio= pago - venta;
        if (cambio >=500)
        {
            cambioTotalEnBilletes500 = cambio/500;
            cambio -=(cambioTotalEnBilletes500*500);
        }
        else if (cambio>=200)
        {
            cambioTotalEnBilletes200= cambio/200;
            cambio -=(cambioTotalEnBilletes200*200);
        }
        else if (cambio>=100)
        {
            cambioTotalEnBilletes100= cambio/100;
            cambio -= (cambioTotalEnBilletes100*100);
        }
        else if(cambio>=50){
            cambioTotalEnBilletes50 = cambio/50;
            cambio-=(cambioTotalEnBilletes50*50);
        }
        else
        {
            cambioTotalEnBilletes20 = cambio/20;
            cambio-=(cambioTotalEnBilletes50*20);
        }
        printf("\nCambio total es de $%f\n Te entrego %d billete/s de $500 MXN\n%d billete/s de $200 MXN\n%d billete/s de $100 MXN\n%d billete/s de $50 MXN\n%d billete/s de $20 MXN", cambio, cambioTotalEnBilletes500,cambioTotalEnBilletes200,cambioTotalEnBilletes100,cambioTotalEnBilletes50,cambioTotalEnBilletes20);
    }
    else if (venta == pago)
    {
        printf("\nExelente se a pagado todo😀\nque tenga un buen día👋 hasta pronto.\n");
    }
    else
    {
        printf("\nHuy lamento informar que este pago no es suficiente, me quedare con el dinero que ya me propocionaste 😈\n te invito a que proporciones el resto del pago si no quieres perder el monto aneterior.\n ");
    }
}