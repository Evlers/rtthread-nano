/* FinSH config file */

#ifndef __MSH_CFG_H__
#define __MSH_CFG_H__

// <<< Use Configuration Wizard in Context Menu >>>
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_USING_MSH_ONLY

// <h>FinSH Configuration

// <o>The priority level value of thread <1-30>
//  <i>The priority level value of thread
//  <i>Default: 7
#define FINSH_THREAD_PRIORITY       7

// <o>The stack size for thread <1-4096>
//  <i>The stack size for thread
//  <i>Default: 4096  (4096Byte)
#define FINSH_THREAD_STACK_SIZE     1024

// <c1>Using symbol table for commands
//  <i>Using symbol table for commands
#define FINSH_USING_SYMTAB
// </c>

// <o>The command line size for shell <1-4096>
//  <i>The stack size for thread
//  <i>Default: 80  (80Byte)
#define FINSH_CMD_SIZE              80

// <c1>Enable command description
//  <i>Enable command description
#define FINSH_USING_DESCRIPTION
//  </c>

// <c1>Enable smart complete
//  <i>Enable smart complete
#define FINSH_USING_SMART_COMPLETE
// </c>

// <c1>Enable command history feature
//  <i>Enable command history feature
#define FINSH_USING_HISTORY
// </c>

// <o>The command history line number
//  <i>The command history line number
//  <i>Default: 7
#define FINSH_HISTORY_LINES       7

// <c1>Disable the echo mode in default
//  <i>Disable the echo mode in default
//#define FINSH_ECHO_DISABLE_DEFAULT
// </c>

// <c1>shell support authentication
//  <i>shell support authentication
//#define FINSH_USING_AUTH
// </c>

// <o>The number of arguments for a shell command
//  <i>The number of arguments for a shell command
//  <i>Default: 8
#define FINSH_ARG_MAX           8

// </h>

// <<< end of configuration section >>>
#endif

