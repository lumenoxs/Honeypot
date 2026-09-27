#ifndef GLOBAL_H
#define GLOBAL_H

#include <sys/types.h>
#include <fcntl.h> 
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h> 
#include <string.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <stdarg.h> 
#include <pthread.h> 
#include <time.h> 
#include <sys/time.h> 
#include <errno.h> 
#include <signal.h>
#include <stdatomic.h>
#include <sys/stat.h> 

extern atomic_int current_clients;

/* CONFIG */

#define FAKE_STATUS "{\"version\":{\"name\":\"26.3\",\"protocol\":777},\"enforcesSecureChat\":false,\"description\":\"A Private Minecraft SMP - vanilla survival, anarchy, no whitelist, public server, griefing, raiding, PvP, base building, free items\",\"players\":{\"max\":25,\"online\":4,\"sample\":[{\"name\":\"Steve\",\"id\":\"00000000-0000-0000-0000-000000000001\"},{\"name\":\"Alex\",\"id\":\"00000000-0000-0000-0000-000000000002\"},{\"name\":\"Builder\",\"id\":\"00000000-0000-0000-0000-000000000003\"},{\"name\":\"Miner\",\"id\":\"00000000-0000-0000-0000-000000000004\"}]}}"

#define DISCONNECT_MSG "{\"text\":\"§cAn error occurred\"}"

#define LEGACY_PING_RESP \
  "\xff\x00\x25\x00\xa7\x00\x31\x00\x00\x00\x31\x00\x32\x00\x37\x00\x00" \
  "\x00\x31\x00\x2e\x00\x32\x00\x31\x00\x2e\x00\x35\x00\x00\x00\x41\x00" \
  "\x20\x00\x4d\x00\x69\x00\x6e\x00\x65\x00\x63\x00\x72\x00\x61\x00\x66" \
  "\x00\x74\x00\x20\x00\x53\x00\x65\x00\x72\x00\x76\x00\x65\x00\x72\x00" \
  "\x00\x00\x33\x00\x00\x00\x32\x00\x30"
#define LEGACY_PING_RESP_LEN 77

#define PORT "25565"

/* LOGS CONFIG */
#define VERBOSE 1  /* If set, logs will also be printed to stdout; otherwise, only to the log file */
#define LOG_FILE_PATH "./log.txt"
#define LOG_DIR_PATH  "logs" /* used to save payloads */ 

/* MORE ADVANCED CONFIG */
#define BACKLOG 512
#define MAX_CLIENTS 1000
#define CLIENT_TIMEOUT_SEC 3
#define BUFFER_SIZE 4096

#endif
