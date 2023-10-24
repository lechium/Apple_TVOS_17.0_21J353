//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SFNotificationProxy : NSObject
{
    NSString *_externalID;	// 8 = 0x8
    NSMutableArray *_internalIDs;	// 16 = 0x10
    _Bool _showingMedium;	// 24 = 0x18
    NSString *_triggeredID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _dismissedHandler;	// 48 = 0x30
    CDUnknownBlockType _tappedHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007839e
@property(copy, nonatomic) CDUnknownBlockType tappedHandler; // @synthesize tappedHandler=_tappedHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)reset;	// IMP=0x00100000000782b0
- (id)externalID;	// IMP=0x0010000000078237
- (void)handleNotificationWasDismissed:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000078040
- (void)handleNotificationWasTapped:(id)arg1;	// IMP=0x0010000000077e8b
- (void)requestUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3 canPostNotification:(_Bool)arg4;	// IMP=0x0010000000077e79
- (void)requestRemoveAll;	// IMP=0x0010000000077dd2
- (void)requestRemove:(id)arg1 withReason:(long long)arg2;	// IMP=0x00100000000778a7
- (void)requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3;	// IMP=0x001000000007788f
- (void)_requestPostOrUpdate:(id)arg1 info:(id)arg2 mediumVariant:(_Bool)arg3 canPost:(_Bool)arg4;	// IMP=0x0010000000077522
- (id)init;	// IMP=0x00100000000774cb

@end

