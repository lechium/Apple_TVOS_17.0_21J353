//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NWConcrete_nw_endpoint_mode_handler, OS_nw_association, OS_nw_context, OS_nw_endpoint, OS_nw_object, OS_nw_parameters, OS_nw_path, OS_nw_path_evaluator, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_handler : NSObject
{
    CDUnknownFunctionPointerType report_callback;	// 8 = 0x8
    NSObject<OS_nw_object> *callback_context;	// 16 = 0x10
    NSObject<OS_nw_endpoint> *endpoint;	// 24 = 0x18
    NSObject<OS_nw_parameters> *parameters;	// 32 = 0x20
    NSObject<OS_nw_context> *context;	// 40 = 0x28
    CDUnknownBlockType migration_callback;	// 48 = 0x30
    NSObject<OS_nw_association> *association;	// 56 = 0x38
    NSObject<OS_nw_path> *current_path;	// 64 = 0x40
    NWConcrete_nw_endpoint_handler *parent_handler;	// 72 = 0x48
    struct nw_endpoint_handler_event_s event;	// 80 = 0x50
    NSObject<OS_xpc_object> *inactive_agent_uuids;	// 88 = 0x58
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;	// 96 = 0x60
    NSObject<OS_xpc_object> *triggered_agent_uuids;	// 104 = 0x68
    struct os_unfair_lock_s lock;	// 112 = 0x70
    int mode;	// 116 = 0x74
    int state;	// 120 = 0x78
    unsigned long long start_time;	// 128 = 0x80
    void *fallback_timer;	// 136 = 0x88
    unsigned int top_id;	// 144 = 0x90
    struct atomic<unsigned int> last_child_id;	// 148 = 0x94
    unsigned char id_chain[16];	// 152 = 0x98
    char id_str[75];	// 168 = 0xa8
    NSObject<NWConcrete_nw_endpoint_mode_handler> *mode_handler;	// 248 = 0xf8
    NSObject<OS_nw_path_evaluator> *override_evaluator;	// 256 = 0x100
    int privacy_stance;	// 264 = 0x108
    unsigned int dry_run:1;	// 268 = 0x10c
    unsigned int triggering_voluntary_agents:1;	// 268 = 0x10c
    unsigned int reuse_association:1;	// 268 = 0x10c
    unsigned int has_better_path:1;	// 268 = 0x10c
    unsigned int has_finished_transport:1;	// 268 = 0x10c
    unsigned int logging_disabled:1;	// 268 = 0x10c
}

- (id).cxx_construct;	// IMP=0x00000000003ba330
- (void).cxx_destruct;	// IMP=0x00000000003ba280
- (void)dealloc;	// IMP=0x00000000003b9570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

