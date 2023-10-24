//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface ADFMIPListener : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedListener;	// IMP=0x00200000002881e6
- (void).cxx_destruct;	// IMP=0x0020000000288117
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000287fa2
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000287f1b
- (void)startListening;	// IMP=0x0010000000287ed0
- (id)init;	// IMP=0x0010000000287e0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
