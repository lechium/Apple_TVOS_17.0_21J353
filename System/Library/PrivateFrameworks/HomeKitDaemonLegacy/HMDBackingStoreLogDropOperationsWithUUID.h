//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreLogDropOperationsWithUUID
{
    NSUUID *_uuid;	// 40 = 0x28
    long long _maskValue;	// 48 = 0x30
    long long _compareValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000007f154d
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)mainReturningError;	// IMP=0x00000000007f0f39
- (id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000007f0e91

@end

