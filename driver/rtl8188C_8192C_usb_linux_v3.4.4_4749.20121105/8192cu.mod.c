#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x524f13c1, "module_layout" },
	{ 0x62abdd79, "register_netdevice" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xcca27eeb, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xbb6b0cad, "dev_set_drvdata" },
	{ 0x4254034f, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x355bdb92, "netif_carrier_on" },
	{ 0x29c24267, "skb_clone" },
	{ 0xd25c021, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa00c2551, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4fe38dbd, "down_interruptible" },
	{ 0x18b0fac4, "netif_carrier_off" },
	{ 0x5f7dfd3a, "usb_kill_urb" },
	{ 0x7976be25, "remove_proc_entry" },
	{ 0x3f858012, "filp_close" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x5e89f2b0, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe55a5737, "usb_enable_autosuspend" },
	{ 0x999e8297, "vfree" },
	{ 0x73a0609b, "usb_disable_autosuspend" },
	{ 0x91715312, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x89879ee, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84cc4c44, "__netdev_alloc_skb" },
	{ 0x835f5351, "netif_rx" },
	{ 0xb8b21b09, "__pskb_pull_tail" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4c30cb57, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x20c6dbb4, "dev_alloc_skb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x85bc0b4b, "usb_deregister" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x2cc33ca1, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x32fbc557, "register_netdev" },
	{ 0xf1e52898, "wireless_send_event" },
	{ 0x522f90fe, "usb_control_msg" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb83be9c, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc8fd727e, "mod_timer" },
	{ 0x31f2457f, "kill_pid" },
	{ 0xac2d27cd, "skb_pull" },
	{ 0xe5fdcb38, "init_net" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2013b6ec, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xcac07b3d, "flush_signals" },
	{ 0x5aadf5cd, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x22ccd993, "netif_device_attach" },
	{ 0x91528258, "usb_submit_urb" },
	{ 0x3ab1ef22, "usb_get_dev" },
	{ 0x52ffc874, "usb_reset_device" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x24f6a770, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xbc0b79da, "eth_type_trans" },
	{ 0x6a2c3ace, "create_proc_entry" },
	{ 0x4693862b, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6f50b9ad, "dev_alloc_name" },
	{ 0x364b3fff, "up" },
	{ 0x737a4c67, "usb_register_driver" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xa4c070d6, "skb_dequeue" },
	{ 0x7fb89c9f, "unregister_netdev" },
	{ 0x60f71cfa, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x12aa1375, "__netif_schedule" },
	{ 0x99bb8806, "memmove" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x19f95f1f, "skb_put" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x3c8511a0, "skb_copy_bits" },
	{ 0xc798115, "dev_get_drvdata" },
	{ 0x270e7b02, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3dcfac8a, "usb_autopm_put_interface" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0xa9b2b3e5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5d431364, "filp_open" },
	{ 0x94db3a36, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "657E53E8FE213B566819C54");
