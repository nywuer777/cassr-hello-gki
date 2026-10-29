#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void) {
    printk(KERN_INFO "CassR: Módulo carregado com sucesso no Ring 0!\n");
    return 0;
}

void cleanup_module(void) {
    printk(KERN_INFO "CassR: Módulo descarregado.\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("CassR");
MODULE_DESCRIPTION("CassR Kernel Hook");
