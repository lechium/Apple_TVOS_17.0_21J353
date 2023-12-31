//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery;
@protocol OS_dispatch_queue;

@interface IDSServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    FTMessageDelivery *_messageDelivery;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004538d8
@property(readonly, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_authenticateMessageForRequest:(id)arg1;	// IMP=0x001000000045362c
- (id)_DSAuthIDForPushToken:(id)arg1;	// IMP=0x0010000000453547
- (id)_stringRepresentationForRealm:(long long)arg1;	// IMP=0x001000000045352d
- (id)authenticatePhoneUserWithRequest:(id)arg1;	// IMP=0x0010000000453478
- (id)initWithQueue:(id)arg1 messageDelivery:(id)arg2;	// IMP=0x00100000004533df
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000453326

@end

