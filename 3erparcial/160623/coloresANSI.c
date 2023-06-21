#include 

int main(void)
{
        const char *const verde = "\033[0;40;32m";
        const char *const subrayado_fazul_verde = "\033[4;44;32m";
        const char *const normal = "\033[0m";

        printf("Mostrando %scolores%s !!!\n", verde, normal);
        printf("Mostrando %scolores%s !!!\n", subrayado_fazul_verde, normal);

        return 0;
}