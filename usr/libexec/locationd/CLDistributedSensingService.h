//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLDistributedSensingService : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001d6fee
+ (id)getSilo;	// IMP=0x00100000001d6f92
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d6f79
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001d6f1c
- (void)unregisterClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00200000001d7074
- (void)registerClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00100000001d706e
- (void)endService;	// IMP=0x00100000001d7068
- (void)beginService;	// IMP=0x00100000001d7062
- (void)dealloc;	// IMP=0x00100000001d7033
- (id)init;	// IMP=0x00100000001d6ff6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

