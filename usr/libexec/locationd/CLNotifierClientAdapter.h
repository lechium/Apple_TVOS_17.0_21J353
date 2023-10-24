//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLNotifierClientAdapter : NSObject
{
    struct CLNotifierClientBase *_client;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0020000000d6705a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d66ffd
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy) NSString *debugDescription;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x0010000000d672fb
- (void)invalidate;	// IMP=0x0010000000d672d4
- (id)initWithClient:(struct CLNotifierClientBase *)arg1;	// IMP=0x0010000000d67278
- (id)init;	// IMP=0x0010000000d67073

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

