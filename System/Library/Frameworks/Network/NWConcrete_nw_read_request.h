//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NWConcrete_nw_connection;
@protocol OS_dispatch_data, OS_nw_array, OS_nw_content_context, OS_nw_error, OS_nw_fd_wrapper;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_read_request : NSObject
{
    NWConcrete_nw_read_request *next;	// 8 = 0x8
    NWConcrete_nw_read_request *tail;	// 16 = 0x10
    CDUnknownBlockType data_completion;	// 24 = 0x18
    CDUnknownBlockType file_handler;	// 32 = 0x20
    CDUnknownBlockType data_multiple_completion;	// 40 = 0x28
    CDUnknownBlockType buffer_completion;	// 48 = 0x30
    NWConcrete_nw_connection *connection;	// 56 = 0x38
    unsigned int qos_class;	// 64 = 0x40
    int variant;	// 68 = 0x44
    unsigned long long min;	// 72 = 0x48
    unsigned long long max;	// 80 = 0x50
    unsigned long long progress;	// 88 = 0x58
    NSObject<OS_nw_fd_wrapper> *fd;	// 96 = 0x60
    void *progress_timer_source;	// 104 = 0x68
    unsigned int progress_msecs;	// 112 = 0x70
    char *buffer;	// 120 = 0x78
    NSObject<OS_dispatch_data> *data;	// 128 = 0x80
    NSObject<OS_nw_content_context> *context;	// 136 = 0x88
    NSObject<OS_nw_content_context> *repliable_message;	// 144 = 0x90
    NSObject<OS_nw_error> *error;	// 152 = 0x98
    NSObject<OS_nw_array> *read_array;	// 160 = 0xa0
    NSObject<OS_nw_array> *context_array;	// 168 = 0xa8
    unsigned int reported:1;	// 176 = 0xb0
    unsigned int is_complete:1;	// 176 = 0xb0
    unsigned int file_progress_started:1;	// 176 = 0xb0
    unsigned int file_finished:1;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000005de280
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000005de1d0
- (id)init;	// IMP=0x00000000005ddfa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

