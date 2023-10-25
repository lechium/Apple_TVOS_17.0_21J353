//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct _firehose_unaligned_chunk_s {
    struct firehose_chunk_s _field1;
};

struct _firehose_unaligned_tracepoint_s {
    struct firehose_tracepoint_s _field1;
};

struct _log_colors_s {
    CDStruct_d78a4c71 timestamp;
    CDStruct_d78a4c71 thread;
    CDStruct_d78a4c71 type;
    CDStruct_d78a4c71 activity;
    CDStruct_d78a4c71 pid;
    CDStruct_d78a4c71 ttl;
    CDStruct_d78a4c71 process;
    CDStruct_d78a4c71 sender;
    CDStruct_d78a4c71 subsystem;
    CDStruct_d78a4c71 category;
    CDStruct_d78a4c71 message;
    CDStruct_d78a4c71 highlight;
    CDStruct_d78a4c71 drop;
};

struct _log_flags_s {
    int show_backtrace;
    int show_info;
    int show_debug;
    int show_signposts;
    int show_loss;
    int show_source;
    int color;
    int force;
    int local_timezone;
    int pager;
    int print_mach_cont_time;
    int predicate_dry_run;
};

struct _log_totals_s {
    unsigned long long logs[5];
    unsigned long long activity_creates;
    unsigned long long traces[5];
    unsigned long long useractions;
    unsigned long long activity_transitions;
    unsigned long long statedumps;
    unsigned long long unknown;
    unsigned long long signposts[5];
};

struct catalog_procinfo_s;

struct catalog_s;

struct catalog_subchunk_s;

struct chunk_support_context_s {
    unsigned int _field1;
    int _field2;
    struct os_activity_map_s *_field3;
    struct timezone _field4;
    struct tracev3_chunk_header_s *_field5;
    struct tracev3_chunk_s *_field6;
    struct catalog_s *_field7;
    struct catalog_subchunk_s *_field8;
    struct catalog_procinfo_s *_field9;
    struct _firehose_unaligned_chunk_s *_field10;
    struct iovec _field11;
    struct _os_timesync_db_s *_field12;
    CDUnknownBlockType _field13;
    CDUnknownBlockType _field14;
};

struct firehose_chunk_s {
    union {
        unsigned char _field1[4096];
        struct {
            union {
                _Atomic unsigned long long _field1;
                unsigned long long _field2;
                struct {
                    unsigned short _field1;
                    unsigned short _field2;
                    unsigned char _field3;
                    unsigned char _field4;
                    unsigned char _field5;
                    unsigned int :1;
                    unsigned int :1;
                    unsigned int :1;
                    unsigned int :5;
                } _field3;
            } _field1;
            unsigned long long _field2;
            unsigned char _field3[4080];
        } _field2;
    } _field1;
};

struct firehose_tracepoint_s {
    CDUnion_780443c4 _field1;
    unsigned long long _field2;
    union {
        struct {
            unsigned int :48;
            unsigned int :16;
        } _field1;
        unsigned long long _field2;
        _Atomic unsigned long long _field3;
    } _field3;
    unsigned char _field4[0];
};

struct iovec {
    void *_field1;
    unsigned long long _field2;
};

struct mach_timebase_info {
    unsigned int _field1;
    unsigned int _field2;
};

struct os_activity_map_s;

struct os_log_options_s {
    union {
        struct {
            unsigned char _field1;
            unsigned char _field2;
            unsigned char _field3;
            unsigned char _field4;
            unsigned int :3;
            unsigned int :3;
            unsigned int :3;
            unsigned int :1;
            unsigned int :1;
            unsigned int :2;
            unsigned int :2;
            unsigned int :2;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :2;
            unsigned int :1;
            unsigned int :2;
            unsigned int :1;
            unsigned int :1;
            unsigned int :3;
            unsigned int :1;
            unsigned int :1;
        } _field1;
        unsigned long long _field2;
    } _field1;
};

struct os_log_pref_cache_record_s {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct os_log_options_s _field4;
    char _field5[0];
};

struct raw_statistics_s {
    unsigned long long count;
    unsigned long long subsystems;
    unsigned long long fail_subsystem;
    unsigned long long fail_uuid;
    unsigned long long fail_message;
};

struct time {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

struct timezone {
    int _field1;
    int _field2;
};

struct tracev3_chunk_catalog_s {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_catalog_v2_s {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6[3];
    unsigned long long _field7;
    unsigned char _field8[0];
};

struct tracev3_chunk_firehose_old_s {
    unsigned long long _field1;
    int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_firehose_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5[2];
    unsigned char _field6[0];
};

struct tracev3_chunk_header_s {
    struct mach_timebase_info _field1;
    unsigned long long _field2;
    long long _field3;
    int _field4;
    int _field5;
    int _field6;
    unsigned int _field7;
    struct tracev3_subchunk_preamble_s _field8;
    struct tracev3_subchunk_continuous_s _field9;
    struct tracev3_subchunk_preamble_s _field10;
    struct tracev3_subchunk_systeminfo_s _field11;
    struct tracev3_subchunk_preamble_s _field12;
    struct tracev3_subchunk_generation_s _field13;
    struct tracev3_subchunk_preamble_s _field14;
    struct tracev3_subchunk_timezone_s _field15;
};

struct tracev3_chunk_log_preamble_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
};

struct tracev3_chunk_oversize_old_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned char _field5[0];
};

struct tracev3_chunk_oversize_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
    unsigned long long _field5;
    unsigned int _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned char _field9[0];
};

struct tracev3_chunk_preamble_s {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
};

struct tracev3_chunk_s {
    struct tracev3_chunk_preamble_s _field1;
    union {
        struct tracev3_chunk_header_s _field1;
        struct tracev3_chunk_catalog_s _field2;
        struct tracev3_chunk_catalog_v2_s _field3;
        struct tracev3_chunk_log_preamble_s _field4;
        struct tracev3_chunk_firehose_s _field5;
        struct tracev3_chunk_firehose_old_s _field6;
        struct tracev3_chunk_oversize_s _field7;
        struct tracev3_chunk_oversize_old_s _field8;
        struct tracev3_chunk_statedump_s _field9;
        struct tracev3_chunk_simple_s _field10;
        unsigned char _field11[0];
    } _field2;
};

struct tracev3_chunk_simple_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5[2];
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned char _field9[16];
    unsigned char _field10[16];
    unsigned char _field11[0];
};

struct tracev3_chunk_statedump_s {
    unsigned long long _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4[3];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned char _field7[16];
    unsigned char _field8[0];
};

struct tracev3_subchunk_continuous_s {
    unsigned long long _field1;
};

struct tracev3_subchunk_generation_s {
    unsigned char _field1[16];
    int _field2;
    int _field3;
};

struct tracev3_subchunk_preamble_s {
    unsigned int _field1;
    unsigned int _field2;
};

struct tracev3_subchunk_systeminfo_s {
    int _field1;
    int _field2;
    char _field3[16];
    char _field4[32];
};

struct tracev3_subchunk_timezone_s {
    char _field1[48];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char foreground;
    unsigned char background;
} CDStruct_d78a4c71;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned short _field3;
        unsigned int _field4;
    } _field1;
    unsigned long long _field2;
    _Atomic unsigned long long _field3;
} CDUnion_780443c4;
