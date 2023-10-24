//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (UsefulConstructors)
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlying:(id)arg4;	// IMP=0x002000000002c2bf
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x001000000002c2a3
+ (void)setDefaultRetryIntervalForTests:(double)arg1;	// IMP=0x00100000001a7f8a
- (_Bool)isCKServerInternalError;	// IMP=0x00200000000ad97e
- (_Bool)isCKKSServerPluginError:(long long)arg1;	// IMP=0x00100000000ad77f
- (_Bool)ckksIsCKErrorRecordChangedError;	// IMP=0x00100000000ad4cb
- (double)retryInterval;	// IMP=0x00100000001a7c70
- (double)cuttlefishRetryAfter;	// IMP=0x00100000001a7a0d
- (_Bool)isRetryable;	// IMP=0x00100000001a77db
- (_Bool)_isRetryableAKError;	// IMP=0x00100000001a771c
- (_Bool)_isRetryableNSURLError;	// IMP=0x00100000001a768c
- (_Bool)isCuttlefishError:(long long)arg1;	// IMP=0x00100000001a748d
- (_Bool)_isCKServerInternalError;	// IMP=0x00100000001a7364
@end

