extern struct group *__gr_dup P_((const struct group *));
extern void __gr_set_changed P_((void));
extern int gr_close P_((void));
extern const struct group *gr_locate P_((const char *));
extern int gr_lock P_((void));
extern int gr_name P_((const char *));
extern const struct group *gr_next P_((void));
extern int gr_open P_((int));
extern int gr_remove P_((const char *));
extern int gr_rewind P_((void));
extern int gr_unlock P_((void));
extern int gr_update P_((const struct group *));