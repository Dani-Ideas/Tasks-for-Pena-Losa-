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
        /*
        for (size_t i = 0; i < count; i++)
        {
            
        }
        */
        cambioTotalEnBilletes50 = cambio/50;
        printf("\nCambio total es de $%f\n Te entrego %d billete/s de $50 MXN", cambio, cambioTotalEnBilletes50);
    }
    else if (venta == pago)
    {
        printf("\nExelente se a pagado todo😀\nque tega un buen día👋 hasta pronto.\n");
    }
    else
    {
        printf("\nHuy lamento informar que este pago no es suficiente, me quedare con el dinero que ya me propocionaste 😈\n te invito a que me des el resto del pago si no quieres perder el monto aneterior.\n ");
    }
}