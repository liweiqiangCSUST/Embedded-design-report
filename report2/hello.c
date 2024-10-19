#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT"Hello,李伟强,ck202203060247\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT"Goodbye,李伟强,ck202203060247\n");
}

module_init(hello_init);
module_exit(hello_exit);
