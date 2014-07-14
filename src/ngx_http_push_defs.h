
#define NGX_HTTP_PUSH_DEFAULT_SHM_SIZE 33554432 //32 megs
#define NGX_HTTP_PUSH_DEFAULT_BUFFER_TIMEOUT 3600
#define NGX_HTTP_PUSH_DEFAULT_SUBSCRIBER_TIMEOUT 0  //default: never timeout
//(liucougar: this is a bit confusing, but it is what's the default behavior before this option is introducecd)
#define NGX_HTTP_PUSH_DEFAULT_CHANNEL_TIMEOUT 5 //default: timeout in 5 seconds

#define NGX_HTTP_PUSH_DEFAULT_MIN_MESSAGES 1
#define NGX_HTTP_PUSH_DEFAULT_MAX_MESSAGES 10

#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_LASTIN 0
#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_FIRSTIN 1
#define NGX_HTTP_PUSH_SUBSCRIBER_CONCURRENCY_BROADCAST 2

#define NGX_HTTP_PUSH_MECHANISM_LONGPOLL 0
#define NGX_HTTP_PUSH_MECHANISM_INTERVALPOLL 1

#define NGX_HTTP_PUSH_MIN_MESSAGE_RECIPIENTS 0

#define NGX_HTTP_PUSH_MAX_CHANNEL_ID_LENGTH 1024 //bytes

#ifndef NGX_HTTP_CONFLICT
#define NGX_HTTP_CONFLICT 409
#endif

#ifndef NGX_HTTP_GONE
#define NGX_HTTP_GONE 410
#endif

#ifndef NGX_HTTP_CREATED
#define NGX_HTTP_CREATED 201
#endif

#ifndef NGX_HTTP_ACCEPTED
#define NGX_HTTP_ACCEPTED 202
#endif


#define NGX_HTTP_PUSH_MESSAGE_RECEIVED 9000
#define NGX_HTTP_PUSH_MESSAGE_QUEUED   9001

#define NGX_HTTP_PUSH_MESSAGE_FOUND     1000
#define NGX_HTTP_PUSH_MESSAGE_EXPECTED  1001
#define NGX_HTTP_PUSH_MESSAGE_EXPIRED   1002


extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_ETAG;
extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_IF_NONE_MATCH;
extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_VARY;
extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_ALLOW;
extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_CACHE_CONTROL;
extern const  ngx_str_t NGX_HTTP_PUSH_HEADER_PRAGMA;

//header values
extern const  ngx_str_t NGX_HTTP_PUSH_CACHE_CONTROL_VALUE;

//status strings
extern const  ngx_str_t NGX_HTTP_PUSH_HTTP_STATUS_409;
extern const  ngx_str_t NGX_HTTP_PUSH_HTTP_STATUS_410;

//other stuff
extern const ngx_str_t NGX_HTTP_PUSH_ALLOW_GET_POST_PUT_DELETE;
extern const ngx_str_t NGX_HTTP_PUSH_ALLOW_GET;
extern const ngx_str_t NGX_HTTP_PUSH_VARY_HEADER_VALUE;
extern const ngx_str_t NGX_HTTP_PUSH_CHANNEL_INFO_PLAIN;
extern const ngx_str_t NGX_HTTP_PUSH_CHANNEL_INFO_JSON;
extern const ngx_str_t NGX_HTTP_PUSH_CHANNEL_INFO_XML;
extern const ngx_str_t NGX_HTTP_PUSH_CHANNEL_INFO_YAML;