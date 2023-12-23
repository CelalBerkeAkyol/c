// pointer ve malloc kullanarak dizi oluşturma
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr; // bunu arrayın elemanlarını işaret etmek için kullanıcam 
    ptr = malloc(sizeof(int)*5); // 4 tane int değer saklayacak bir alan ayırdım. 
    // kullanıcan değerleri alıyorum 
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Yazdırma işlemi başlıyor ...\n");
    // aldığım değerleri sırası ile yazdırıyorum. Aynı dizideki elemanları yazdırır gibi 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ptr[i]);
    }
    free(ptr);
}
