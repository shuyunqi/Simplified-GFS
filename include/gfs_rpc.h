/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GFS_RPC_H_RPCGEN
#define _GFS_RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct open_args {
	char *path;
	int oflags;
	u_int mode;
};
typedef struct open_args open_args;

struct close_args {
	int fd;
};
typedef struct close_args close_args;

struct read_args {
	int fd;
	char *buf;
	long count;
};
typedef struct read_args read_args;

struct write_args {
	int fd;
	char *buf;
	long nbytes;
};
typedef struct write_args write_args;

#define CLNT_MSTR_PROG 0x31230000
#define VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define ask_mstr_open 1
extern  int * ask_mstr_open_1(open_args *, CLIENT *);
extern  int * ask_mstr_open_1_svc(open_args *, struct svc_req *);
#define ask_mstr_close 2
extern  int * ask_mstr_close_1(close_args *, CLIENT *);
extern  int * ask_mstr_close_1_svc(close_args *, struct svc_req *);
#define ask_mstr_read 3
extern  long * ask_mstr_read_1(read_args *, CLIENT *);
extern  long * ask_mstr_read_1_svc(read_args *, struct svc_req *);
#define ask_mstr_write 4
extern  long * ask_mstr_write_1(write_args *, CLIENT *);
extern  long * ask_mstr_write_1_svc(write_args *, struct svc_req *);
extern int clnt_mstr_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ask_mstr_open 1
extern  int * ask_mstr_open_1();
extern  int * ask_mstr_open_1_svc();
#define ask_mstr_close 2
extern  int * ask_mstr_close_1();
extern  int * ask_mstr_close_1_svc();
#define ask_mstr_read 3
extern  long * ask_mstr_read_1();
extern  long * ask_mstr_read_1_svc();
#define ask_mstr_write 4
extern  long * ask_mstr_write_1();
extern  long * ask_mstr_write_1_svc();
extern int clnt_mstr_prog_1_freeresult ();
#endif /* K&R C */

#define MSTR_CHK_PROG 0x31230001
#define VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define ask_chk_open 1
extern  int * ask_chk_open_1(open_args *, CLIENT *);
extern  int * ask_chk_open_1_svc(open_args *, struct svc_req *);
#define ask_chk_close 2
extern  int * ask_chk_close_1(close_args *, CLIENT *);
extern  int * ask_chk_close_1_svc(close_args *, struct svc_req *);
extern int mstr_chk_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ask_chk_open 1
extern  int * ask_chk_open_1();
extern  int * ask_chk_open_1_svc();
#define ask_chk_close 2
extern  int * ask_chk_close_1();
extern  int * ask_chk_close_1_svc();
extern int mstr_chk_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_open_args (XDR *, open_args*);
extern  bool_t xdr_close_args (XDR *, close_args*);
extern  bool_t xdr_read_args (XDR *, read_args*);
extern  bool_t xdr_write_args (XDR *, write_args*);

#else /* K&R C */
extern bool_t xdr_open_args ();
extern bool_t xdr_close_args ();
extern bool_t xdr_read_args ();
extern bool_t xdr_write_args ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GFS_RPC_H_RPCGEN */
